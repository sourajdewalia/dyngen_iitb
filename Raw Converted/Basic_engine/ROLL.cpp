#include <fem.hpp> // Fortran EMulation library of fable module

namespace BASIC_ENG {

using namespace fem::major_types;

struct common_foc
{
  arr<float, 2> fo;

  common_foc() :
    fo(dimension(50, 4), fem::fill0)
  {}
};

struct common_soc
{
  arr<float, 2> so;

  common_soc() :
    so(dimension(10, 6), fem::fill0)
  {}
};

struct common_cdelay
{
  arr<float, 2> pdata;
  arr<float> timept;

  common_cdelay() :
    pdata(dimension(5, 50), fem::fill0),
    timept(dimension(50), fem::fill0)
  {}
};

struct common :
  fem::common,
  common_foc,
  common_soc,
  common_cdelay
{
  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

void
roll(
  common& cmn)
{
  // COMMON soc
  arr_ref<float, 2> so(cmn.so, dimension(10, 6));
  // COMMON cdelay
  arr_ref<float, 2> pdata(cmn.pdata, dimension(5, 50));
  arr_ref<float> timept(cmn.timept, dimension(50));
  //
  //C
  //C        Saves past values of dynamic variables needed for calculating
  //C        derivatives, etc.
  //C
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, 50) {
    so(i, 2) = so(i, 1);
    so(i, 4) = so(i, 3);
  }
  //C
  FEM_DO_SAFE(i, 1, 10) {
    so(i, 6) = so(i, 5);
    so(i, 5) = so(i, 4);
    so(i, 3) = so(i, 2);
    so(i, 2) = so(i, 1);
  }
  //C
  int ni = fem::int0;
  int no = fem::int0;
  int j = fem::int0;
  int n1 = fem::int0;
  FEM_DO_SAFE(i, 1, 49) {
    ni = 51 - i;
    no = 50 - i;
    timept(ni) = timept(no);
    FEM_DO_SAFE(j, 1, 5) {
      pdata(j, n1) = pdata(j, no);
    }
  }
  //C
}

} // namespace BASIC_ENG
