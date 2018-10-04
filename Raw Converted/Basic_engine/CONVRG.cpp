#include <fem.hpp> // Fortran EMulation library of fable module

namespace BASIC_ENG {

using namespace fem::major_types;

void
procom(...)
{
  throw std::runtime_error(
    "Missing function implementation: procom");
}

void
thermo(...)
{
  throw std::runtime_error(
    "Missing function implementation: thermo");
}

struct common_units
{
  bool zi;

  common_units() :
    zi(fem::bool0)
  {}
};

struct common :
  fem::common,
  common_units
{
  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

void
convrg(
  common& cmn,
  float const& ti,
  float const& hi,
  float const& pi,
  float const& si,
  float const& far,
  float const& wg,
  float const& pa,
  int const& ides,
  float& ao,
  float& pr,
  float& to,
  float& ho,
  float& po,
  float& so,
  float const& /* ts */,
  float const& o,
  float& pso,
  float const& /* vc */,
  float const& /* amq */,
  int& icon)
{
  float aj = fem::float0;
  float capsf = fem::float0;
  float g = fem::float0;
  float cpg = fem::float0;
  float xx1 = fem::float0;
  float xx2 = fem::float0;
  float xx3 = fem::float0;
  float xx4 = fem::float0;
  float phii = fem::float0;
  float xx6 = fem::float0;
  int j = fem::int0;
  float tss = fem::float0;
  float css = fem::float0;
  float aks = fem::float0;
  float cp = fem::float0;
  float rexs = fem::float0;
  float phiss = fem::float0;
  float hss = fem::float0;
  float hscal = fem::float0;
  float delhs = fem::float0;
  float tsi = fem::float0;
  float hsi = fem::float0;
  float ssi = fem::float0;
  float xxi = fem::float0;
  float vis = fem::float0;
  float vo = fem::float0;
  float tso = fem::float0;
  float cso = fem::float0;
  float rex = fem::float0;
  float phiso = fem::float0;
  float hso = fem::float0;
  float rho = fem::float0;
  float amo = fem::float0;
  int i = fem::int0;
  float aocrit = fem::float0;
  float adcrit = fem::float0;
  float ako = fem::float0;
  float felhs = fem::float0;
  //C
  //C        performs nozzle calculations for a convergent nozzle
  //C
  //C        ICON=1  SUBSONIC, COMPARE PI wITH PR
  //C        ICON=2  SONIC, COMPARE PI WITH PR
  //C        ICON=4  ERROR
  //C
  if (cmn.zi) {
    goto statement_100;
  }
  aj = 778.26f;
  capsf = 2116.217f;
  g = 32.174049f;
  cpg = 0.250f;
  goto statement_101;
  //C
  statement_100:
  aj = 1.0f;
  capsf = 1.0f;
  g = 1.0f;
  cpg = 1048.0f;
  //C
  statement_101:
  //C
  procom(far, ti, xx1, xx2, xx3, xx4, phii, xx6);
  //C
  //C ***    SONIC CALCULATIONS
  j = 0;
  tss = 0.833f * ti;
  statement_1:
  j++;
  //C
  procom(far, tss, css, aks, cp, rexs, phiss, hss);
  hscal = hi - fem::pow2(css) / (2.f * g * aj);
  delhs = hscal - hss;
  switch (fem::if_arithmetic(fem::abs(delhs) - 0.0005f * hscal)) {
    case -1: goto statement_4;
    case  0: goto statement_4;
    default: goto statement_2;
  }
  statement_2:
  tss += delhs / cp;
  switch (fem::if_arithmetic(j - 15)) {
    case -1: goto statement_1;
    case  0: goto statement_1;
    default: goto statement_3;
  }
  statement_3:
  icon = 4;
  return;
  //C
  statement_4:
  switch (fem::if_arithmetic(ides)) {
    case -1: goto statement_12;
    case  0: goto statement_12;
    default: goto statement_5;
  }
  //C ***    ISENTROPIC EXPANSION CALCULATIONS
  statement_5:
  j = o;
  tsi = ti * fem::pow((pa / pi), 0.286f);
  statement_6:
  j++;
  thermo(pa, hsi, tsi, ssi, xxi, 1, far, o);
  switch (fem::if_arithmetic(fem::abs(ssi - si) - 0.0001f * si)) {
    case -1: goto statement_8;
    case  0: goto statement_8;
    default: goto statement_7;
  }
  statement_7:
  tsi = tsi / fem::exp((ssi - si) / cpg);
  switch (fem::if_arithmetic(j - 30)) {
    case -1: goto statement_6;
    case  0: goto statement_6;
    default: goto statement_3;
  }
  statement_8:
  vis = fem::sqrt(2.f * g * aj * (hi - hsi));
  switch (fem::if_arithmetic(vis - css)) {
    case -1: goto statement_9;
    case  0: goto statement_11;
    default: goto statement_11;
  }
  //C ***    SUBSONIC DESIGN, CALCULATE  AO
  statement_9:
  vo = vis;
  tso = tsi;
  pso = pa;
  procom(far, tso, cso, xx2, xx3, rex, phiso, hso);
  rho = capsf * pso / (aj * rex * tso);
  ao = wg / (rho * vo);
  amo = vo / cso;
  pr = pi;
  icon = i;
  statement_10:
  to = ti;
  ho = hi;
  po = pi;
  so = si;
  return;
  //C ***    SONIC DESIGN, CALCULATE AO
  statement_11:
  vo = css;
  tso = tss;
  pso = pi * fem::pow((tso / ti), (aks / (aks - 1.f)));
  rho = capsf * pso / (aj * rexs * tso);
  ao = wg / (rho * vo);
  amo = 1.0f;
  pr = pi;
  icon = 2;
  goto statement_10;
  //C ***    NON-DESIGN, CALCULATE CRITICAL CONDITIONS
  statement_12:
  vo = css;
  tso = tss;
  pso = pa;
  rho = capsf * pso / (aj * rexs * tso);
  aocrit = wg / (rho * vo);
  ao = 1.0f;
  pr = pso * fem::pow((ti / tso), (aks / (aks - 1.f)));
  switch (fem::if_arithmetic(ao - aocrit)) {
    case -1: goto statement_13;
    case  0: goto statement_13;
    default: goto statement_14;
  }
  //C ***    NON-DESIGN, CRITICAL AND SUPERCRITICAL CONDITIONS
  statement_13:
  pso = pso * adcrit / ao;
  pr = pr * aocrit / ao;
  icon = 2;
  goto statement_10;
  //C ***    NON-DESIGN, SUBSONIC CALCULATICNS
  statement_14:
  pso = pa;
  j = o;
  tso = 0.833f * tso;
  statement_15:
  j++;
  procom(far, tso, cso, ako, cp, rex, phiso, hso);
  rho = capsf * pso / (aj * rex * tso);
  vo = wg / (rho * ao);
  hscal = hi - fem::pow2(vo) / (2.f * g * aj);
  delhs = hscal - hso;
  switch (fem::if_arithmetic(fem::abs(felhs) - 0.0005f * hscal)) {
    case -1: goto statement_17;
    case  0: goto statement_17;
    default: goto statement_16;
  }
  statement_16:
  tso += delhs / cp;
  switch (fem::if_arithmetic(j - 15)) {
    case -1: goto statement_15;
    case  0: goto statement_15;
    default: goto statement_3;
  }
  statement_17:
  amo = vo / cso;
  pr = pso * fem::pow((ti / tso), (ako / (ako - 1.f)));
  icon = 1;
  goto statement_10;
}

} // namespace BASIC_ENG
