#include <fem.hpp> // Fortran EMulation library of fable module

namespace BASIC_ENG {

using namespace fem::major_types;

void
parabo(...)
{
  throw std::runtime_error(
    "Missing function implementation: parabo");
}

struct common :
  fem::common
{
  fem::cmn_sve ram2_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct ram2_save
{
  arr<float> fhn;
  arr<float> prinlt;

  ram2_save() :
    fhn(dimension(15), fem::fill0),
    prinlt(dimension(15), fem::fill0)
  {}
};

void
ram2(
  common& cmn,
  float const& am,
  float const& etar)
{
  FEM_CMN_SVE(ram2);
  // SAVE
  arr_ref<float> fhn(sve.fhn, dimension(15));
  arr_ref<float> prinlt(sve.prinlt, dimension(15));
  //
  if (is_called_first_time) {
    {
      static const float values[] = {
        0.f, 0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.8f, 1.1f, 1.2f, 1.4f,
          1.6f, 1.8f, 2.2f, 2.4f, 2.7f
      };
      fem::data_of_type<float>(FEM_VALUES_AND_SIZE),
        fhn;
    }
    {
      static const float values[] = {
        0.9f, 0.932f, 0.95f, 0.961f, 0.968f, 0.97f, 0.971f, 0.97f,
          0.9681f, 0.958f, 0.94f, 0.9101f, 0.858f, 0.8201f, 0.75f
      };
      fem::data_of_type<float>(FEM_VALUES_AND_SIZE),
        prinlt;
    }
  }
  //C
  //C        Calculates special cases of input ram recovery as a function of
  //C        flight Mach number
  //C
  float h = 0.f;
  int j = fem::int0;
  int m = fem::int0;
  FEM_DO_SAFE(j, 1, 15) {
    if (am >= fhn(j)) {
      m = j - 1;
    }
  }
  if (m == 0) {
    m = 1;
  }
  if (m >= 14) {
    m = 13;
  }
  //C
  int i = fem::int0;
  int mm = fem::int0;
  arr_1d<3, float> x(fem::fill0);
  arr_1d<3, float> y(fem::fill0);
  FEM_DO_SAFE(i, 1, 3) {
    mm = m - 1 + i;
    x(i) = fhn(mm);
    y(i) = prinlt(mm);
  }
  //C
  parabo(x, y, am, etar);
}

} // namespace BASIC_ENG
