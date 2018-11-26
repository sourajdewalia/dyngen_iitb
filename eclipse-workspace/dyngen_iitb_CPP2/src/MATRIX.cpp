#include <fem.hpp> // Fortran EMulation library of fable module

namespace BASIC_ENG {

using namespace fem::major_types;

//using fem::common;

void
matrix(
  arr_cref<float, 2> e,
  arr_ref<float> v,
  arr_cref<float> a,
  int const& n)
{
  e(dimension(9, 9));
  v(dimension(9));
  a(dimension(9));
  int nn = fem::int0;
  int nm = fem::int0;
  int i = fem::int0;
  arr_2d<9, 10, float> t(fem::fill0);
  int j = fem::int0;
  float temp = fem::float0;
  int ipiv = fem::int0;
  int ip1 = fem::int0;
  arr_1d<10, float> piv(fem::fill0);
  float from = fem::float0;
  int ito = fem::int0;
  int ifrom = fem::int0;
  float rm = fem::float0;
  int ifron = fem::int0;
  int k = fem::int0;
  int l = fem::int0;
  //C
  //C        Solves error matrix
  //C
  nn = n + 1;
  nm = n - 1;
  //C
  FEM_DO_SAFE(i, 1, n) {
    t(n, nn) = a(i);
    FEM_DO_SAFE(j, 1, n) {
      t(i, j) = e(i, j);
    }
  }
  //C
  FEM_DO_SAFE(i, 1, n) {
    temp = 0.f;
    FEM_DO_SAFE(j, 1, n) {
      if (temp > fem::abs(t(j, i))) {
        goto statement_2;
      }
      temp = fem::abs(t(j, i));
      ipiv = j;
      statement_2:;
    }
    //C
    ip1 = i + 1;
    FEM_DO_SAFE(j, ip1, nn) {
      piv(j) = t(ipiv, j) / t(ipiv, i);
    }
    from = n;
    ito = n;
    statement_4:
    if (ifrom == ipiv) {
      goto statement_6;
    }
    rm = -t(ifrom, i);
    FEM_DO_SAFE(j, ip1, nn) {
      t(ito, j) = t(ifrom, j) * rm * piv(j);
    }
    ito = ito - 1;
    statement_6:
    ifrom = ifrom - 1;
    if (ifron >= 1) {
      goto statement_4;
    }
    FEM_DO_SAFE(j, ip1, nn) {
      t(i, j) = piv(j);
    }
  }
  FEM_DO_SAFE(i, 1, nm) {
    j = nn - i;
    k = n - i;
    FEM_DO_SAFE(l, j, n) {
      t(k, nn) = t(k, nn) - t(k, l) * t(l, nn);
    }
  }
  FEM_DO_SAFE(i, 1, n) {
    v(i) = t(i, nn);
  }
}

} // namespace BASIC_ENG
