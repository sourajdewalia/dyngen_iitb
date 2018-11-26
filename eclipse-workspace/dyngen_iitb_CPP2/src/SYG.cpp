//#include <fem.hpp> // Fortran EMulation library of fable module
//
//namespace BASIC_ENG {
//
//using namespace fem::major_types;
//
//struct common :
//  fem::common
//{
//  fem::cmn_sve syg_sve;
//
//  common(
//    int argc,
//    char const* argv[])
//  :
//    fem::common(argc, argv)
//  {}
//};
//
//struct syg_save
//{
//  char onedol[8];
//
//  syg_save() :
//    onedol("")
//  {}
//};
//
//void
//syg(
//  common& cmn,
//  int const& icon)
//{
//  FEM_CMN_SVE(syg);
//  common_read read(cmn);
//  common_write write(cmn);
//  char* onedol = sve.onedol;
//  if (is_called_first_time) {
//    strcpy(onedol , "      ");
//  }
//  arr_1d<132, float> word(fem::fill0);
//  int i = fem::int0;
//  int k = fem::int0;
//  int j = fem::int0;
//  int m = fem::int0;
//  static const char* format_11 = "(132a1)";
//  //C
//  //C        controls printing from UNIT08 (Throughout the program and
//  //C        particularly in ENGBAL, certain messages, variables, and
//  //C        matrix values are written on UNIT08 as an aid in determining
//  //C        why an error occurred or why a point did not balance. These
//  //C        values are printed out if subroutine ERROR is called and
//  //C        IDUMP is greater than zero, or after a good point if IDUMP:2.)
//  //C
//  switch (icon) {
//    case 1: goto statement_1;
//    case 2: goto statement_2;
//    default: break;
//  }
//  cmn.io.endfile(8);
//  statement_1:
//  cmn.io.rewind(8);
//  return;
//  //C
//  //C        TERMINATE THE FILE
//  //C
//  statement_2:
//  write(8, "('$$$$$$$$$$$$')");
//  cmn.io.endfile(8);
//  cmn.io.rewind(8);
//  //C
//  //C        READ RECORD
//  statement_3:
//  {
//    read_loop rloop(cmn, 8, format_11);
//    FEM_DO_SAFE(i, 1, 132) {
//      rloop, word(i);
//    }
//  }
//  //C        CHECK FOR 12 LEADING DOLLAR SIGNS
//  //C
//  FEM_DO_SAFE(i, 1, 12) {
//    switch (fem::if_arithmetic(word(i) - onedol)) {
//      case -1: goto statement_4;
//      case  0: goto statement_5;
//      default: goto statement_4;
//    }
//    statement_4:;
//  }
//  return;
//  //C
//  //C        CHECK FOR 6 TRAILING DOLLAR SIGNS
//  //C
//  statement_5:
//  FEM_DO_SAFE(i, 1, 132) {
//    //C        I=I
//    switch (fem::if_arithmetic(word(i) - onedol)) {
//      case -1: goto statement_8;
//      case  0: goto statement_6;
//      default: goto statement_8;
//    }
//    statement_6:
//    k = i + 5;
//    FEM_DO_SAFE(j, 1, k) {
//      switch (fem::if_arithmetic(word(j) - onedol)) {
//        case -1: goto statement_6;
//        case  0: goto statement_8;
//        default: goto statement_6;
//      }
//    }
//    goto statement_9;
//    statement_8:;
//  }
//  write(6, "('0','ERROR IN SYG')");
//  return;
//  //C        PRINT LINE
//  statement_9:
//  i = i - 1;
//  {
//    write_loop wloop(cmn, 6, format_11);
//    FEM_DO_SAFE(m, 1, i) {
//      wloop, word(m);
//    }
//  }
//  goto statement_3;
//  //C
//}
//
//} // namespace BASIC_ENG
