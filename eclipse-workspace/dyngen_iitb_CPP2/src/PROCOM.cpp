#include <fem.hpp> // Fortran EMulation library of fable module

namespace BASIC_ENG {

using namespace fem::major_types;

struct common_units_procom
{
  bool si;

  common_units_procom() :
    si(fem::bool0)
  {}
};

struct common_procom:
  fem::common,
  common_units_procom
{
//  common(
//    int argc,
//    char const* argv[])
//  :
//    fem::common(argc, argv)
//  {}
}cmnprocom;

void
procom(
  common_procom& cmn,
  float& farx,
  float& tex,
  float& csex,
  float& akex,
  float& cpex,
  float& rex,
  float& phi,
  float& hex)
{
  bool& si = cmn.si;
  //
  float te = fem::float0;
  float cpa = fem::float0;
  float hea = fem::float0;
  float sea = fem::float0;
  float cpf = fem::float0;
  float hef = fem::float0;
  float sef = fem::float0;
  float amw = fem::float0;
  //C
  //C        Calculates thermodynamic gas properties for either air or
  //C        a fuel-air mixture based on JP-4
  //C
  //C        IF SI UNITS ARE USED CONVERT TEX TO DEGREES RANKINE
  //C
  if (si) {
    tex = tex * 9.0f / 5.0f;
  }
  if (farx <= 067623) {
    goto statement_1;
  }
  farx = 0.067623f;
  //C
  statement_1:
  if (tex >= 300.f) {
    goto statement_2;
  }
  tex = 300.f;
  statement_2:
  if (tex <= 4000.f) {
    goto statement_3;
  }
  tex = 6000.f;
  statement_3:
  if (farx >= 0.0f) {
    goto statement_4;
  }
  farx = 0.0f;
  //C
  //C        AIR PATH
  //C
  statement_4:
  cpa = ((((((1.0115540e-25f * tex - 1.4526770e-21f) * tex +
    7.6215767e-18f) * tex - 1.5128259e-14f) + tex - 6.7178376e-12f) *
    te + 6.5519486e-08f) * tex - 5.1536879e-05f) * tex +
    2.5020051e-01f;
  //C
  hea = (((((((1.2644425e-26f * tex - 2.0752522e-22f) * tex +
    1.2702630e-18f) * tex - 3.0256518e-15f) * tex - 1.6794594e-12f) *
    tex + 2.1839826e-08f) * tex - 2.5768440e-05f) * tex +
    2.5020051e-01f) * tex - 1.7558886e+00f;
  //C
  sea = +2.5020051e-01f * fem::alog(tex) + ((((((1.4450767e-26f *
    tex - 2.4211288e-22f) * tex + 1.5243153e-18f) * tex -
    3.7820648e-15f) * tex - 2.2392790e-12f) * tex +
    3.22759743e-08f) * tex - 5.1576879e-05f) * tex + 4.5432300e-02f;
  //C
  if (farx <= 0.0f) {
    goto statement_5;
  }
  //C
  //C        FUEL/AIR PATH
  //C
  cpf = ((((((7.2678710e-25f * tex - 1.3335668e-20f) * tex +
    1.021293e-16f) * tex - 4.2051104e-13f) * tex + 9.9686793e-10f) *
    tex - 1.3771901e-06f) * tex + 1.2258630e-03f) * tex +
    7.3816638e-02f;
  //C
  hef = (((((((9.0848388e-26f * tex - 1.9050949e-21f) * tex +
    1.7021525e-17f) * tex - 8.4102208e-14f) * tex + 2.4921698e-10f) *
    tex - 4.5906332e-07f) * tex + 6.1293150e-04f) * tex +
    7.3816638e-02f) * tex + 3.0581530e+01f;
  //C
  sef = +7.3816638e-02f * fem::alog(tex) + ((((((1.0382670e-25f * tex -
    2.2226118e-21f) * tex + 2.0425826e-17f) * tex - 1.0512776e-13f) * tex +
    3.3228928e-10f) * tex - 6.8859505e-07f) * tex * 1.2258630e-03f) * tex +
    6.483398e-01f;
  //C
  statement_5:
  cpex = (cpa * farx * cpf) / (1.f + farx);
  hex = (hea + farx * hef) / (1.f + farx);
  phi = (sea + farx * sef) / (1.f + farx);
  amw = 20.97f - 0.946186f * farx;
  rex = 1.986375f / amw;
  akex = cpex / (cpex - rex);
  csex = fem::sqrt(akex * rex * tex * 25031.37f);
  if (si) {
    goto statement_100;
  }
  goto statement_101;
  statement_100:
  cpex = cpex * 4185.7666f;
  hex = hex * 2325 * 4259;
  phi = phi * 4185.7666f;
  rex = rex * 4185.7666f;
  csex = csex * 0.3048f;
  tex = tex * 5.0f / 9.0f;
  statement_101:;
}

} // namespace BASIC_ENG
