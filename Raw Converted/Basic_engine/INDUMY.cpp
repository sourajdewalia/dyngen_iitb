#include <fem.hpp> // Fortran EMulation library of fable module

namespace BASIC_ENG {

using namespace fem::major_types;

struct common_dumint
{
  arr<float> cnxx;
  arr<float, 2> prxx;
  arr<float, 2> wacxx;
  arr<float, 2> etaxx;
  int ncnx;
  arr<int> nptx;

  common_dumint() :
    cnxx(dimension(15), fem::fill0),
    prxx(dimension(15, 15), fem::fill0),
    wacxx(dimension(15, 15), fem::fill0),
    etaxx(dimension(15, 15), fem::fill0),
    ncnx(fem::int0),
    nptx(dimension(15), fem::fill0)
  {}
};

struct common :
  fem::common,
  common_dumint
{
  fem::cmn_sve indumy_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct indumy_save
{
  arr<float> wacar;
  arr<float> xcnxx;

  indumy_save() :
    wacar(dimension(15), fem::fill0),
    xcnxx(dimension(15), fem::fill0)
  {}
};

void
indumy(
  common& cmn,
  float const& /* cni */,
  float& zi,
  float const& /* waci */,
  int const& ides)
{
  FEM_CMN_SVE(indumy);
  arr_ref<float> cnxx(cmn.cnxx, dimension(15));
  arr_ref<float, 2> prxx(cmn.prxx, dimension(15, 15));
  arr_ref<float, 2> wacxx(cmn.wacxx, dimension(15, 15));
  arr_ref<float, 2> etaxx(cmn.etaxx, dimension(15, 15));
  arr_ref<int> nptx(cmn.nptx, dimension(15));
  //
  arr_ref<float> wacar(sve.wacar, dimension(15));
  arr_ref<float> xcnxx(sve.xcnxx, dimension(15));
  if (is_called_first_time) {
    {
      static const float values[] = {
        0.001f, 0.1f, 0.2f, 0.3f, 0.5f, 0.8f, 1.0f, 1.5f, 2.0f, 3.0f,
          4.0f, 5.0f, 6.0f, 7.0f, 9.0f
      };
      fem::data_of_type<float>(FEM_VALUES_AND_SIZE),
        xcnxx;
    }
    {
      static const float values[] = {
        5.0f, 4.5f, 4.0f, 3.5f, 3.0f, 2.5f, 2.0f, 1.5f, 1.0f, 0.8f,
          0.6f, 0.4f, 0.25f, 0.1f, 0.05f
      };
      fem::data_of_type<float>(FEM_VALUES_AND_SIZE),
        wacar;
    }
  }
  int maci = fem::int0;
  float waids = fem::float0;
  float cn = fem::float0;
  float cnids = fem::float0;
  int i = fem::int0;
  int j = fem::int0;
  //C
  //C        Makes intermediate compressor not change air conditions
  //C        for engine configurations e and h
  //C
  if (ides != 1) {
    goto statement_1;
  }
  waids = maci;
  cnids = cn;
  zi = 2.f / 3.5f;
  statement_1:
  cmn.ncnx = 15;
  //C
  FEM_DO_SAFE(i, 1, 15) {
    nptx(i) = 15;
    cnxx(i) = cnxx(i) * cnids;
    //C
    FEM_DO_SAFE(j, 1, 15) {
      prxx(i, j) = fem::ffloat(j + 3) / 4.f;
      etaxx(i, j) = 1.f;
      wacxx(j, i) = wacar(i) * (0.993f * 0.001f * fem::ffloat(j)) * waids;
    }
  }
}

} // namespace BASIC_ENG
