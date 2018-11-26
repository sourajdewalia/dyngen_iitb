#include <fem.hpp> // Fortran EMulation library of fable module

namespace BASIC_ENG {

using namespace fem::major_types;

void
afquir(...)
{
  throw std::runtime_error(
    "Missing function implementation: afquir");
}

//using fem::common;

void
search(
  float const& p,
  float& a,
  float& b,
  float& c,
  float& d,
  arr_cref<float> ax,
  int const& na,
  arr_cref<float, 2> bx,
  arr_cref<float, 2> cx,
  arr_cref<float, 2> dx,
  arr_cref<int> no,
  int const& nam,
  int const& nom,
  int const& /* ndooe */)
{
  ax(dimension(nam));
  bx(dimension(nam, nom));
  cx(dimension(nam, nom));
  dx(dimension(nam, nom));
  no(dimension(nam));
  int ncode = fem::int0;
  int i = fem::int0;
  int ih = fem::int0;
  int ncooe = fem::int0;
  int il = fem::int0;
  int limh = fem::int0;
  int linl = fem::int0;
  float prn = fem::float0;
  float pp = fem::float0;
  float bl = fem::float0;
  int liml = fem::int0;
  float prh = fem::float0;
  float bh = fem::float0;
  float prm = fem::float0;
  float bhm = fem::float0;
  float chm = fem::float0;
  float dhm = fem::float0;
  float ch = fem::float0;
  float dh = fem::float0;
  float cslope = fem::float0;
  float dslope = fem::float0;
  arr_1d<9, float> q(fem::fill0);
  int j = fem::int0;
  int jh = fem::int0;
  int jl = fem::int0;
  int k = fem::int0;
  int kh = fem::int0;
  int kl = fem::int0;
  int im = fem::int0;
  float pr = fem::float0;
  float cl = fem::float0;
  float dl = fem::float0;
  float bt = fem::float0;
  float ct = fem::float0;
  float dt = fem::float0;
  float dir = fem::float0;
  float err = fem::float0;
  float pt = fem::float0;
  int icon = fem::int0;
  //C
  //C        General table lookup and interpolation routine to obtain data
  //C        from BLOCK DATA subroutines
  //C
  //C        NEEDS SUBROUTINE AFQUIR
  //C ***    AX AND BX MUST BE STORED LO TO HI
  //C ***    P=INPUT PROPORTION BETWEEN 0.0 AND 1.0
  //C        IF NOT INPUT, P MUST EQUAL -1.
  //C        NCODE=00     OK
  //C        NCODE=01     A LO
  //C        NCOOE=O2     A HI   q
  //C        NCOOE=O7     ERROR
  //C        NCOOE=10     B LO
  //C        NCODE=20     B HI
  //C
  ncode = 0;
  c = 0.f;
  d = 0.f;
  //C
  //C ***    FIND A
  //C
  FEM_DO_SAFE(i, 1, na) {
    ih = i;
    if (a < ax(i)) {
      goto statement_2;
    }
  }
  if (a > ax(ih)) {
    ncode = 2;
  }
  a = ax(ih);
  goto statement_3;
  statement_2:
  if (ih > 1) {
    goto statement_3;
  }
  ncooe = 1;
  ih = 2;
  a = ax(i);
  statement_3:
  il = ih - 1;
  limh = no(ih);
  linl = no(il);
  //C
  //C ***    FIND B
  //C
  prn = (a - ax(il)) / (ax(ih) - ax(il));
  pp = p;
  if (p >= 0.f) {
    goto statement_6;
  }
  bl = bx(il, 1) + prn * (bx(ih, 1) - bx(il, 1));
  bh = bx(il, liml) + prh * (bx(ih, limh) - bx(il, liml));
  if (b >= bl) {
    goto statement_4;
  }
  ncode += 10;
  b = bl;
  goto statement_5;
  statement_4:
  if (b <= bh) {
    goto statement_5;
  }
  ncode += 20;
  bhm = bx(il, liml - 1) + prm * (bx(ih, limh - 1) - bx(il, liml - 1));
  chm = cx(il, liml - 1) + prm * (cx(ih, limh - 1) - cx(il, liml - 1));
  dhm = dx(il, linl - 1) + prm * (dx(ih, limh - 1) - dx(il, liml - 1));
  ch = cx(il, liml) + prm * (cx(ih, limh) - cx(il, liml));
  dh = dx(il, liml) + prm * (dx(ih, limh) - dx(il, liml));
  cslope = (ch - chm) / (bh - bhm);
  dslope = (dh - dhm) / (bh - bhm);
  c = ch + cslope * (b - bh);
  d = dh + dslope * (b - bh);
  return;
  statement_5:
  pp = 0.5f;
  q(2) = 0.f;
  q(3) = 0.f;
  statement_6:
  bh = pp * (bx(ih, limh) - bx(ih, 1)) + bx(ih, 1);
  bl = pp * (bx(il, liml) - bx(il, 1)) + bx(il, 1);
  FEM_DO_SAFE(j, 2, limh) {
    jh = j;
    if (bh < bx(ih, j)) {
      goto statement_8;
    }
  }
  statement_8:
  jl = jh - 1;
  FEM_DO_SAFE(k, 2, liml) {
    kh = k;
    if (bl < bx(il, k)) {
      goto statement_10;
    }
  }
  statement_10:
  kl = kh - 1;
  pr = (bx(ih, jl) - bh) / (bx(ih, jh) - bx(im, jl));
  ch = cx(ih, jl) - pr * (cx(ih, jh) - cx(ih, jl));
  dh = dx(ih, jl) - pr * (dx(ih, jh) - dx(ih, jl));
  pr = (bx(il, kl) - bl) / (bx(il, kh) - bx(il, kl));
  cl = cx(il, kl) - pr * (cx(il, kh) - cx(il, kl));
  dl = dx(il, kl) - pr * (dx(il, kh) - dx(il, kl));
  bt = bl + prn * (bh - bl);
  ct = cl + prn * (ch - cl);
  dt = dl + prn * (dh - dl);
  if (p >= 0.f) {
    goto statement_13;
  }
  dir = fem::sqrt(b / bt);
  err = (b - bt) / b;
  afquir(q(1), pp, err, 0.25f, 0.001f, dir, pt, icon);
  switch (icon) {
    case 1: goto statement_11;
    case 2: goto statement_13;
    case 3: goto statement_12;
    default: break;
  }
  statement_11:
  pp = pt;
  if (pp < 0.f) {
    pp = 0.f;
  }
  if (pp > 1.f) {
    pp = 1.f;
  }
  goto statement_6;
  statement_12:
  ncode = 7;
  statement_13:
  b = bt;
  c = ct;
  d = dt;
}

} // namespace BASIC_ENG
