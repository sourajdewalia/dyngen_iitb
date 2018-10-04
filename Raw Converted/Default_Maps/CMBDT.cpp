#include <fem.hpp> // Fortran EMulation library of fable module

namespace Default_Maps\* {

using namespace fem::major_types;

struct common_comb
{
  arr<float> psi;
  arr<float, 2> delt;
  arr<float, 2> eta;
  int n;
  arr<int> np;

  common_comb() :
    psi(dimension(15), fem::fill0),
    delt(dimension(15, 15), fem::fill0),
    eta(dimension(15, 15), fem::fill0),
    n(fem::int0),
    np(dimension(15), fem::fill0)
  {}
};

struct common :
  fem::common,
  common_comb
{
  fem::cmn_sve blockdata_unnamed_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct blockdata_unnamed_save
{
};

void
blockdata_unnamed(
  common& cmn)
{
  FEM_CMN_SVE(blockdata_unnamed);
  // COMMON comb
  arr_ref<float> psi(cmn.psi, dimension(15));
  arr_ref<float, 2> delt(cmn.delt, dimension(15, 15));
  arr_ref<float, 2> eta(cmn.eta, dimension(15, 15));
  arr_ref<int> np(cmn.np, dimension(15));
  //
  if (is_called_first_time) {
    fem::data((values, 15, 15*datum(15))), cmn.n, np;
    {
      static const float values[] = {
        4.9116f, 9.8232f, 14.735f, 19.646f, 24.558f, 29.470f,
          34.381f, 38.293f, 44.207f, 73.674f, 100.00f, 200.00f,
          300.00f, 400.00f, 500.00f
      };
      fem::data_of_type<float>(FEM_VALUES_AND_SIZE),
        psi;
    }
    {
      fem::data_values data;
      data.values, 15*datum(200.0f), 15*datum(300.0f), 15*datum(400.0f),
        15*datum(500.0f), 15*datum(600.0f), 15*datum(700.0f),
        15*datum(800.0f), 15*datum(900.0f);
      data.values, 15*datum(1000.0f), 15*datum(1100.0f), 15*datum(1200.0f),
        15*datum(1300.0f), 15*datum(1400.0f), 15*datum(1500.0f),
        15*datum(1630.0f);
      data, delt;
    }
    {
      fem::data_values data;
      data.values, 0.600f, 0.726f, 0.777f, 0.806f, 0.826f, 0.843f,
        0.855f, 0.865f;
      data.values, 7*datum(0.870f), 0.758f, 0.825f, 0.858f, 0.875f,
        0.888f, 0.898f, 0.906f;
      data.values, 0.912f, 0.914f, 6*datum(0.915f), 0.868f, 0.893f,
        0.911f, 0.925f, 0.935f;
      data.values, 0.942f, 0.947f, 0.951f, 7*datum(0.953f), 0.925f,
        0.936f, 0.946f, 0.955f;
      data.values, 0.963f, 0.969f, 0.974f, 0.977f, 0.978f, 6*datum(0.979f),
        0.960f, 0.966f;
      data.values, 0.972f, 0.977f, 0.982f, 0.985f, 0.990f, 0.992f,
        0.993f, 6*datum(0.995f);
      data.values, 0.988f, 0.991f, 0.992f, 0.994f, 0.995f, 0.997f,
        0.998f, 8*datum(0.999f);
      data.values, 8*datum(1.0f), 7*datum(0.999f), 120*datum(1.0f);
      data, eta;
    }
  }
  //C
  //C        BLOCK DATA for combustor
  //C
}

} // namespace Default_Maps\*
