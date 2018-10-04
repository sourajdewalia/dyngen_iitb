#include <fem.hpp> // Fortran EMulation library of fable module

namespace BASIC_ENG {

using namespace fem::major_types;

using fem::common;

void
ram(
  float const& am,
  float& etar)
{
  //C
  //C        Calculates ram recovery defined by MIL-E-5008B specifications
  //C
  if (am > 1.f) {
    goto statement_2;
  }
  etar = 1.f;
  statement_1:
  return;
  statement_2:
  if (am > 5.f) {
    goto statement_3;
  }
  etar = 1.f - 0.075f * (fem::pow((am - 1.f), 1.35f));
  goto statement_1;
  statement_3:
  etar = 900.f / ((fem::pow4(am)) + 935.f);
  goto statement_1;
}

} // namespace BASIC_ENG
