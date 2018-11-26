#include <fem.hpp> // Fortran EMulation library of fable module

namespace BASIC_ENG {

using namespace fem::major_types;

//using fem::common;

void
afquir(
  arr_ref<float> x,
  float const& aind,
  float const& depend,
  float const& ans,
  float const& aj,
  float const& tol,
  float const& dir,
  float& anew,
  int& icon)
{
  x(dimension(9));
  float y = fem::float0;
  float dep = fem::float0;
  float tolans = fem::float0;
  float a = fem::float0;
  float f = fem::float0;
  float b = fem::float0;
  float c = fem::float0;
  float g = fem::float0;
  float yy = fem::float0;
  float d = fem::float0;
  float e = fem::float0;
  int j = fem::int0;
  float depmin = fem::float0;
  int i = fem::int0;
  int k = fem::int0;
  int jj = fem::int0;
  int kk = fem::int0;
  float slope = fem::float0;
  //C
  //C        General quadratic interpolation routine
  //C
  //C        X(1)=NAME OF ARRAY TO USE
  //C        AIND=INDEPENDANT VARIABLE
  //C        DEPEND= DEPENDANT VARIABLE
  //C        ANS=ANSWER UPON WHICH TO CONVERGE
  //C        AJ=MAX NUMBER OF TRYS
  //C        TOL=PERCENT TOLERANCE FOR CONVERGENCE
  //C        DIR=DIRECTION AND PERCENTAGE FOR FIRST GUESS
  //C        ANEW=CALCULATED VALUE OF NEXT TRY AT INDEPENDANT VARIABLE
  //C        ICON=CONTROL    =1 GO THRU LOOP AGAIN
  //C                =2 YOU HAVE REACHED THE ANSWER
  //C                        =3 COUNTER HAS HIT LIMITS
  //C        X(2)=COUNTER STORAGE
  //C        X(3)=CHOOSES METHDD OF CONVERGENCE
  //C        X(4)=THIRD DEPEND VAR
  //C        X(5)=THIRD IND VAR
  //C        X(6)=SECOND DEPEND VAR
  //C        X(7)=SECOND IND VAR
  //C        X(8)=FIRST DEPEND VAR
  //C        X(9)=FIRST IND VAR
  //C        X(3) MUST BE ZERO UPON FIRST ENTRY TO ROUTINE
  y = 0.f;
  switch (fem::if_arithmetic(ans)) {
    case -1: goto statement_1;
    case  0: goto statement_2;
    default: goto statement_1;
  }
  statement_1:
  dep = depend - ans;
  tolans = tol * ans;
  goto statement_3;
  statement_2:
  dep = depend;
  tolans = tol;
  statement_3:
  switch (fem::if_arithmetic(fem::abs(dep) - tolans)) {
    case -1: goto statement_5;
    case  0: goto statement_5;
    default: goto statement_4;
  }
  statement_4:
  switch (fem::if_arithmetic(x(2) - aj)) {
    case -1: goto statement_8;
    case  0: goto statement_8;
    default: goto statement_7;
  }
  statement_5:
  anew = aind;
  x(2) = 0.f;
  icon = 2;
  return;
  statement_6:
  anew = y;
  x(2) += 1.f;
  icon = 1;
  return;
  statement_7:
  anew = y;
  x(2) = 0.f;
  icon = 3;
  return;
  statement_8:
  switch (fem::if_arithmetic(x(3))) {
    case -1: goto statement_9;
    case  0: goto statement_9;
    default: goto statement_12;
  }
  //C ***    FIRST GUESS USING DIR
  statement_9:
  x(3) = 1.f;
  x(8) = dep;
  x(9) = aind;
  switch (fem::if_arithmetic(aind)) {
    case -1: goto statement_10;
    case  0: goto statement_11;
    default: goto statement_10;
  }
  statement_10:
  y = dir * aind;
  goto statement_6;
  statement_11:
  y = dir;
  goto statement_6;
  statement_12:
  switch (fem::if_arithmetic(x(3) - 1.f)) {
    case -1: goto statement_13;
    case  0: goto statement_13;
    default: goto statement_16;
  }
  //C ***    LINEAR GUESS
  statement_13:
  x(3) = 2.f;
  x(6) = dep;
  x(7) = aind;
  switch (fem::if_arithmetic(x(8) - x(6))) {
    case -1: goto statement_14;
    case  0: goto statement_9;
    default: goto statement_16;
  }
  statement_14:
  switch (fem::if_arithmetic(x(9) - x(7))) {
    case -1: goto statement_15;
    case  0: goto statement_9;
    default: goto statement_15;
  }
  statement_15:
  a = (x(9) - x(7)) / (x(8) - x(6));
  y = x(9) - a * x(8);
  switch (fem::if_arithmetic(fem::abs(10.f * x(9)) - fem::abs(y))) {
    case -1: goto statement_9;
    case  0: goto statement_9;
    default: goto statement_6;
  }
  //C ***    QUADRATIC GUESS
  statement_16:
  x(4) = dep;
  x(5) = aind;
  switch (fem::if_arithmetic(x(7) - x(5))) {
    case -1: goto statement_18;
    case  0: goto statement_17;
    default: goto statement_18;
  }
  statement_17:
  switch (fem::if_arithmetic(x(6) - x(4))) {
    case -1: goto statement_13;
    case  0: goto statement_9;
    default: goto statement_13;
  }
  statement_18:
  switch (fem::if_arithmetic(x(6) - x(4))) {
    case -1: goto statement_19;
    case  0: goto statement_13;
    default: goto statement_19;
  }
  statement_19:
  switch (fem::if_arithmetic(x(9) - x(5))) {
    case -1: goto statement_23;
    case  0: goto statement_20;
    default: goto statement_23;
  }
  statement_20:
  switch (fem::if_arithmetic(x(8) - x(4))) {
    case -1: goto statement_21;
    case  0: goto statement_22;
    default: goto statement_21;
  }
  statement_21:
  x(9) = x(7);
  x(8) = x(6);
  goto statement_13;
  statement_22:
  x(9) = x(7);
  x(8) = x(6);
  x(3) = 1.f;
  switch (fem::if_arithmetic(x(9))) {
    case -1: goto statement_10;
    case  0: goto statement_11;
    default: goto statement_10;
  }
  statement_23:
  switch (fem::if_arithmetic(x(8) - x(4))) {
    case -1: goto statement_24;
    case  0: goto statement_21;
    default: goto statement_24;
  }
  statement_24:
  f = (x(6) - x(4)) / (x(7) - x(5));
  a = (x(8) - x(4) - f * (x(9) - x(5))) / ((x(9) - x(7)) * (x(9) - x(5)));
  b = f - a * (x(5) + x(7));
  c = x(4) + x(5) * (a * x(7) - f);
  switch (fem::if_arithmetic(a)) {
    case -1: goto statement_27;
    case  0: goto statement_25;
    default: goto statement_27;
  }
  statement_25:
  switch (fem::if_arithmetic(8)) {
    case -1: goto statement_26;
    case  0: goto statement_7;
    default: goto statement_26;
  }
  statement_26:
  y = -c / b;
  goto statement_47;
  statement_27:
  switch (fem::if_arithmetic(b)) {
    case -1: goto statement_32;
    case  0: goto statement_28;
    default: goto statement_32;
  }
  statement_28:
  switch (fem::if_arithmetic(c)) {
    case -1: goto statement_30;
    case  0: goto statement_29;
    default: goto statement_30;
  }
  statement_29:
  y = 0.f;
  goto statement_47;
  statement_30:
  g = -c / a;
  switch (fem::if_arithmetic(g)) {
    case -1: goto statement_7;
    case  0: goto statement_7;
    default: goto statement_31;
  }
  statement_31:
  y = fem::sqrt(g);
  yy = -fem::sqrt(g);
  goto statement_37;
  statement_32:
  switch (fem::if_arithmetic(c)) {
    case -1: goto statement_34;
    case  0: goto statement_33;
    default: goto statement_36;
  }
  statement_33:
  y = -b / a;
  yy = 0.f;
  goto statement_37;
  statement_34:
  d = 4.f * a * c / fem::pow2(b);
  switch (fem::if_arithmetic(1.f - d)) {
    case -1: goto statement_13;
    case  0: goto statement_35;
    default: goto statement_36;
  }
  statement_35:
  y = -b / (2.f * a);
  goto statement_47;
  statement_36:
  e = fem::sqrt(1.f - d);
  y = (-b / (2.f * a)) * (1.f + e);
  yy = (-b / (2.f * a)) * (1.f - e);
  statement_37:
  j = 4;
  depmin = fem::abs(x(4));
  FEM_DOSTEP(i, 6, 8, 2) {
    switch (fem::if_arithmetic(depmin - fem::abs(x(i)))) {
      case -1: goto statement_39;
      case  0: goto statement_39;
      default: goto statement_38;
    }
    statement_38:
    j = i;
    depmin = fem::abs(x(i));
    statement_39:;
  }
  k = j + 1;
  switch (fem::if_arithmetic((x(k) - y) * (x(k) - yy))) {
    case -1: goto statement_42;
    case  0: goto statement_42;
    default: goto statement_40;
  }
  statement_40:
  switch (fem::if_arithmetic(fem::abs(x(k) - y) - fem::abs(x(k) - yy))) {
    case -1: goto statement_47;
    case  0: goto statement_47;
    default: goto statement_41;
  }
  statement_41:
  y = yy;
  goto statement_47;
  statement_42:
  switch (fem::if_arithmetic(j - 6)) {
    case -1: goto statement_43;
    case  0: goto statement_44;
    default: goto statement_44;
  }
  statement_43:
  jj = j + 2;
  kk = k + 2;
  goto statement_45;
  statement_44:
  jj = j - 2;
  kk = k - 2;
  statement_45:
  slope = (x(kk) - x(k)) / (x(jj) - x(j));
  switch (fem::if_arithmetic(slope * x(j) * (x(k) - y))) {
    case -1: goto statement_46;
    case  0: goto statement_46;
    default: goto statement_47;
  }
  statement_46:
  y = yy;
  statement_47:
  x(9) = x(7);
  x(8) = x(6);
  x(7) = x(5);
  x(6) = x(4);
  goto statement_6;
}

} // namespace BASIC_ENG
