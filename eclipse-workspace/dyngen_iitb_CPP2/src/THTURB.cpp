#include <fem.hpp> // Fortran EMulation library of fable module

namespace BASIC_ENG {

using namespace fem::major_types;

void
error(...)
{
  throw std::runtime_error(
    "Missing function implementation: error");
}

void
thermo(...)
{
  throw std::runtime_error(
    "Missing function implementation: thermo");
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
  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

void
thturb(
  common& cmn,
  float const& dh,
  float const& eta,
  float const& far,
  float const& h,
  float const& s,
  float const& p,
  float const& to,
  float& ho,
  float const& so,
  float& po)
{
  float dem = fem::float0;
  float hop = fem::float0;
  float pt = fem::float0;
  int i = fem::int0;
  float tt = fem::float0;
  float st = fem::float0;
  float amwt = fem::float0;
  float dels = fem::float0;
  float oem = fem::float0;
  float x1 = fem::float0;
  //C
  //C        Performs isentropic calculations for turbines
  //C
  if (cmn.si) {
    goto statement_100;
  }
  dem = 1.986375f;
  goto statement_101;
  statement_100:
  dem = 8316.41f;
  statement_101:
  //C
  ho = h - dh;
  hop = h - dh / eta;
  pt = p / 2.f;
  FEM_DO_SAFE(i, 1, 25) {
    thermo(pt, hop, tt, st, amwt, 1, far, 1);
    dels = st - s;
    if (fem::abs(dels) <= 0.00005f * s) {
      goto statement_2;
    }
    pt = p * fem::exp(dels * amwt / oem + fem::alog(pt / p));
  }
  error();
  statement_2:
  po = pt;
  //C
  thermo(po, ho, to, so, x1, 1, far, 1);
  //C
}

} // namespace BASIC_ENG
