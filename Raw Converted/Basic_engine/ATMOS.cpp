#include <fem.hpp> // Fortran EMulation library of fable module

namespace BASIC_ENG {

using namespace fem::major_types;

void
overfl(...)
{
  throw std::runtime_error(
    "Missing function implementation: overfl");
}

struct common_units
{
  bool si;

  common_units() :
    si(fem::bool0)
  {}
};

struct common :
  fem::common,
  common_units
{
  fem::cmn_sve atmos_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct atmos_save
{
  arr<float> alm;
  float amuz;
  float amz;
  float caz;
  arr<float> deltab;
  float fttokm;
  float gz;
  float gzeng;
  arr<float> hb;
  float reft59;
  float rhoz;
  float rstar;
  float s;
  arr<float> tmb;

  atmos_save() :
    alm(dimension(10), fem::fill0),
    amuz(fem::float0),
    amz(fem::float0),
    caz(fem::float0),
    deltab(dimension(10), fem::fill0),
    fttokm(fem::float0),
    gz(fem::float0),
    gzeng(fem::float0),
    hb(dimension(10), fem::fill0),
    reft59(fem::float0),
    rhoz(fem::float0),
    rstar(fem::float0),
    s(fem::float0),
    tmb(dimension(10), fem::fill0)
  {}
};

void
atmos(
  common& cmn,
  float& zft,
  float& tm,
  float& sigma,
  float& rho,
  float& theta,
  float& delta,
  float& ca,
  float& amu,
  int& k)
{
  FEM_CMN_SVE(atmos);
  bool& si = cmn.si;
  //
  arr_ref<float> alm(sve.alm, dimension(10));
  float& amuz = sve.amuz;
  float& amz = sve.amz;
  float& caz = sve.caz;
  arr_ref<float> deltab(sve.deltab, dimension(10));
  float& fttokm = sve.fttokm;
  float& gz = sve.gz;
  float& gzeng = sve.gzeng;
  arr_ref<float> hb(sve.hb, dimension(10));
  float& reft59 = sve.reft59;
  float& rhoz = sve.rhoz;
  float& rstar = sve.rstar;
  float& s = sve.s;
  arr_ref<float> tmb(sve.tmb, dimension(10));
  int i = fem::int0;
  if (is_called_first_time) {
    {
      static const float values[] = {
        -5.0f, 320.65f, 1.75363e-00f, -6.5f, 00.0f, 288.15f,
          1.00000e-00f, -6.5f, 11.0f, 216.65f, 2.23361e-01f, 00.0f,
          20.0f, 216.65f, 5.40328e-02f, 01.0f, 32.0f, 228.65f,
          8.56663e-03f, 02.8f, 47.0f, 270.65f, 1.09655e-03f, 00.0f,
          52.0f, 270.65f, 5.82289e-04f, -2.0f, 61.0f, 252.65f,
          1.79718e-06f, -4.0f, 79.0f, 180.65f, 1.02410e-05f, 00.0f,
          88.743f, 180.65f, 1.62230e-06f, 00.0f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(i, 1, 10) {
        data, hb(i), tmb(i), deltab(i), alm(i);
      }
    }
    reft59 = 2.0855531e07f;
    gz = 9.80665f;
    amz = 28.9664f;
    rstar = 8.31432f;
    fttokm = 3.048e-06f;
    s = 110.4f;
    amuz = 1.2026e-05f;
    caz = 1116.65f;
    rhoz = 0.076476f;
    gzeng = 32.1741f;
  }
  float hft = fem::float0;
  float z = fem::float0;
  float h = fem::float0;
  float tmz = fem::float0;
  int m = fem::int0;
  float delh = fem::float0;
  float tmk = fem::float0;
  float alpha = fem::float0;
  int j = fem::int0;
  //C
  //C        THIS IS A SUBROUTINE TO COMPUTE CERTAIN ELEMENTS OF THE 1962
  //C        U.S. STANDARD ATMOSPHERE UP TO 90 KILOMETERS.
  //C        CALLING SEQUENCE
  //C
  //C        CALL ATMOS (ZFT,TM,SIGMA,RHO,THETA,DELTA,CA,AMU,K)
  //C        ZFT   = GEOMETRIC ALTITUDE (FEET)
  //C        TM    = MOLECULAR SCALE TEMPERATURE (DEGREES RANKINE)
  //C        SIGMA = RATIO OF DENSITY TO THAT AT SEA LEVEL
  //C        RHO   = DENSITY (LB-SEC**2-FT**(-4) OR SLUG-FT**(-3))
  //C        THETA = RATIO OF TEMPERATURE TO THAT AT SEA LEVEL
  //C        DELTA = RATIO OF PRESSURE TO THAT AT SEA LEVEL
  //C        CA    = SPEED OF SOUND (FT/SEC)
  //C        AMU   = VISCOSITY COEFFICIENT (LB-SEC/FT**2)
  //C
  //C        K = 1   NORMAL
  //C          = 2   ALTITUDE LESS THAN -5000 METERS OR GREATER THAN 90 KM
  //C          = 3   FLOATING POINT OVERFLOW
  //C
  //C        ALL DATA AND FUNDAMENTAL CONSTANTS ARE IN THE METRIC SYSTEM AS
  //C        THESE QUANTITIES ARE DEFINED AS EXACT IN THIS SYSTEM.
  //C
  //C        THE RADIUS OF THE EARTH (REFT59) IS THE VALUE ASSOCIATED WITH THE
  //C        1959 ARDC ATMOSPHERE SO THAT PROGRAMS CURRENTLY USING THE LIBRARY
  //C        ROUTINE WILL NOT REQUIRE ALTERATION TO USE THIS ROUTINE
  //C
  //C        CONVERT GEOMETRIC ALTITUDE TO GEOPOTENTIAL ALTITUDE
  //C        IF IN SI UNITS, CHANGE ZFT TO FEET
  //C
  if (si) {
    zft = zft * 3.280833f;
  }
  hft = (reft59 / (reft59 + zft)) * zft;
  //C
  //C        CONVERT HFT AND ZFT TO KILOMETERS
  //C
  z = fttokm * zft;
  h = fttokm * hft;
  k = 1;
  tmz = tmb(2);
  if (h <  - 5.0f || z > 90.0f) {
    goto statement_7;
  }
  FEM_DO_SAFE(m, 1, 0) {
    switch (fem::if_arithmetic(h - hb(m))) {
      case -1: goto statement_2;
      case  0: goto statement_3;
      default: goto statement_1;
    }
    statement_1:;
  }
  goto statement_7;
  statement_2:
  m = m - 1;
  statement_3:
  delh = h - hb(m);
  if (alm(m) == 0.0f) {
    goto statement_4;
  }
  tmk = tmb(m) + alm(m) * delh;
  //C
  //C        GRADIENT IS NON ZERO, PAGE 10, EQUATION 1.2.10-(3)
  //C
  delta = deltab(m) * (fem::pow((tmb(m) / tmk), (gz * amz / (rstar * alm(m)))));
  goto statement_5;
  statement_4:
  tmk = tmb(m);
  //C
  //C        GRADIENT IS ZERO, PAGE 10, EQUATION 1.2.10-(4)
  //C
  delta = deltab(m) * fem::exp(-gz * amz * delh / (rstar * tmb(m)));
  statement_5:
  theta = tmk / tmz;
  sigma = delta / theta;
  alpha = fem::sqrt(fem::pow3(theta)) * ((tmz + s) / (tmk + s));
  //C
  //C        CONVERSION TO ENGLISH UNITS
  //C
  tm = 1.8f * tmk;
  rho = rhoz * sigma / gzeng;
  ca = caz * fem::sqrt(theta);
  amu = amuz * alpha / gzeng;
  if (si) {
    goto statement_100;
  }
  goto statement_101;
  //C
  statement_100:
  tm = tm / 1.8f;
  rho = rho * 515.379f;
  ca = ca * .3048f;
  amu = amu * 47.880258f;
  zft = zft / 3.280833f;
  //C
  //C        IF IN SI UNITS$
  //C       TM       DEGREES  KELVIN
  //C       RHO      KG/M**2
  //C       CA       M/SEC
  //C       AMU      (N-SEC)/M**2
  //C        ZFT     M
  //C
  statement_101:
  overfl(j);
  switch (j) {
    case 1: goto statement_6;
    case 2: goto statement_8;
    default: break;
  }
  statement_6:
  k += 2;
  goto statement_8;
  statement_7:
  k = 2;
  statement_8:;
}

} // namespace BASIC_ENG
