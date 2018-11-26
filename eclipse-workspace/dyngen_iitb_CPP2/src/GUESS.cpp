#include <fem.hpp> // Fortran EMulation library of fable module

namespace BASIC_ENG {

using namespace fem::major_types;

//using fem::common;

float
guess(
  int const& m,
  float const& t,
  float const& td,
  float const& p,
  float const& pd,
  float const& w,
  float const& wd,
  float const& d,
  float const& dd,
  float const& vd)
{
  float return_value = fem::float0;
  //C
  if (m == 0) {
    return_value = vd * (fem::pow((t / td), 1.60f)) * (fem::pow((dd / d),
      0.50f));
  }
  if (m == 1) {
    return_value = vd * (fem::pow((p / pd), 1.80f)) * (fem::pow((dd / d),
      0.33f));
  }
  if (m == 2) {
    return_value = vd * (fem::pow((w / wd), 0.33f)) * (fem::pow((dd / d),
      1.00f));
  }
  if (m == 3) {
    return_value = vd * (fem::pow((w / wd), 0.00f)) * (fem::pow((p / pd),
      0.50f));
  }
  if (m == 4) {
    return_value = vd * (fem::pow((w / wd), 0.00f)) * (fem::pow((p / pd),
      0.50f));
  }
  if (m == 5) {
    return_value = vd * (fem::pow((t / td), 1.1f)) * (fem::pow((dd / d), 0.7f));
  }
  if (m == 6) {
    return_value = vd * (fem::pow((p / pd), 1.00f)) * (fem::pow((d / dd),
      0.25f));
  }
  if (m == 7) {
    return_value = vd * (fem::pow((p / pd), 0.62f)) * (fem::pow((d / dd),
      0.31f));
  }
  if (m == 8) {
    return_value = vd * fem::pow((fem::pow((t / td), 1.2f)), dd) / d;
  }
  if (m == 9) {
    return_value = vd * p / pd * (fem::pow((d / dd), 1.5f));
  }
  return return_value;
}

} // namespace BASIC_ENG
