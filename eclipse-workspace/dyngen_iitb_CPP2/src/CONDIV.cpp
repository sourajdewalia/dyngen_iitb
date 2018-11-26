#include <fem.hpp> // Fortran EMulation library of fable module

namespace BASIC_ENG {

using namespace fem::major_types;

void
afquir(...)
{
  throw std::runtime_error(
    "Missing function implementation: afquir");
}

void
procom(...)
{
  throw std::runtime_error(
    "Missing function implementation: procom");
}

void
procon(...)
{
  throw std::runtime_error(
    "Missing function implementation: procon");
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
condiv(
  common& cmn,
  float const& ti,
  float const& hi,
  float const& pi,
  float const& si,
  float const& far,
  float const& wg,
  float const& pa,
  int const& ides,
  float& at,
  float& ao,
  float& pir,
  float& tt,
  float& ht,
  float& pt,
  float const& /* s */,
  float const& /* t */,
  float& to,
  float& ho,
  float& po,
  float& so,
  float& tst,
  float& tso,
  float& pst,
  float& pso,
  float& vt,
  float& vo,
  float& amt,
  float& amo,
  int& icon)
{
  arr_1d<9, float> q(fem::fill0);
  float aj = fem::float0;
  float capsf = fem::float0;
  float g = fem::float0;
  float xx1 = fem::float0;
  float xx2 = fem::float0;
  float xx3 = fem::float0;
  float xx4 = fem::float0;
  float phii = fem::float0;
  float xx6 = fem::float0;
  int j = fem::int0;
  float tss = fem::float0;
  float css = fem::float0;
  float akicp = fem::float0;
  float rexs = fem::float0;
  float phiss = fem::float0;
  float hss = fem::float0;
  float hscal = fem::float0;
  float delhs = fem::float0;
  float cp = fem::float0;
  float ak = fem::float0;
  float rho = fem::float0;
  float cso = fem::float0;
  float rex = fem::float0;
  float phiso = fem::float0;
  float hso = fem::float0;
  float phical = fem::float0;
  float phecal = fem::float0;
  float delphi = fem::float0;
  float st = fem::float0;
  int mam = fem::int0;
  float aocal = fem::float0;
  float ea = fem::float0;
  float dir = fem::float0;
  float tsot = fem::float0;
  int jcon = fem::int0;
  float t1 = fem::float0;
  float tsc = fem::float0;
  int i = fem::int0;
  float cst = fem::float0;
  float gp = fem::float0;
  float phist = fem::float0;
  float hst = fem::float0;
  float eh = fem::float0;
  float tstt = fem::float0;
  float pr = fem::float0;
  float aoid = fem::float0;
  float o = fem::float0;
  int n = fem::int0;
  float dela = fem::float0;
  float psx = fem::float0;
  float psy = fem::float0;
  float ts = fem::float0;
  //C
  //C        Performs nozzle calculations for a convergent-divergent
  //C        (C-D) nozzle
  //C
  //C        ICON-1  SUBSONIC, COMPARE PIR NITH PI
  //C        ICON-2  SONIC, SHOCK INSIDE NOZZLE, COMPARE PIR WITH PI
  //C       ICON-3  SONIC, SHOCK OUTSIDE NOZZLE, COMPARE PIR WITH PI
  //C       ICON-4   ERROR
  //C
  q(2) = 0.f;
  q(3) = 0;
  if (cmn.zi) {
    goto statement_100;
  }
  aj = 778.26f;
  capsf = 2116.7170f;
  g = 32.174069f;
  goto statement_101;
  statement_100:
  aj = 1.0f;
  capsf = 101325.0f;
  g = 1.0f;
  statement_101:
  //C
  procom(far, ti, xx1, xx2, xx3, xx4, phii, xx6);
  //C        SONIC CALCULATIONS
  j = 0.f;
  tss = 0.833f * ti;
  statement_1:
  j++;
  procom(far, tss, css, akicp, rexs, phiss, hss);
  hscal = hi - fem::pow2(css) / (2.f * g * aj);
  delhs = hscal - hss;
  switch (fem::if_arithmetic(fem::abs(delhs) - 0.000f * hscal)) {
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
  statement_4:
  switch (fem::if_arithmetic(ides)) {
    case -1: goto statement_11;
    case  0: goto statement_11;
    default: goto statement_5;
  }
  //C        SONIC DESIGN. CALCULATE AT
  statement_5:
  vt = css;
  tst = tss;
  pst = pi * fem::pow((tst / ti), (ak / (ak - 1.f)));
  rho = capsf * pst / (aj * rexs * tst);
  at = wg / (rho * vt);
  amt = 1.0f;
  //C        IOEAL EXPANSION DESIGN, CALCULATE AO
  pso = pa;
  j = 0;
  tso = ti * fem::pow((pso / pi), 0.286f);
  statement_6:
  j++;
  procom(far, tso, cso, ak, cp, rex, phiso, hso);
  phical = phii - rex * fem::alog(pi / pso);
  delphi = phecal - phiso;
  switch (fem::if_arithmetic(fem::abs(delphi) - 0.0001f * phical)) {
    case -1: goto statement_8;
    case  0: goto statement_8;
    default: goto statement_7;
  }
  statement_7:
  tso = tso * fem::exp(4.f * delphi);
  switch (fem::if_arithmetic(j - 15)) {
    case -1: goto statement_6;
    case  0: goto statement_6;
    default: goto statement_3;
  }
  statement_8:
  vo = fem::sqrt(2.f * g * aj * (hi - hso));
  amo = vo / cso;
  ao = (at / amo) * fem::pow((2.f * (1.f + (ak - 1.f) * fem::pow2(
    amo) / 2.f) / (ak + 1.f)), ((ak + 1.f) / (2.f * (ak - 1.f))));
  pir = pi;
  icon = 3;
  statement_9:
  to = ti;
  ho = hi;
  po = pi;
  so = si;
  statement_10:
  tt = ti;
  ht = hi;
  pt = pi;
  st = si;
  return;
  //C        ASSUME SONIC THROAT AND ISENTROPIC EXPANSION TO AO
  statement_11:
  vt = css;
  amt = 1.0f;
  st = tss;
  rho = wg / (at * vt);
  pst = rho * aj * rexs * tst / capsf;
  pir = pst * fem::pow((ti / tst), (ak / (ak - 1.f)));
  switch (fem::if_arithmetic(pst - pa)) {
    case -1: goto statement_12;
    case  0: goto statement_27;
    default: goto statement_27;
  }
  statement_12:
  tso = fem::pow(0.95f, ti);
  mam = 0;
  statement_13:
  procom(far, tso, cso, ak, cp, rex, phiso, hso);
  amo = fem::sqrt(2.f * ((ti / tso) - 1.0f) / (ak - 1.f));
  aocal = (at / amo) * fem::pow((2.f * (1.f + (ak - 1.f) * fem::pow2(
    amo) / 2.f) / (ak + 1.f)), ((ak + 1.f) / (2.f * (ak - 1.f))));
  ea = (ao - aocal) / ao;
  dir = fem::sqrt(ao / aocal);
  afquir(q(1), tso, ea, 0.f, 100.f, 0.0001f, dir, tsot, jcon);
  switch (jcon) {
    case 1: goto statement_14;
    case 2: goto statement_18;
    case 3: goto statement_3;
    default: break;
  }
  statement_14:
  tso = tsot;
  switch (fem::if_arithmetic(tso - ti)) {
    case -1: goto statement_15;
    case  0: goto statement_13;
    default: goto statement_16;
  }
  statement_15:
  tsc = 2.f * t1 / (ak + 1.f);
  if (tso > tsc) {
    goto statement_17;
  }
  statement_16:
  tso = 0.98f * ti;
  goto statement_13;
  statement_17:
  if (q(2) < 30.0f || amo < 0.95f || mam == 1) {
    goto statement_13;
  }
  tso = 2.f * ti / (2.f + 0.98f * (ak - 1.f));
  mam = i;
  goto statement_13;
  statement_18:
  pso = pir * fem::pow((tso / ti), (ak / (ak - 1.f)));
  switch (fem::if_arithmetic(pso - pa)) {
    case -1: goto statement_20;
    case  0: goto statement_19;
    default: goto statement_27;
  }
  //C ***   CRITICAL FLOW, ISENTROPIC EXPAMSION TO PA
  statement_19:
  vo = amo * cso;
  icon = 1;
  goto statement_9;
  //C ***    SUBSONIC FLOW
  statement_20:
  pso = pa;
  q(2) = 0.f;
  q(3) = 0.f;
  j = 0;
  tso = 0.833f * ti;
  statement_21:
  j++;
  procom(far, tso, cso, ak, cp, rex, phiso, hso);
  rho = capsf * pso / (aj * rex * tso);
  vo = wg / (rho * ao);
  hscal = hi - fem::pow2(vo) / (2.f * g * aj);
  delhs = hscal - hso;
  switch (fem::if_arithmetic(fem::abs(delhs) - 0.0005f * hscal)) {
    case -1: goto statement_23;
    case  0: goto statement_23;
    default: goto statement_22;
  }
  statement_22:
  tso += delhs / cp;
  switch (fem::if_arithmetic(j - 15)) {
    case -1: goto statement_21;
    case  0: goto statement_21;
    default: goto statement_3;
  }
  statement_23:
  amo = vo / cso;
  pir = pso * fem::pow((ti / tso), (ak / (ak - 1.f)));
  tst = tso;
  procon(far, tst, cst, ak, gp, rex, phist, hst);
  pst = pir * fem::pow((tst / ti), (ak / (ak - 1.f)));
  rho = pst * capsf / (aj * rex * tst);
  vt = wg / (rho * at);
  hscal = hi - fem::pow2(vt) / (2.f * g * aj);
  eh = (hscal - hst) / hscal;
  dir = 1.f + (hscal - hst) / (cp * tst);
  afquir(q(1), tst, eh, 0.f, 20.f, 0.0005f, dir, tstt, jcon);
  switch (jcon) {
    case 1: goto statement_25;
    case 2: goto statement_26;
    case 3: goto statement_3;
    default: break;
  }
  statement_25:
  tst = tstt;
  goto statement_26;
  statement_26:
  amt = vt / cst;
  icon = 1;
  goto statement_9;
  //C ***    SUPERCRITICAL FLO, ISENTROPIC EXPANSION TO PA
  statement_27:
  pso = pa;
  j = 0;
  tso = ti * fem::pow((pso / pr), 0.286f);
  statement_28:
  j++;
  procom(far, tso, cso, ak, cp, rex, phiso, hso);
  phical = phii - rex * fem::alog(pir / pso);
  delphi = phical - phiso;
  switch (fem::if_arithmetic(fem::abs(delphi) - 0.0001f * phical)) {
    case -1: goto statement_30;
    case  0: goto statement_30;
    default: goto statement_2;
  }
  tso = tso * fem::exp(4.f * delphi);
  switch (fem::if_arithmetic(j - 15)) {
    case -1: goto statement_28;
    case  0: goto statement_26;
    default: goto statement_3;
  }
  statement_30:
  tso = fem::sqrt(2.f * g * aj * (hi - hso));
  amo = vo / cso;
  aoid = (at / amo) * fem::pow((2.f * (1.f + (ak - 1.f) * fem::pow2(
    amo) / 2.f) / (ak + 1.f)), ((ak + 1.f) / (2.f * (ak - 1.f))));
  icon = 3;
  n = o;
  switch (fem::if_arithmetic(ao - aoid)) {
    case -1: goto statement_31;
    case  0: goto statement_9;
    default: goto statement_32;
  }
  //C ***    SUPERCRT|CAL FLOW, ISENTROPIC EXPANSION TO AO
  statement_31:
  n = 1;
  statement_32:
  tso = 0.833f * t1;
  j = 0;
  statement_33:
  j++;
  procom(far, tso, cso, ak, cp, rex, phiso, hso);
  amo = fem::sqrt(2.f * ((ti / tso) - 1.f) / (ak - 1.f));
  aocal = (at / amo) * fem::pow((2.f * (1.f + (ak - 1.f) * fem::pow2(
    amo) / 2.f) / (ak + 1.f)), ((ak + 1.f) / (2.f * (ak - 1.f))));
  dela = ao - aocal;
  switch (fem::if_arithmetic(fem::abs(dela) - 0.0001f * ao)) {
    case -1: goto statement_35;
    case  0: goto statement_35;
    default: goto statement_36;
  }
  tso = tso * fem::sqrt(aocal / ao);
  switch (fem::if_arithmetic(j - 50)) {
    case -1: goto statement_33;
    case  0: goto statement_33;
    default: goto statement_3;
  }
  statement_35:
  switch (fem::if_arithmetic(n)) {
    case -1: goto statement_37;
    case  0: goto statement_37;
    default: goto statement_36;
  }
  //C ***    UNDEREXPANDEO, SHOCK OUTSIDE NOZZLE
  statement_36:
  pso = pir * fem::pow((tso / ti), (ak / (ak - 1.f)));
  vo = amo * cso;
  goto statement_9;
  //C ***    OVEREXPANOED, FIND SHOCK POSITION
  statement_37:
  psx = pir * fem::pow((tso / ti), (ak / (ak - 1.f)));
  psy = psx * (2.f * ak * fem::pow2(amo) / (ak + 1.f) - (ak - 1.f) / (
    ak + 1.f));
  switch (fem::if_arithmetic(pa - psy)) {
    case -1: goto statement_38;
    case  0: goto statement_39;
    default: goto statement_39;
  }
  //C        OVEREXPANDED, SHOCK OUTSIDE NOZZLE
  statement_38:
  pso = psx;
  vo = ao * cso;
  goto statement_9;
  //C ***    OVEREXPANDED, SHOCK INSIDE NOZZLE
  statement_39:
  pso = pa;
  j = 0;
  tso = 0.833f * ti;
  statement_40:
  j++;
  procom(far, tso, cso, ak, cp, rex, phiso, hso);
  rho = capsf * pso / (aj * rex * tso);
  vo = wg / (rho * ao);
  hscal = hi - fem::pow2(vo) / (2.f * g * aj);
  delhs = hscal - hso;
  switch (fem::if_arithmetic(fem::abs(delhs) - 0.0001f * hscal)) {
    case -1: goto statement_42;
    case  0: goto statement_42;
    default: goto statement_41;
  }
  statement_41:
  ts = tso + delhs / cp;
  switch (fem::if_arithmetic(j - 15)) {
    case -1: goto statement_40;
    case  0: goto statement_40;
    default: goto statement_3;
  }
  statement_42:
  amo = vo / cso;
  to = ti;
  ho = hi;
  po = pso * fem::pow((to / tso), (ak / (ak - 1.f)));
  so = phii - rex * fem::alog(po);
  icon = 2;
  goto statement_10;
}

} // namespace BASIC_ENG
