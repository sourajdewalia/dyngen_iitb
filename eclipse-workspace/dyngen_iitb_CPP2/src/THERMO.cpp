#include <fem.hpp> // Fortran EMulation library of fable module
#include <PROCOM.cpp>

namespace BASIC_ENG {

using namespace fem::major_types;

//void
//procom(...)
//{
//  throw std::runtime_error(
//    "Missing function implementation: procom");
//}

struct common_units_thermo
{
  bool si;

  common_units_thermo() :
    si(fem::bool0)
  {}
};

struct common_thermo :
  fem::common,
  common_units_thermo
{
//  common_thermo(
//    int argc,
//    char const* argv[])
//  :
//    fem::common(argc, argv)
//  {}
}cmnthrmo;

void
thermo(
  common_thermo& cmn,
  float const& px,
  float& hx,
  float& tx,
  float  sx ,
  float& amx,
  int const& l,
  float const& far,
  int const& k)
{
  common_write write(cmn);
  float dem = fem::float0;
  float cpg = fem::float0;
  float pstd = fem::float0;
  float fx = fem::float0;
  float cs = fem::float0;
  float ak = fem::float0;
  float cp = fem::float0;
  float r = fem::float0;
  float phi = fem::float0;
  float h = fem::float0;
  int i = fem::int0;
  float delh = fem::float0;
  //C
  //C        Provides thermodynamic conditions using PROCOM
  //C
  if (cmn.si) {
    goto statement_100;
  }
  dem = 1.986375f;
  cpg = 0.250f;
  pstd = 1.0f;
  goto statement_101;
  //C
  statement_100:
  dem = 8316.41f;
  cpg = 1048.f;
  pstd = 101325.0f;
  statement_101:
  //C
  fx = 0.f;
  if (l == 1) {
    fx = far;
  }
  if (k == 1) {
    goto statement_1;
  }
  procom(cmnprocom, fx, tx, cs, ak, cp, r, phi, hx);
  goto statement_3;
  //C
  statement_1:
  tx = hx / cpg;
  FEM_DO_SAFE(i, 1, 15) {
    procom(cmnprocom, fx, tx, cs, ak, cp, r, phi, h);
    delh = hx - h;
    if (fem::abs(delh) <= 0.00001f * hx) {
      goto statement_3;
    }
    tx += delh / cpg;
  }
  //C
  write(8, "('NO CONVERGENCE  IN  HERMO$$S$$$')");
  statement_3:
  sx = phi - r * fem::alog(px / pstd);
  amx = dem / r;
  //C
}

} // namespace BASIC_ENG
