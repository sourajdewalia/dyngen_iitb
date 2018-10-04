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
  fem::cmn_sve etaab_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct etaab_save
{
  arr<float> delm6;
  arr<float> delp6;
  arr<float> em6t;
  arr<float> etabrt;
  arr<float> fart;
  arr<float> p6t;

  etaab_save() :
    delm6(dimension(7), fem::fill0),
    delp6(dimension(14), fem::fill0),
    em6t(dimension(7), fem::fill0),
    etabrt(dimension(25), fem::fill0),
    fart(dimension(25), fem::fill0),
    p6t(dimension(14), fem::fill0)
  {}
};

void
etaab(
  common& cmn,
  float const& far,
  float const& em6,
  float const& p6,
  float& eta,
  float const& etaads,
  float& etaasv,
  float const& p6ds,
  float& p6dsav,
  float const& am6ds,
  float& am6dsv,
  int const& ides,
  float const& far7ds,
  float& far7sv)
{
  FEM_CMN_SVE(etaab);
  arr_ref<float> delm6(sve.delm6, dimension(7));
  arr_ref<float> delp6(sve.delp6, dimension(14));
  arr_ref<float> em6t(sve.em6t, dimension(7));
  arr_ref<float> etabrt(sve.etabrt, dimension(25));
  arr_ref<float> fart(sve.fart, dimension(25));
  arr_ref<float> p6t(sve.p6t, dimension(14));
  if (is_called_first_time) {
    {
      static const float values[] = {
        .0390f, 0.0585f, 0.0732f, 0.0078f, 0.0976f, 0.1171f, 0.1268f,
          0.1463f, 0.1619f, 0.1834f, 0.1951f, 0.2195f, 0.2439f,
          0.2927f, 0.3415f, 0.4146f, 0.4634f, 0.5366f, 0.6341f,
          0.7317f, 0.2893f, 0.9268f, 1.000f, 1.0634f, 1.7f
      };
      fem::data_of_type<float>(FEM_VALUES_AND_SIZE),
        fart;
    }
    {
      static const float values[] = {
        0.9400f, 0.9887f, 1.0193f, 1.0306f, 1.0227f, 0.9672f,
          0.9377f, 0.9207f, 0.9354f, 0.9626f, 0.9773f, 1.0193f,
          1.0532f, 1.077f, 1.0781f, 1.077f, 1.0747f, 1.0668f,
          1.0578f, 1.0510f, 1.0374f, 1.1902f, 1.00f, 0.9626f, 0.9151f
      };
      fem::data_of_type<float>(FEM_VALUES_AND_SIZE),
        etabrt;
    }
    {
      static const float values[] = {
        1.00f, 1.071f, 1.190f, 1.309f, 1.428f, 1.547f, 1.666f
      };
      fem::data_of_type<float>(FEM_VALUES_AND_SIZE),
        em6t;
    }
    {
      static const float values[] = {
        0.f, 0.013f, 0.041f, 0.073f, 0.110f, 0.147f, 0.187f
      };
      fem::data_of_type<float>(FEM_VALUES_AND_SIZE),
        delm6;
    }
    {
      static const float values[] = {
        0.220f, 0.2267f, 0.250f, 0.300f, 0.3333f, 0.3767f, 0.4167f,
          0.500f, 0.5833f, 0.6667f, 1.75f, 0.8333f, 0.9167f, 1.0f
      };
      fem::data_of_type<float>(FEM_VALUES_AND_SIZE),
        p6t;
    }
    {
      static const float values[] = {
        -0.142f, -0.125f, -0.10f, -0.075f, -0.062f, -0.05f, -0.41f,
          -0.027f, -0.019f, -0.013f, -0.008f, -0.004f, -0.0021f, 0.f
      };
      fem::data_of_type<float>(FEM_VALUES_AND_SIZE),
        delp6;
    }
  }
  int i = fem::int0;
  int k = fem::int0;
  int m = fem::int0;
  float fartds = fem::float0;
  int n = fem::int0;
  int j = fem::int0;
  float do7i = fem::float0;
  int nn = fem::int0;
  arr_1d<3, float> x(fem::fill0);
  arr_1d<3, float> y(fem::fill0);
  int mm = fem::int0;
  float cor1 = fem::float0;
  int l = fem::int0;
  int ll = fem::int0;
  float cor2 = fem::float0;
  float etai = fem::float0;
  //C
  //C        generalized afterburner performance BLOCK DATA as a function of C       fuel air ratio with correction factors for off-design afterburner C     entrance pressure and Mach number
  //C
  if (ides != i) {
    goto statement_5;
  }
  FEM_DO_SAFE(k, 1, 25) {
    etabrt(k) = etabrt(k) * etaads / etaasv;
  }
  //C
  FEM_DO_SAFE(k, 1, 25) {
    fart(k) = fart(k) * far7ds / far7sv;
  }
  //C
  FEM_DO_SAFE(k, 1, 7) {
    em6t(k) = em6t(k) * am6ds / am6dsv;
  }
  //C
  FEM_DO_SAFE(m, 1, 16) {
    p6t(m) = p6t(m) * p6ds / p6dsav;
  }
  //C
  etaasv = etaads;
  p6dsav = p6ds;
  far7sv = fartds;
  am6dsv = am6ds;
  return;
  //C
  statement_5:
  //C
  n = 0;
  if (far > 0.067f) {
    goto statement_8;
  }
  FEM_DO_SAFE(j, 1, 25) {
    if (far >= fart(j)) {
      n = j - 1;
    }
  }
  if (n == 0) {
    n = 1;
  }
  if (n >= 24) {
    n = 23;
  }
  //C
  do7i = 3;
  nn = n - 1 + i;
  x(i) = fart(nn);
  y(i) = etabrt(nn);
  parabo(x, y, far, eta);
  goto statement_9;
  //C
  statement_8:
  eta = -2.f * far + 0.1948f;
  statement_9:
  m = 0;
  //C
  FEM_DO_SAFE(j, 1, 7) {
    if (em6 >= em6t(j)) {
      m = j - 1;
    }
  }
  //C
  if (m == 0) {
    m = 1;
  }
  if (m >= 6) {
    m = 5;
  }
  //C
  FEM_DO_SAFE(i, 1, 3) {
    mm = m - 1 + i;
    x(i) = em6t(mm);
    y(i) = delm6(mm);
  }
  //C
  parabo(x, y, em6, cor1);
  l = 0;
  FEM_DO_SAFE(j, 1, 14) {
    if (p6 >= p6t(j)) {
      l = j - 1;
    }
  }
  //C
  if (l == 0) {
    l = 1;
  }
  if (l >= 13) {
    l = 12;
  }
  //C
  FEM_DO_SAFE(i, 1, 3) {
    ll = l - 1 + i;
    x(i) = p6t(ll);
    y(i) = delp6(ll);
  }
  parabo(x, y, p6, cor2);
  eta = etai * (1.f - cor1) * (1.f + cor2);
}

} // namespace BASIC_ENG
