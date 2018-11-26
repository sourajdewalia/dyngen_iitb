#include <fem.hpp> // Fortran EMulation library of fable module

namespace BASIC_ENG {

using namespace fem::major_types;

struct common_dyn
{
  int itran;
  float time;
  float dt;
  float tf;
  int jtran;
  int nstep;
  float tprint;
  float dtprnt;

  common_dyn() :
    itran(fem::int0),
    time(fem::float0),
    dt(fem::float0),
    tf(fem::float0),
    jtran(fem::int0),
    nstep(fem::int0),
    tprint(fem::float0),
    dtprnt(fem::float0)
  {}
};

struct common_foc
{
  arr<float, 2> fo;

  common_foc() :
    fo(dimension(50, 4), fem::fill0)
  {}
};

struct common_deriv :
  fem::common,
  common_dyn,
  common_foc
{
//	  common_deriv(
//    int argc,
//    char const* argv[])
//  :
//    fem::common(argc, argv)
//  {}
}cmndrv;

float
deriv(
  common_deriv& cmn,
  int const& i,
  float const& x)
{
  float return_value = fem::float0;
  arr_ref<float, 2> fo(cmn.fo, dimension(50, 4));
  //
  float xo = fem::float0;
  //C
  //C        Computes time derivatives
  //C
  if (cmn.jtran == 1) {
    goto statement_1;
  }
  return_value = 0.0f;
  fo(i, 1) = x;
  fo(i, 2) = x;
  fo(i, 3) = return_value;
  fo(i, 4) = return_value;
  return return_value;
  statement_1:
  xo = fo(1, 2);
  return_value = (x - xo) / cmn.dt;
  fo(i, 1) = x;
  fo(i, 3) = return_value;
  return return_value;
}

} // namespace BASIC_ENG
