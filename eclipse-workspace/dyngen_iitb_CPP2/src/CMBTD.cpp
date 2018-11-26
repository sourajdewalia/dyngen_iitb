#include <fem.hpp> // Fortran EMulation library of fable module

namespace BASIC_ENG {

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
          34.381f, 39.293f, 44.207f, 73.674f, 100.0f, 200.0f, 300.0f,
          400.0f, 500.0f
      };
      fem::data_of_type<float>(FEM_VALUES_AND_SIZE),
        psi;
    }
    {
      fem::data_values data;
      data.values, 15*datum(200.f), 15*datum(300.f), 15*datum(400.f),
        15*datum(500.f), 15*datum(600.f), 15*datum(700.f), 15*datum(800.f),
        15*datum(900.f);
      data.values, 15*datum(1000.f), 15*datum(1100.f), 15*datum(1200.f),
        15*datum(1300.f), 15*datum(1400.f), 15*datum(1500.f),
        15*datum(1600.f);
      data, delt;
    }
    {
      fem::data_values data;
      data.values, 0.600f, 0.758f, 0.868f, 0.925f, 0.960f, 0.988f,
        9*datum(1.00f), 0.726f;
      data.values, 0.825f, 0.893f, 0.936f, 0.966f, 0.991f, 9*datum(1.00f),
        0.777f, 0.858f;
      data.values, 0.911f, 0.946f, 0.972f, 0.992f, 9*datum(1.00f),
        0.806f, 0.875f, 0.925f;
      data.values, 0.955f, 0.977f, 0.996f, 9*datum(1.00f), 0.826f,
        0.888f, 0.935f, 0.933f;
      data.values, 0.982f, 0.995f, 9*datum(1.00f), 0.843f, 0.898f,
        0.942f, 0.969f, 0.985f;
      data.values, 0.997f, 9*datum(1.00f), 0.855f, 0.906f, 0.967f,
        0.976f, 0.900f, 0.998f;
      data.values, 9*datum(1.00f), 0.865f, 0.912f, 0.951f, 0.977f,
        0.992f, 0.999f, 9*datum(1.00f);
      data.values, 0.870f, 0.914f, 0.953f, 0.978f, 0.993f, 0.999f,
        0.999f, 8*datum(1.00f);
      data.values, 0.870f, 0.915f, 0.953f, 0.979f, 0.995f, 0.999f,
        0.999f, 8*datum(1.00f);
      data.values, 0.870f, 0.915f, 0.953f, 0.979f, 0.995f, 0.999f,
        0.999f, 8*datum(1.00f);
      data.values, 0.870f, 0.915f, 0.953f, 0.979f, 0.995f, 0.999f,
        0.999f, 8*datum(1.00f);
      data.values, 0.870f, 0.915f, 0.953f, 0.979f, 0.995f, 0.999f,
        0.999f, 8*datum(1.00f);
      data.values, 0.870f, 0.9150f, 953, 0.979f, 0.995f, 0.999f,
        0.999f, 8*datum(1.00f);
      data.values, 0.870f, 0.915f, 0.953f, 0.979f, 0.995f, 0.999f,
        0.999f, 8*datum(1.00f);
      data, eta;
    }
  }
  //C
}

} // namespace BASIC_ENG
