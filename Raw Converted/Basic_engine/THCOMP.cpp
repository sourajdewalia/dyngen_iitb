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
thcomp(
  common& cmn,
  float const& pr,
  float const& eta,
  float const& t,
  float const& h,
  float const& s,
  float const& p,
  float const& t0,
  float& h0,
  float const& s0,
  float& p0)
{
  float cpg = fem::float0;
  float tp = fem::float0;
  int i = fem::int0;
  float hp = fem::float0;
  float sp = fem::float0;
  float x1 = fem::float0;
  float x2 = fem::float0;
  float dels = fem::float0;
  //C
  //C        Performs isentropic calculations for compressors
  //C
  cpg = 250.f;
  if (cmn.si) {
    cpg = 1048.0f;
  }
  p0 = p * pr;
  tp = t * fem::pow(pr, 0.28572f);
  //C
  FEM_DO_SAFE(i, 1, 25) {
    thermo(p0, hp, tp, sp, x1, 0, x2, 0);
    dels = sp - s;
    if (fem::abs(dels) <= 0.00005f * s) {
      goto statement_2;
    }
    tp = tp / fem::exp(dels / cpg);
  }
  error();
  statement_2:
  h0 = h + ((hp - h) / eta);
  thermo(p0, h0, t0, s0, x1, 0, x2, 1);
}

} // namespace BASIC_ENG
