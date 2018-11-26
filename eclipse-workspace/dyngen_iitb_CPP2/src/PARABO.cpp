#include <fem.hpp> // Fortran EMulation library of fable module

namespace BASIC_ENG {

using namespace fem::major_types;

//using fem::common;

void
parabo(
  arr_cref<float> x,
  arr_cref<float> y,
  const float& xd,
  float& yans)
{
  x(dimension(3));
  y(dimension(3));
  //C
  //C        Parabolic curve-fit routine
  //C
  float a = ((x(1) - x(2)) * (y(1) - y(3)) - (x(1) - x(3)) * (y(1) -
    y(2))) / ((x(1) - x(2)) * (x(1) - x(3)) * (x(3) - x(2)));
  //C
  float b = ((fem::pow2(x(1)) - fem::pow2(x(2))) * (y(1) - y(3)) - (
    fem::pow2(x(1)) - fem::pow2(x(3))) * (y(1) - y(2))) / ((x(1) - x(
    2)) * (x(1) - x(3)) * (x(2) - x(3)));
  //C
  float d = (y(1) * fem::pow2(x(2)) - y(2) * fem::pow2(x(1)) - b * x(
    2) * x(1) * x(2) - x(1)) / (fem::pow2(x(2)) - fem::pow2(x(1)));
  //C
  yans = (a * xd + b) * xd + d;
  //C
}

} // namespace BASIC_ENG
