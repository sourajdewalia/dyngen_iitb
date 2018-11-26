//============================================================================
// Name        : dyngen_iitb_CPP3.cpp
// Author      : SD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <fem.hpp> // Fortran EMulation library of fable module

namespace Basic_engine {

using namespace fem::major_types;

/* Dependency cycles: 1
     error engbal cofan cointc cocomp cocomb thcomp wducti coinlt perf output putin
 */

struct common_foc
{
  arr<float, 2> fo;

  common_foc() :
    fo(dimension(50, 4), fem::fill0)
  {}
};

struct common_words
{
  char word[10];

  common_words() :
    word("")
  {}
};

struct common_design
{
  int ides;
  int jdes;
  int kdes;
  int mode;
  int init;
  int idump;
  int iamtp;
  int igasmx;
  int idburn;
  int iaftbn;
  int idcd;
  int imcd;
  int idshoc;
  int imshoc;
  int nozflt;
  int itrys;
  int looper;
  int nomap;
  int nummap;
  int mapedg;
  float tolall;
  arr<float> err;

  common_design() :
    ides(fem::int0),
    jdes(fem::int0),
    kdes(fem::int0),
    mode(fem::int0),
    init(fem::int0),
    idump(fem::int0),
    iamtp(fem::int0),
    igasmx(fem::int0),
    idburn(fem::int0),
    iaftbn(fem::int0),
    idcd(fem::int0),
    imcd(fem::int0),
    idshoc(fem::int0),
    imshoc(fem::int0),
    nozflt(fem::int0),
    itrys(fem::int0),
    looper(fem::int0),
    nomap(fem::int0),
    nummap(fem::int0),
    mapedg(fem::int0),
    tolall(fem::float0),
    err(dimension(9), fem::fill0)
  {}
};

struct common_all1
{
  float pcnfgu;
  float pcncgu;
  float t4gu;
  float dumd1;
  float dumd2;
  float delfg;
  float delfn;
  float delsfc;
  float zfds;
  float pcnfds;
  float prfds;
  float etafds;
  float wafds;
  float prfcf;
  float etafcf;
  float wafcf;
  float zcds;
  float pcncds;
  float prcds;
  float etacds;
  float wacds;
  float prccf;
  float etaccf;
  float waccf;
  float t4ds;
  float wfbds;
  float dtcods;
  float etabds;
  float wa3cds;
  float dpcods;
  float dtcocf;
  float etabcf;
  float tfhpds;
  float cnhpds;
  float ethpds;
  float tfhpcf;
  float cnhpcf;
  float ethpcf;
  float dhhpcf;
  float t2ds;
  float tflpds;
  float cnlpds;
  float etlpds;
  float tflpcf;
  float cnlpcf;
  float etlpcf;
  float dhlpcf;
  float t21ds;
  float t24ds;
  float wfdds;
  float dtduds;
  float etadds;
  float wa23ds;
  float dpduds;
  float dtducf;
  float etadcf;
  float t7ds;
  float wfads;
  float dtafds;
  float etaads;
  float wg6cds;
  float dpafds;
  float dtafcf;
  float etaacf;
  float a55;
  float a25;
  float a6;
  float a7;
  float a8;
  float a9;
  float a28;
  float a29;
  float ps55;
  float am55;
  float cvdnoz;
  float cvmnoz;
  float a8sav;
  float a9sav;
  float a28sav;
  float a29sav;

  common_all1() :
    pcnfgu(fem::float0),
    pcncgu(fem::float0),
    t4gu(fem::float0),
    dumd1(fem::float0),
    dumd2(fem::float0),
    delfg(fem::float0),
    delfn(fem::float0),
    delsfc(fem::float0),
    zfds(fem::float0),
    pcnfds(fem::float0),
    prfds(fem::float0),
    etafds(fem::float0),
    wafds(fem::float0),
    prfcf(fem::float0),
    etafcf(fem::float0),
    wafcf(fem::float0),
    zcds(fem::float0),
    pcncds(fem::float0),
    prcds(fem::float0),
    etacds(fem::float0),
    wacds(fem::float0),
    prccf(fem::float0),
    etaccf(fem::float0),
    waccf(fem::float0),
    t4ds(fem::float0),
    wfbds(fem::float0),
    dtcods(fem::float0),
    etabds(fem::float0),
    wa3cds(fem::float0),
    dpcods(fem::float0),
    dtcocf(fem::float0),
    etabcf(fem::float0),
    tfhpds(fem::float0),
    cnhpds(fem::float0),
    ethpds(fem::float0),
    tfhpcf(fem::float0),
    cnhpcf(fem::float0),
    ethpcf(fem::float0),
    dhhpcf(fem::float0),
    t2ds(fem::float0),
    tflpds(fem::float0),
    cnlpds(fem::float0),
    etlpds(fem::float0),
    tflpcf(fem::float0),
    cnlpcf(fem::float0),
    etlpcf(fem::float0),
    dhlpcf(fem::float0),
    t21ds(fem::float0),
    t24ds(fem::float0),
    wfdds(fem::float0),
    dtduds(fem::float0),
    etadds(fem::float0),
    wa23ds(fem::float0),
    dpduds(fem::float0),
    dtducf(fem::float0),
    etadcf(fem::float0),
    t7ds(fem::float0),
    wfads(fem::float0),
    dtafds(fem::float0),
    etaads(fem::float0),
    wg6cds(fem::float0),
    dpafds(fem::float0),
    dtafcf(fem::float0),
    etaacf(fem::float0),
    a55(fem::float0),
    a25(fem::float0),
    a6(fem::float0),
    a7(fem::float0),
    a8(fem::float0),
    a9(fem::float0),
    a28(fem::float0),
    a29(fem::float0),
    ps55(fem::float0),
    am55(fem::float0),
    cvdnoz(fem::float0),
    cvmnoz(fem::float0),
    a8sav(fem::float0),
    a9sav(fem::float0),
    a28sav(fem::float0),
    a29sav(fem::float0)
  {}
};

struct common_all2
{
  float t1;
  float p1;
  float h1;
  float s1;
  float t2;
  float p2;
  float h2;
  float s2;
  float t21;
  float p21;
  float h21;
  float s21;
  float t3;
  float p3;
  float h3;
  float s3;
  float t4;
  float p4;
  float h4;
  float s4;
  float t5;
  float p5;
  float h5;
  float s5;
  float t55;
  float p55;
  float h55;
  float s55;
  float blf;
  float blc;
  float bldu;
  float blob;
  float cnf;
  float prf;
  float etaf;
  float wafc;
  float waf;
  float wa3;
  float wg4;
  float far4;
  float cnc;
  float prc;
  float etac;
  float wacc;
  float wac;
  float etab;
  float dpcom;
  float dump;
  float cnhp;
  float etathp;
  float dhtchp;
  float dhtc;
  float blhp;
  float wg5;
  float far5;
  float cs;
  float cnlp;
  float etatlp;
  float dhtclp;
  float dhtf;
  float bllp;
  float wg55;
  float far55;
  float hpext;
  float am;
  float altp;
  float etar;
  float zf;
  float pcnf;
  float zc;
  float pcnc;
  float wfb;
  float tffhp;
  float tfflp;
  float pcblf;
  float pcblc;
  float pcbldu;
  float pcblob;
  float pcblhp;
  float pcbllp;

  common_all2() :
    t1(fem::float0),
    p1(fem::float0),
    h1(fem::float0),
    s1(fem::float0),
    t2(fem::float0),
    p2(fem::float0),
    h2(fem::float0),
    s2(fem::float0),
    t21(fem::float0),
    p21(fem::float0),
    h21(fem::float0),
    s21(fem::float0),
    t3(fem::float0),
    p3(fem::float0),
    h3(fem::float0),
    s3(fem::float0),
    t4(fem::float0),
    p4(fem::float0),
    h4(fem::float0),
    s4(fem::float0),
    t5(fem::float0),
    p5(fem::float0),
    h5(fem::float0),
    s5(fem::float0),
    t55(fem::float0),
    p55(fem::float0),
    h55(fem::float0),
    s55(fem::float0),
    blf(fem::float0),
    blc(fem::float0),
    bldu(fem::float0),
    blob(fem::float0),
    cnf(fem::float0),
    prf(fem::float0),
    etaf(fem::float0),
    wafc(fem::float0),
    waf(fem::float0),
    wa3(fem::float0),
    wg4(fem::float0),
    far4(fem::float0),
    cnc(fem::float0),
    prc(fem::float0),
    etac(fem::float0),
    wacc(fem::float0),
    wac(fem::float0),
    etab(fem::float0),
    dpcom(fem::float0),
    dump(fem::float0),
    cnhp(fem::float0),
    etathp(fem::float0),
    dhtchp(fem::float0),
    dhtc(fem::float0),
    blhp(fem::float0),
    wg5(fem::float0),
    far5(fem::float0),
    cs(fem::float0),
    cnlp(fem::float0),
    etatlp(fem::float0),
    dhtclp(fem::float0),
    dhtf(fem::float0),
    bllp(fem::float0),
    wg55(fem::float0),
    far55(fem::float0),
    hpext(fem::float0),
    am(fem::float0),
    altp(fem::float0),
    etar(fem::float0),
    zf(fem::float0),
    pcnf(fem::float0),
    zc(fem::float0),
    pcnc(fem::float0),
    wfb(fem::float0),
    tffhp(fem::float0),
    tfflp(fem::float0),
    pcblf(fem::float0),
    pcblc(fem::float0),
    pcbldu(fem::float0),
    pcblob(fem::float0),
    pcblhp(fem::float0),
    pcbllp(fem::float0)
  {}
};

struct common_all3
{
  float xp1;
  float xwaf;
  float xwac;
  float xblf;
  float xbldu;
  float xh3;
  float dums1;
  float dums2;
  float xt21;
  float xp21;
  float xh21;
  float xs21;
  float t23;
  float p23;
  float h23;
  float s23;
  float t24;
  float p24;
  float h24;
  float s24;
  float t25;
  float p25;
  float h25;
  float s25;
  float t28;
  float p28;
  float h28;
  float s28;
  float t29;
  float p29;
  float h29;
  float s29;
  float wad;
  float wfd;
  float wg24;
  float far24;
  float etad;
  float dpduc;
  float bypass;
  float dums3;
  float ts28;
  float ps28;
  float v28;
  float am28;
  float ts29;
  float ps29;
  float v29;
  float am29;
  float xt55;
  float xp55;
  float xh55;
  float xs55;
  float xt25;
  float xp25;
  float xh25;
  float xs25;
  float xwfb;
  float xwg55;
  float xfar55;
  float xwfd;
  float xwg24;
  float xfar24;
  float xxp1;
  float dumb;
  float t6;
  float p6;
  float h6;
  float s6;
  float t7;
  float p7;
  float h7;
  float s7t8;
  float p8;
  float h8;
  float s8;
  float t9;
  float p9;
  float h9;
  float s9;

  common_all3() :
    xp1(fem::float0),
    xwaf(fem::float0),
    xwac(fem::float0),
    xblf(fem::float0),
    xbldu(fem::float0),
    xh3(fem::float0),
    dums1(fem::float0),
    dums2(fem::float0),
    xt21(fem::float0),
    xp21(fem::float0),
    xh21(fem::float0),
    xs21(fem::float0),
    t23(fem::float0),
    p23(fem::float0),
    h23(fem::float0),
    s23(fem::float0),
    t24(fem::float0),
    p24(fem::float0),
    h24(fem::float0),
    s24(fem::float0),
    t25(fem::float0),
    p25(fem::float0),
    h25(fem::float0),
    s25(fem::float0),
    t28(fem::float0),
    p28(fem::float0),
    h28(fem::float0),
    s28(fem::float0),
    t29(fem::float0),
    p29(fem::float0),
    h29(fem::float0),
    s29(fem::float0),
    wad(fem::float0),
    wfd(fem::float0),
    wg24(fem::float0),
    far24(fem::float0),
    etad(fem::float0),
    dpduc(fem::float0),
    bypass(fem::float0),
    dums3(fem::float0),
    ts28(fem::float0),
    ps28(fem::float0),
    v28(fem::float0),
    am28(fem::float0),
    ts29(fem::float0),
    ps29(fem::float0),
    v29(fem::float0),
    am29(fem::float0),
    xt55(fem::float0),
    xp55(fem::float0),
    xh55(fem::float0),
    xs55(fem::float0),
    xt25(fem::float0),
    xp25(fem::float0),
    xh25(fem::float0),
    xs25(fem::float0),
    xwfb(fem::float0),
    xwg55(fem::float0),
    xfar55(fem::float0),
    xwfd(fem::float0),
    xwg24(fem::float0),
    xfar24(fem::float0),
    xxp1(fem::float0),
    dumb(fem::float0),
    t6(fem::float0),
    p6(fem::float0),
    h6(fem::float0),
    s6(fem::float0),
    t7(fem::float0),
    p7(fem::float0),
    h7(fem::float0),
    s7t8(fem::float0),
    p8(fem::float0),
    h8(fem::float0),
    s8(fem::float0),
    t9(fem::float0),
    p9(fem::float0),
    h9(fem::float0),
    s9(fem::float0)
  {}
};

struct common_all4
{
  float wg6;
  float wfa;
  float wg7;
  float far7;
  float etaa;
  float dpaft;
  float v55;
  float v25;
  float ps6;
  float v6;
  float am6;
  float ts7;
  float ps7;
  float v7;
  float am7;
  float am25;
  float ts8;
  float ps8;
  float v8;
  float am8;
  float ts9;
  float ps9;
  float v9;
  float am9;
  float va;
  float frd;
  float vjd;
  float fgmd;
  float vjm;
  float fgmm;
  float fgpd;
  float fgpm;
  float fgm;
  float fgp;
  float wft;
  float wgt;
  float fart;
  float fg;
  float fn;
  float sfc;
  float wa32;
  float dpwgds;
  float dpwing;
  float wa32ds;
  float a38;
  float am38;
  float v38;
  float t38;
  float h38;
  float p38;
  float ts38;
  float ps38;
  float t39;
  float h39;
  float p39;
  float ts39;
  float v39;
  float am39;
  float a39;
  float bprint;
  float wg37;
  float cvdwng;
  float fgmwng;
  float fgpwng;
  float fnwing;
  float fnmain;
  float fwovfn;
  float ps39;
  float ffovfn;
  float fcovfn;
  float fmnofn;
  float fnovfd;
  float vjw;
  float t22;
  float p22;
  float h22;
  float s22;
  float t50;
  float p60;
  float h50;

  common_all4() :
    wg6(fem::float0),
    wfa(fem::float0),
    wg7(fem::float0),
    far7(fem::float0),
    etaa(fem::float0),
    dpaft(fem::float0),
    v55(fem::float0),
    v25(fem::float0),
    ps6(fem::float0),
    v6(fem::float0),
    am6(fem::float0),
    ts7(fem::float0),
    ps7(fem::float0),
    v7(fem::float0),
    am7(fem::float0),
    am25(fem::float0),
    ts8(fem::float0),
    ps8(fem::float0),
    v8(fem::float0),
    am8(fem::float0),
    ts9(fem::float0),
    ps9(fem::float0),
    v9(fem::float0),
    am9(fem::float0),
    va(fem::float0),
    frd(fem::float0),
    vjd(fem::float0),
    fgmd(fem::float0),
    vjm(fem::float0),
    fgmm(fem::float0),
    fgpd(fem::float0),
    fgpm(fem::float0),
    fgm(fem::float0),
    fgp(fem::float0),
    wft(fem::float0),
    wgt(fem::float0),
    fart(fem::float0),
    fg(fem::float0),
    fn(fem::float0),
    sfc(fem::float0),
    wa32(fem::float0),
    dpwgds(fem::float0),
    dpwing(fem::float0),
    wa32ds(fem::float0),
    a38(fem::float0),
    am38(fem::float0),
    v38(fem::float0),
    t38(fem::float0),
    h38(fem::float0),
    p38(fem::float0),
    ts38(fem::float0),
    ps38(fem::float0),
    t39(fem::float0),
    h39(fem::float0),
    p39(fem::float0),
    ts39(fem::float0),
    v39(fem::float0),
    am39(fem::float0),
    a39(fem::float0),
    bprint(fem::float0),
    wg37(fem::float0),
    cvdwng(fem::float0),
    fgmwng(fem::float0),
    fgpwng(fem::float0),
    fnwing(fem::float0),
    fnmain(fem::float0),
    fwovfn(fem::float0),
    ps39(fem::float0),
    ffovfn(fem::float0),
    fcovfn(fem::float0),
    fmnofn(fem::float0),
    fnovfd(fem::float0),
    vjw(fem::float0),
    t22(fem::float0),
    p22(fem::float0),
    h22(fem::float0),
    s22(fem::float0),
    t50(fem::float0),
    p60(fem::float0),
    h50(fem::float0)
  {}
};

struct common_comp
{
  arr<float> cnx;
  arr<float, 2> prx;
  arr<float, 2> wacx;
  arr<float, 2> etax;
  int ncn;
  arr<int> npt;

  common_comp() :
    cnx(dimension(15), fem::fill0),
    prx(dimension(15, 15), fem::fill0),
    wacx(dimension(15, 15), fem::fill0),
    etax(dimension(15, 15), fem::fill0),
    ncn(fem::int0),
    npt(dimension(15), fem::fill0)
  {}
};

struct common_dumint
{
  arr<float> cnxx;
  arr<float, 2> prxx;
  arr<float, 2> wacxx;
  arr<float, 2> etaxx;
  int ncnx;
  arr<int> nptx;

  common_dumint() :
    cnxx(dimension(15), fem::fill0),
    prxx(dimension(15, 15), fem::fill0),
    wacxx(dimension(15, 15), fem::fill0),
    etaxx(dimension(15, 15), fem::fill0),
    ncnx(fem::int0),
    nptx(dimension(15), fem::fill0)
  {}
};

struct common_int
{
  arr<float> cnx;
  arr<float, 2> prx;
  arr<float, 2> wacx;
  arr<float, 2> etax;
  int ncn;
  arr<int> npt;

  common_int() :
    cnx(dimension(15), fem::fill0),
    prx(dimension(15, 15), fem::fill0),
    wacx(dimension(15, 15), fem::fill0),
    etax(dimension(15, 15), fem::fill0),
    ncn(fem::int0),
    npt(dimension(15), fem::fill0)
  {}
};

struct common_fan
{
  arr<float> cnx;
  arr<float, 2> prx;
  arr<float, 2> wacx;
  arr<float, 2> etax;
  int ncn;
  arr<int> npt;

  common_fan() :
    cnx(dimension(15), fem::fill0),
    prx(dimension(15, 15), fem::fill0),
    wacx(dimension(15, 15), fem::fill0),
    etax(dimension(15, 15), fem::fill0),
    ncn(fem::int0),
    npt(dimension(15), fem::fill0)
  {}
};

struct common_delch
{
  float delt1;

  common_delch() :
    delt1(fem::float0)
  {}
};

struct common_erer
{
  bool errer;

  common_erer() :
    errer(fem::bool0)
  {}
};

struct common_soc
{
  arr<float, 2> so;

  common_soc() :
    so(dimension(10, 6), fem::fill0)
  {}
};

struct common_cdelay
{
  arr<float, 2> pdata;
  arr<float> timept;

  common_cdelay() :
    pdata(dimension(5, 50), fem::fill0),
    timept(dimension(50), fem::fill0)
  {}
};

struct common_whrerr
{
  int icoafb;
  int icoduc;
  int icomix;

  common_whrerr() :
    icoafb(fem::int0),
    icoduc(fem::int0),
    icomix(fem::int0)
  {}
};

struct common_mhrerr
{
  float coafbi;
  int icoduc;
  int icomix;

  common_mhrerr() :
    coafbi(fem::float0),
    icoduc(fem::int0),
    icomix(fem::int0)
  {}
};

struct common_unts
{
  bool si;

  common_unts() :
    si(fem::bool0)
  {}
};

struct common_lturb
{
  arr<float> tffx;
  arr<float, 2> cnx;
  arr<float, 2> dhtcx;
  arr<float, 2> etatx;
  int ntffs;
  arr<int> npttff;

  common_lturb() :
    tffx(dimension(15), fem::fill0),
    cnx(dimension(15, 15), fem::fill0),
    dhtcx(dimension(15, 15), fem::fill0),
    etatx(dimension(15, 15), fem::fill0),
    ntffs(fem::int0),
    npttff(dimension(15), fem::fill0)
  {}
};

struct common_iturb
{
  arr<float> tffx;
  arr<float, 2> cnx;
  arr<float, 2> dhtcx;
  arr<float, 2> etatx;
  int intffs;
  arr<int> npttff;

  common_iturb() :
    tffx(dimension(15), fem::fill0),
    cnx(dimension(15, 15), fem::fill0),
    dhtcx(dimension(15, 15), fem::fill0),
    etatx(dimension(15, 15), fem::fill0),
    intffs(fem::int0),
    npttff(dimension(15), fem::fill0)
  {}
};

struct common :
  fem::common,
  common_foc,
  common_words,
  common_design,
  common_all1,
  common_all2,
  common_all3,
  common_all4,
  common_comp,
  common_dumint,
  common_int,
  common_fan,
  common_delch,
  common_erer,
  common_soc,
  common_cdelay,
  common_whrerr,
  common_mhrerr,
  common_unts,
  common_lturb,
  common_iturb
{
  fem::variant_core common_units;
  fem::variant_core common_dyn;
  fem::variant_core common_all5;
  fem::variant_core common_vols;
  fem::variant_core common_flows;
  fem::variant_core common_rpms;
  fem::variant_core common_looppr;
  fem::variant_core common_hturb;
  fem::cmn_sve atmos_sve;
  fem::cmn_sve procom_sve;
  fem::cmn_sve condiv_sve;
  fem::cmn_sve thermo_sve;
  fem::cmn_sve convrg_sve;
  fem::cmn_sve deriv_sve;
  fem::cmn_sve thcomp_sve;
  fem::cmn_sve wducti_sve;
  fem::cmn_sve cocomb_sve;
  fem::cmn_sve cocomp_sve;
  fem::cmn_sve indumy_sve;
  fem::cmn_sve cointc_sve;
  fem::cmn_sve cofan_sve;
  fem::cmn_sve ram2_sve;
  fem::cmn_sve coinlt_sve;
  fem::cmn_sve distrb_sve;
  fem::cmn_sve conout_sve;
  fem::cmn_sve syg_sve;
  fem::cmn_sve output_sve;
  fem::cmn_sve perf_sve;
  fem::cmn_sve zero_sve;
  fem::cmn_sve putin_sve;
  fem::cmn_sve engbal_sve;
  fem::cmn_sve error_sve;
  fem::cmn_sve comnoz_sve;
  fem::cmn_sve etaab_sve;
  fem::cmn_sve coafbn_sve;
  fem::cmn_sve comix_sve;
  fem::cmn_sve fastbk_sve;
  fem::cmn_sve coduct_sve;
  fem::cmn_sve frtosd_sve;
  fem::cmn_sve thturb_sve;
  fem::cmn_sve colptb_sve;
  fem::cmn_sve coiptb_sve;
  fem::cmn_sve cohptb_sve;
  fem::cmn_sve program_unnamed_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

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
  //C        IMPLICIT NONE
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

struct atmos_save
{
  fem::variant_bindings units_bindings;
  arr<float> alm;
  float amuz;
  float amz;
  float caz;
  arr<float> deltab;
  float fttokm;
  float gz;
  float gzeng;
  arr<float> hb;
  float reft59;
  float rhoz;
  float rstar;
  float s;
  arr<float> tmb;

  atmos_save() :
    alm(dimension(10), fem::fill0),
    amuz(fem::float0),
    amz(fem::float0),
    caz(fem::float0),
    deltab(dimension(10), fem::fill0),
    fttokm(fem::float0),
    gz(fem::float0),
    gzeng(fem::float0),
    hb(dimension(10), fem::fill0),
    reft59(fem::float0),
    rhoz(fem::float0),
    rstar(fem::float0),
    s(fem::float0),
    tmb(dimension(10), fem::fill0)
  {}
};

void
atmos(
  common& cmn,
  float& zft,
  float& tm,
  float& sigma,
  float& rho,
  float& theta,
  float& delta,
  float& ca,
  float& amu,
  int& k)
{
  FEM_CMN_SVE(atmos);
  common_variant units(cmn.common_units, sve.units_bindings);
  arr_ref<float> alm(sve.alm, dimension(10));
  float& amuz = sve.amuz;
  float& amz = sve.amz;
  float& caz = sve.caz;
  arr_ref<float> deltab(sve.deltab, dimension(10));
  float& fttokm = sve.fttokm;
  float& gz = sve.gz;
  float& gzeng = sve.gzeng;
  arr_ref<float> hb(sve.hb, dimension(10));
  float& reft59 = sve.reft59;
  float& rhoz = sve.rhoz;
  float& rstar = sve.rstar;
  float& s = sve.s;
  arr_ref<float> tmb(sve.tmb, dimension(10));
  int i = fem::int0;
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<bool> si;
      units.allocate(), si;
    }
  }
  bool const& si = units.bind<bool>();
  if (is_called_first_time) {
    {
      static const float values[] = {
        -5.0f, 320.65f, 1.75363e-00f, -6.5f, 00.0f, 288.15f,
          1.00000e-00f, -6.5f, 11.0f, 216.65f, 2.23361e-01f, 00.0f,
          20.0f, 216.65f, 5.40328e-02f, 01.0f, 32.0f, 228.65f,
          8.56663e-03f, 02.8f, 47.0f, 270.65f, 1.09655e-03f, 00.0f,
          52.0f, 270.65f, 5.82289e-04f, -2.0f, 61.0f, 252.65f,
          1.79718e-06f, -4.0f, 79.0f, 180.65f, 1.02410e-05f, 00.0f,
          88.743f, 180.65f, 1.62230e-06f, 00.0f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(i, 1, 10) {
        data, hb(i), tmb(i), deltab(i), alm(i);
      }
    }
    reft59 = 2.0855531e07f;
    gz = 9.80665f;
    amz = 28.9664f;
    rstar = 8.31432f;
    fttokm = 3.048e-06f;
    s = 110.4f;
    amuz = 1.2026e-05f;
    caz = 1116.65f;
    rhoz = 0.076476f;
    gzeng = 32.1741f;
  }
  float hft = fem::float0;
  float z = fem::float0;
  float h = fem::float0;
  float tmz = fem::float0;
  int m = fem::int0;
  float delh = fem::float0;
  float tmk = fem::float0;
  float alpha = fem::float0;
  //C        IMPLICIT NONE
  //C
  //C        THIS IS A SUBROUTINE TO COMPUTE CERTAIN ELEMENTS OF THE 1962
  //C        U.S. STANDARD ATMOSPHERE UP TO 90 KILOMETERS.
  //C        CALLING SEQUENCE
  //C
  //C        CALL ATMOS (ZFT,TM,SIGMA,RHO,THETA,DELTA,CA,AMU,K)
  //C        ZFT   = GEOMETRIC ALTITUDE (FEET)
  //C        TM    = MOLECULAR SCALE TEMPERATURE (DEGREES RANKINE)
  //C        SIGMA = RATIO OF DENSITY TO THAT AT SEA LEVEL
  //C        RHO   = DENSITY (LB-SEC**2-FT**(-4) OR SLUG-FT**(-3))
  //C        THETA = RATIO OF TEMPERATURE TO THAT AT SEA LEVEL
  //C        DELTA = RATIO OF PRESSURE TO THAT AT SEA LEVEL
  //C        CA    = SPEED OF SOUND (FT/SEC)
  //C        AMU   = VISCOSITY COEFFICIENT (LB-SEC/FT**2)
  //C
  //C        K = 1   NORMAL
  //C          = 2   ALTITUDE LESS THAN -5000 METERS OR GREATER THAN 90 KM
  //C          = 3   FLOATING POINT OVERFLOW
  //C
  //C        ALL DATA AND FUNDAMENTAL CONSTANTS ARE IN THE METRIC SYSTEM AS
  //C        THESE QUANTITIES ARE DEFINED AS EXACT IN THIS SYSTEM.
  //C
  //C        THE RADIUS OF THE EARTH (REFT59) IS THE VALUE ASSOCIATED WITH THE
  //C        1959 ARDC ATMOSPHERE SO THAT PROGRAMS CURRENTLY USING THE LIBRARY
  //C        ROUTINE WILL NOT REQUIRE ALTERATION TO USE THIS ROUTINE
  //C
  //C        CONVERT GEOMETRIC ALTITUDE TO GEOPOTENTIAL ALTITUDE
  //C        IF IN SI UNITS, CHANGE ZFT TO FEET
  //C
  if (si) {
    zft = zft * 3.280833f;
  }
  hft = (reft59 / (reft59 + zft)) * zft;
  //C
  //C        CONVERT HFT AND ZFT TO KILOMETERS
  //C
  z = fttokm * zft;
  h = fttokm * hft;
  k = 1;
  tmz = tmb(2);
  if (h <  - 5.0f || z > 90.0f) {
    goto statement_7;
  }
  FEM_DO_SAFE(m, 1, 0) {
    switch (fem::if_arithmetic(h - hb(m))) {
      case -1: goto statement_2;
      case  0: goto statement_3;
      default: goto statement_1;
    }
    statement_1:;
  }
  goto statement_7;
  statement_2:
  m = m - 1;
  statement_3:
  delh = h - hb(m);
  if (alm(m) == 0.0f) {
    goto statement_4;
  }
  tmk = tmb(m) + alm(m) * delh;
  //C
  //C        GRADIENT IS NON ZERO, PAGE 10, EQUATION 1.2.10-(3)
  //C
  delta = deltab(m) * (fem::pow((tmb(m) / tmk), (gz * amz / (rstar * alm(m)))));
  goto statement_5;
  statement_4:
  tmk = tmb(m);
  //C
  //C        GRADIENT IS ZERO, PAGE 10, EQUATION 1.2.10-(4)
  //C
  delta = deltab(m) * fem::exp(-gz * amz * delh / (rstar * tmb(m)));
  statement_5:
  theta = tmk / tmz;
  sigma = delta / theta;
  alpha = fem::sqrt(fem::pow3(theta)) * ((tmz + s) / (tmk + s));
  //C
  //C        CONVERSION TO ENGLISH UNITS
  //C
  tm = 1.8f * tmk;
  rho = rhoz * sigma / gzeng;
  ca = caz * fem::sqrt(theta);
  amu = amuz * alpha / gzeng;
  if (si) {
    goto statement_100;
  }
  goto statement_101;
  //C
  statement_100:
  tm = tm / 1.8f;
  rho = rho * 515.379f;
  ca = ca * .3048f;
  amu = amu * 47.880258f;
  zft = zft / 3.280833f;
  //C
  //C        IF IN SI UNITS$
  //C       TM       DEGREES  KELVIN
  //C       RHO      KG/M**2
  //C       CA       M/SEC
  //C       AMU      (N-SEC)/M**2
  //C        ZFT     M
  //C
  statement_101:
  //C        CALL OVERFL (J)
  //C        GOTO (6,8),J
  switch (2) {
    case 1: goto statement_6;
    case 2: goto statement_8;
    default: break;
  }
  statement_6:
  k += 2;
  goto statement_8;
  statement_7:
  k = 2;
  statement_8:;
}

struct procom_save
{
  fem::variant_bindings units_bindings;
};

void
procom(
  common& cmn,
  float& farx,
  float& tex,
  float& csex,
  float& akex,
  float& cpex,
  float& rex,
  float& phi,
  float& hex)
{
  FEM_CMN_SVE(procom);
  common_variant units(cmn.common_units, sve.units_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<bool> si;
      units.allocate(), si;
    }
  }
  bool const& si = units.bind<bool>();
  float te = fem::float0;
  float cpa = fem::float0;
  float hea = fem::float0;
  float sea = fem::float0;
  float cpf = fem::float0;
  float hef = fem::float0;
  float sef = fem::float0;
  float amw = fem::float0;
  //C
  //C        Calculates thermodynamic gas properties for either air or
  //C        a fuel-air mixture based on JP-4
  //C
  //C        IF SI UNITS ARE USED CONVERT TEX TO DEGREES RANKINE
  //C
  if (si) {
    tex = tex * 9.0f / 5.0f;
  }
  if (farx <= 067623) {
    goto statement_1;
  }
  farx = 0.067623f;
  //C
  statement_1:
  if (tex >= 300.f) {
    goto statement_2;
  }
  tex = 300.f;
  statement_2:
  if (tex <= 4000.f) {
    goto statement_3;
  }
  tex = 6000.f;
  statement_3:
  if (farx >= 0.0f) {
    goto statement_4;
  }
  farx = 0.0f;
  //C
  //C        AIR PATH
  //C
  statement_4:
  cpa = ((((((1.0115540e-25f * tex - 1.4526770e-21f) * tex +
    7.6215767e-18f) * tex - 1.5128259e-14f) + tex - 6.7178376e-12f) *
    te + 6.5519486e-08f) * tex - 5.1536879e-05f) * tex +
    2.5020051e-01f;
  //C
  hea = (((((((1.2644425e-26f * tex - 2.0752522e-22f) * tex +
    1.2702630e-18f) * tex - 3.0256518e-15f) * tex - 1.6794594e-12f) *
    tex + 2.1839826e-08f) * tex - 2.5768440e-05f) * tex +
    2.5020051e-01f) * tex - 1.7558886e+00f;
  //C
  sea = +2.5020051e-01f * fem::alog(tex) + ((((((1.4450767e-26f *
    tex - 2.4211288e-22f) * tex + 1.5243153e-18f) * tex -
    3.7820648e-15f) * tex - 2.2392790e-12f) * tex +
    3.22759743e-08f) * tex - 5.1576879e-05f) * tex + 4.5432300e-02f;
  //C
  if (farx <= 0.0f) {
    goto statement_5;
  }
  //C
  //C        FUEL/AIR PATH
  //C
  cpf = ((((((7.2678710e-25f * tex - 1.3335668e-20f) * tex +
    1.021293e-16f) * tex - 4.2051104e-13f) * tex + 9.9686793e-10f) *
    tex - 1.3771901e-06f) * tex + 1.2258630e-03f) * tex +
    7.3816638e-02f;
  //C
  hef = (((((((9.0848388e-26f * tex - 1.9050949e-21f) * tex +
    1.7021525e-17f) * tex - 8.4102208e-14f) * tex + 2.4921698e-10f) *
    tex - 4.5906332e-07f) * tex + 6.1293150e-04f) * tex +
    7.3816638e-02f) * tex + 3.0581530e+01f;
  //C
  sef = +7.3816638e-02f * fem::alog(tex) + ((((((1.0382670e-25f * tex -
    2.2226118e-21f) * tex + 2.0425826e-17f) * tex - 1.0512776e-13f) * tex +
    3.3228928e-10f) * tex - 6.8859505e-07f) * tex * 1.2258630e-03f) * tex +
    6.483398e-01f;
  //C
  statement_5:
  cpex = (cpa * farx * cpf) / (1.f + farx);
  hex = (hea + farx * hef) / (1.f + farx);
  phi = (sea + farx * sef) / (1.f + farx);
  amw = 20.97f - 0.946186f * farx;
  rex = 1.986375f / amw;
  akex = cpex / (cpex - rex);
  csex = fem::sqrt(akex * rex * tex * 25031.37f);
  if (si) {
    goto statement_100;
  }
  goto statement_101;
  statement_100:
  cpex = cpex * 4185.7666f;
  hex = hex * 2325 * 4259;
  phi = phi * 4185.7666f;
  rex = rex * 4185.7666f;
  csex = csex * 0.3048f;
  tex = tex * 5.0f / 9.0f;
  statement_101:;
}

struct condiv_save
{
  fem::variant_bindings units_bindings;
};

void
condiv(
  common& cmn,
  float& ti,
  float const& hi,
  float const& pi,
  float const& si,
  float& far,
  float const& wg,
  float const& pa,
  int const& ides,
  float& at,
  float& ao,
  float& pir,
  float& tt,
  float& ht,
  float& pt,
  float& st,
  float& to,
  float& ho,
  float& po,
  float& so,
  float& tst,
  float& tso,
  float& pst,
  float& pso,
  float& vt,
  float& vo,
  float& amt,
  float& amo,
  int& icon)
{
  FEM_CMN_SVE(condiv);
  common_variant units(cmn.common_units, sve.units_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<bool> zi;
      units.allocate(), zi;
    }
  }
  bool const& zi = units.bind<bool>();
  arr_1d<9, float> q(fem::fill0);
  float aj = fem::float0;
  float capsf = fem::float0;
  float g = fem::float0;
  float xx1 = fem::float0;
  float xx2 = fem::float0;
  float xx3 = fem::float0;
  float xx4 = fem::float0;
  float phii = fem::float0;
  float xx6 = fem::float0;
  int j = fem::int0;
  float tss = fem::float0;
  float css = fem::float0;
  float akicp = fem::float0;
  float rexs = fem::float0;
  float phiss = fem::float0;
  float hss = fem::float0;
  float hscal = fem::float0;
  float delhs = fem::float0;
  float cp = fem::float0;
  float ak = fem::float0;
  float rho = fem::float0;
  float cso = fem::float0;
  float rex = fem::float0;
  float phiso = fem::float0;
  float hso = fem::float0;
  float phical = fem::float0;
  float phecal = fem::float0;
  float delphi = fem::float0;
  int mam = fem::int0;
  float aocal = fem::float0;
  float ea = fem::float0;
  float dir = fem::float0;
  float tsot = fem::float0;
  int jcon = fem::int0;
  float t1 = fem::float0;
  float tsc = fem::float0;
  int i = fem::int0;
  float cst = fem::float0;
//  float gp = fem::float0;
  float phist = fem::float0;
  float hst = fem::float0;
  float eh = fem::float0;
  float tstt = fem::float0;
  float pr = fem::float0;
  float aoid = fem::float0;
  int n = fem::int0;
  float dela = fem::float0;
  float psx = fem::float0;
  float psy = fem::float0;
  //C
  //C        Performs nozzle calculations for a convergent-divergent
  //C        (C-D) nozzle
  //C
  //C        ICON-1  SUBSONIC, COMPARE PIR NITH PI
  //C        ICON-2  SONIC, SHOCK INSIDE NOZZLE, COMPARE PIR WITH PI
  //C       ICON-3  SONIC, SHOCK OUTSIDE NOZZLE, COMPARE PIR WITH PI
  //C       ICON-4   ERROR
  //C
  q(2) = 0.f;
  q(3) = 0;
  if (zi) {
    goto statement_100;
  }
  aj = 778.26f;
  capsf = 2116.7170f;
  g = 32.174069f;
  goto statement_101;
  statement_100:
  aj = 1.0f;
  capsf = 101325.0f;
  g = 1.0f;
  statement_101:
  //C
  procom(cmn, far, ti, xx1, xx2, xx3, xx4, phii, xx6);
  //C        SONIC CALCULATIONS
  j = 0.f;
  tss = 0.833f * ti;
  statement_1:
  j++;
  procom(cmn, far, tss, css, ak,cp, rexs, phiss, hss);
  hscal = hi - fem::pow2(css) / (2.f * g * aj);
  delhs = hscal - hss;
  switch (fem::if_arithmetic(fem::abs(delhs) - 0.000f * hscal)) {
    case -1: goto statement_4;
    case  0: goto statement_4;
    default: goto statement_2;
  }
  statement_2:
  tss += delhs / cp;
  switch (fem::if_arithmetic(j - 15)) {
    case -1: goto statement_1;
    case  0: goto statement_1;
    default: goto statement_3;
  }
  statement_3:
  icon = 4;
  return;
  statement_4:
  switch (fem::if_arithmetic(ides)) {
    case -1: goto statement_11;
    case  0: goto statement_11;
    default: goto statement_5;
  }
  //C        SONIC DESIGN. CALCULATE AT
  statement_5:
  vt = css;
  tst = tss;
  pst = pi * fem::pow((tst / ti), (ak / (ak - 1.f)));
  rho = capsf * pst / (aj * rexs * tst);
  at = wg / (rho * vt);
  amt = 1.0f;
  //C        IDEAL EXPANSION DESIGN, CALCULATE AO
  pso = pa;
  j = 0;
  tso = ti * fem::pow((pso / pi), 0.286f);
  statement_6:
  j++;
  procom(cmn, far, tso, cso, ak, cp, rex, phiso, hso);
  phical = phii - rex * fem::alog(pi / pso);
  delphi = phecal - phiso;
  switch (fem::if_arithmetic(fem::abs(delphi) - 0.0001f * phical)) {
    case -1: goto statement_8;
    case  0: goto statement_8;
    default: goto statement_7;
  }
  statement_7:
  tso = tso * fem::exp(4.f * delphi);
  switch (fem::if_arithmetic(j - 15)) {
    case -1: goto statement_6;
    case  0: goto statement_6;
    default: goto statement_3;
  }
  statement_8:
  vo = fem::sqrt(2.f * g * aj * (hi - hso));
  amo = vo / cso;
  ao = (at / amo) * fem::pow((2.f * (1.f + (ak - 1.f) * fem::pow2(
    amo) / 2.f) / (ak + 1.f)), ((ak + 1.f) / (2.f * (ak - 1.f))));
  pir = pi;
  icon = 3;
  statement_9:
  to = ti;
  ho = hi;
  po = pi;
  so = si;
  statement_10:
  tt = ti;
  ht = hi;
  pt = pi;
  st = si;
  return;
  //C        ASSUME SONIC THROAT AND ISENTROPIC EXPANSION TO AO
  statement_11:
  vt = css;
  amt = 1.0f;
  st = tss;
  rho = wg / (at * vt);
  pst = rho * aj * rexs * tst / capsf;
  pir = pst * fem::pow((ti / tst), (ak / (ak - 1.f)));
  switch (fem::if_arithmetic(pst - pa)) {
    case -1: goto statement_12;
    case  0: goto statement_27;
    default: goto statement_27;
  }
  statement_12:
  tso = fem::pow(0.95f, ti);
  mam = 0;
  statement_13:
  procom(cmn, far, tso, cso, ak, cp, rex, phiso, hso);
  amo = fem::sqrt(2.f * ((ti / tso) - 1.0f) / (ak - 1.f));
  aocal = (at / amo) * fem::pow((2.f * (1.f + (ak - 1.f) * fem::pow2(
    amo) / 2.f) / (ak + 1.f)), ((ak + 1.f) / (2.f * (ak - 1.f))));
  ea = (ao - aocal) / ao;
  dir = fem::sqrt(ao / aocal);
  afquir(q(1), tso, ea, 0.f, 100.f, 0.0001f, dir, tsot, jcon);
  switch (jcon) {
    case 1: goto statement_14;
    case 2: goto statement_18;
    case 3: goto statement_3;
    default: break;
  }
  statement_14:
  tso = tsot;
  switch (fem::if_arithmetic(tso - ti)) {
    case -1: goto statement_15;
    case  0: goto statement_13;
    default: goto statement_16;
  }
  statement_15:
  tsc = 2.f * t1 / (ak + 1.f);
  if (tso > tsc) {
    goto statement_17;
  }
  statement_16:
  tso = 0.98f * ti;
  goto statement_13;
  statement_17:
  if (q(2) < 30.0f || amo < 0.95f || mam == 1) {
    goto statement_13;
  }
  tso = 2.f * ti / (2.f + 0.98f * (ak - 1.f));
  mam = i;
  goto statement_13;
  statement_18:
  pso = pir * fem::pow((tso / ti), (ak / (ak - 1.f)));
  switch (fem::if_arithmetic(pso - pa)) {
    case -1: goto statement_20;
    case  0: goto statement_19;
    default: goto statement_27;
  }
  //C ***   CRITICAL FLOW, ISENTROPIC EXPAMSION TO PA
  statement_19:
  vo = amo * cso;
  icon = 1;
  goto statement_9;
  //C ***    SUBSONIC FLOW
  statement_20:
  pso = pa;
  q(2) = 0.f;
  q(3) = 0.f;
  j = 0;
  tso = 0.833f * ti;
  statement_21:
  j++;
  procom(cmn, far, tso, cso, ak, cp, rex, phiso, hso);
  rho = capsf * pso / (aj * rex * tso);
  vo = wg / (rho * ao);
  hscal = hi - fem::pow2(vo) / (2.f * g * aj);
  delhs = hscal - hso;
  switch (fem::if_arithmetic(fem::abs(delhs) - 0.0005f * hscal)) {
    case -1: goto statement_23;
    case  0: goto statement_23;
    default: goto statement_22;
  }
  statement_22:
  tso += delhs / cp;
  switch (fem::if_arithmetic(j - 15)) {
    case -1: goto statement_21;
    case  0: goto statement_21;
    default: goto statement_3;
  }
  statement_23:
  amo = vo / cso;
  pir = pso * fem::pow((ti / tso), (ak / (ak - 1.f)));
  tst = tso;
  procom(cmn, far, tst, cst, ak, cp, rex, phist, hst);
  pst = pir * fem::pow((tst / ti), (ak / (ak - 1.f)));
  rho = pst * capsf / (aj * rex * tst);
  vt = wg / (rho * at);
  hscal = hi - fem::pow2(vt) / (2.f * g * aj);
  eh = (hscal - hst) / hscal;
  dir = 1.f + (hscal - hst) / (cp * tst);
  afquir(q(1), tst, eh, 0.f, 20.f, 0.0005f, dir, tstt, jcon);
  switch (jcon) {
    case 1: goto statement_25;
    case 2: goto statement_26;
    case 3: goto statement_3;
    default: break;
  }
  statement_25:
  tst = tstt;
  goto statement_26;
  statement_26:
  amt = vt / cst;
  icon = 1;
  goto statement_9;
  //C ***    SUPERCRITICAL FLO, ISENTROPIC EXPANSION TO PA
  statement_27:
  pso = pa;
  j = 0;
  tso = ti * fem::pow((pso / pr), 0.286f);
  statement_28:
  j++;
  procom(cmn, far, tso, cso, ak, cp, rex, phiso, hso);
  phical = phii - rex * fem::alog(pir / pso);
  delphi = phical - phiso;
  switch (fem::if_arithmetic(fem::abs(delphi) - 0.0001f * phical)) {
    case -1: goto statement_30;
    case  0: goto statement_30;
    default: goto statement_2;
  }
  tso = tso * fem::exp(4.f * delphi);
  switch (fem::if_arithmetic(j - 15)) {
    case -1: goto statement_28;
    case  0: goto statement_26;
    default: goto statement_3;
  }
  statement_30:
  tso = fem::sqrt(2.f * g * aj * (hi - hso));
  amo = vo / cso;
  aoid = (at / amo) * fem::pow((2.f * (1.f + (ak - 1.f) * fem::pow2(
    amo) / 2.f) / (ak + 1.f)), ((ak + 1.f) / (2.f * (ak - 1.f))));
  icon = 3;
  n = 0;
  switch (fem::if_arithmetic(ao - aoid)) {
    case -1: goto statement_31;
    case  0: goto statement_9;
    default: goto statement_32;
  }
  //C ***    SUPERCRT|CAL FLOW, ISENTROPIC EXPANSION TO AO
  statement_31:
  n = 1;
  statement_32:
  tso = 0.833f * t1;
  j = 0;
  statement_33:
  j++;
  procom(cmn, far, tso, cso, ak, cp, rex, phiso, hso);
  amo = fem::sqrt(2.f * ((ti / tso) - 1.f) / (ak - 1.f));
  aocal = (at / amo) * fem::pow((2.f * (1.f + (ak - 1.f) * fem::pow2(
    amo) / 2.f) / (ak + 1.f)), ((ak + 1.f) / (2.f * (ak - 1.f))));
  dela = ao - aocal;
  switch (fem::if_arithmetic(fem::abs(dela) - 0.0001f * ao)) {
    case -1: goto statement_35;
    case  0: goto statement_35;
    default: goto statement_36;
  }
  tso = tso * fem::sqrt(aocal / ao);
  switch (fem::if_arithmetic(j - 50)) {
    case -1: goto statement_33;
    case  0: goto statement_33;
    default: goto statement_3;
  }
  statement_35:
  switch (fem::if_arithmetic(n)) {
    case -1: goto statement_37;
    case  0: goto statement_37;
    default: goto statement_36;
  }
  //C ***    UNDEREXPANDEO, SHOCK OUTSIDE NOZZLE
  statement_36:
  pso = pir * fem::pow((tso / ti), (ak / (ak - 1.f)));
  vo = amo * cso;
  goto statement_9;
  //C ***    OVEREXPANOED, FIND SHOCK POSITION
  statement_37:
  psx = pir * fem::pow((tso / ti), (ak / (ak - 1.f)));
  psy = psx * (2.f * ak * fem::pow2(amo) / (ak + 1.f) - (ak - 1.f) / (
    ak + 1.f));
  switch (fem::if_arithmetic(pa - psy)) {
    case -1: goto statement_38;
    case  0: goto statement_39;
    default: goto statement_39;
  }
  //C        OVEREXPANDED, SHOCK OUTSIDE NOZZLE
  statement_38:
  pso = psx;
  vo = ao * cso;
  goto statement_9;
  //C ***    OVEREXPANDED, SHOCK INSIDE NOZZLE
  statement_39:
  pso = pa;
  j = 0;
  tso = 0.833f * ti;
  statement_40:
  j++;
  procom(cmn, far, tso, cso, ak, cp, rex, phiso, hso);
  rho = capsf * pso / (aj * rex * tso);
  vo = wg / (rho * ao);
  hscal = hi - fem::pow2(vo) / (2.f * g * aj);
  delhs = hscal - hso;
  switch (fem::if_arithmetic(fem::abs(delhs) - 0.0001f * hscal)) {
    case -1: goto statement_42;
    case  0: goto statement_42;
    default: goto statement_41;
  }
  statement_41:
  tso = tso + delhs / cp;
  switch (fem::if_arithmetic(j - 15)) {
    case -1: goto statement_40;
    case  0: goto statement_40;
    default: goto statement_3;
  }
  statement_42:
  amo = vo / cso;
  to = ti;
  ho = hi;
  po = pso * fem::pow((to / tso), (ak / (ak - 1.f)));
  so = phii - rex * fem::alog(po);
  icon = 2;
  goto statement_10;
}

struct thermo_save
{
  fem::variant_bindings units_bindings;
};

void
thermo(
  common& cmn,
  float& px,
  float& hx,
  float& tx,
  float& sx ,
  float& amx,
  int const& l,
  float const& far,
  int const& k)
{
  FEM_CMN_SVE(thermo);
  common_write write(cmn);
  common_variant units(cmn.common_units, sve.units_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<bool> si;
      units.allocate(), si;
    }
  }
  bool const& si = units.bind<bool>();
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
  if (si) {
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
  procom(cmn, fx, tx, cs, ak, cp, r, phi, hx);
  goto statement_3;
  //C
  statement_1:
  tx = hx / cpg;
  FEM_DO_SAFE(i, 1, 15) {
    procom(cmn, fx, tx, cs, ak, cp, r, phi, h);
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

struct convrg_save
{
  fem::variant_bindings units_bindings;
};

void
convrg(
  common& cmn,
  float& ti,
  float& hi,
  float& pi,
  float& si,
  float& far,
  float const& wg,
  float& pa,
  int const& ides,
  float& ao,
  float& pr,
  float& to,
  float& ho,
  float& po,
  float& so,
  float& tso,
  float& pso,
  float& vo,
  float& amo,
  int& icon)
{
  FEM_CMN_SVE(convrg);
  common_variant units(cmn.common_units, sve.units_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> zi;
      units.allocate(), zi;
    }
  }
  bool const& zi = units.bind<bool>();
//  bool zi = fem::bool0;
  float aj = fem::float0;
  float capsf = fem::float0;
  float g = fem::float0;
  float cpg = fem::float0;
  float xx1 = fem::float0;
  float xx2 = fem::float0;
  float xx3 = fem::float0;
  float xx4 = fem::float0;
  float phii = fem::float0;
  float xx6 = fem::float0;
  int j = fem::int0;
  float tss = fem::float0;
  float css = fem::float0;
  float aks = fem::float0;
  float cp = fem::float0;
  float rexs = fem::float0;
  float phiss = fem::float0;
  float hss = fem::float0;
  float hscal = fem::float0;
  float delhs = fem::float0;
  float tsi = fem::float0;
  float hsi = fem::float0;
  float ssi = fem::float0;
  float xxi = fem::float0;
  float vis = fem::float0;
//  float vo = fem::float0;
  float cso = fem::float0;
  float rex = fem::float0;
  float phiso = fem::float0;
  float hso = fem::float0;
  float rho = fem::float0;
//  int i = fem::int0;
  float aocrit = fem::float0;
  float adcrit = fem::float0;
  float ako = fem::float0;
  float felhs = fem::float0;
  //C
  //C        performs nozzle calculations for a convergent nozzle
  //C
  //C        ICON=1  SUBSONIC, COMPARE PI wITH PR
  //C        ICON=2  SONIC, COMPARE PI WITH PR
  //C        ICON=4  ERROR
  //C
  if (zi) {
    goto statement_100;
  }
  aj = 778.26f;
  capsf = 2116.217f;
  g = 32.174049f;
  cpg = 0.250f;
  goto statement_101;
  //C
  statement_100:
  aj = 1.0f;
  capsf = 1.0f;
  g = 1.0f;
  cpg = 1048.0f;
  //C
  statement_101:
  //C
  procom(cmn, far, ti, xx1, xx2, xx3, xx4, phii, xx6);
  //C
  //C ***    SONIC CALCULATIONS
  j = 0;
  tss = 0.833f * ti;
  statement_1:
  j++;
  //C
  procom(cmn, far, tss, css, aks, cp, rexs, phiss, hss);
  hscal = hi - fem::pow2(css) / (2.f * g * aj);
  delhs = hscal - hss;
  switch (fem::if_arithmetic(fem::abs(delhs) - 0.0005f * hscal)) {
    case -1: goto statement_4;
    case  0: goto statement_4;
    default: goto statement_2;
  }
  statement_2:
  tss += delhs / cp;
  switch (fem::if_arithmetic(j - 15)) {
    case -1: goto statement_1;
    case  0: goto statement_1;
    default: goto statement_3;
  }
  statement_3:
  icon = 4;
  return;
  //C
  statement_4:
  switch (fem::if_arithmetic(ides)) {
    case -1: goto statement_12;
    case  0: goto statement_12;
    default: goto statement_5;
  }
  //C ***    ISENTROPIC EXPANSION CALCULATIONS
  statement_5:
  j = 0;
  tsi = ti * fem::pow((pa / pi), 0.286f);
  statement_6:
  j++;
  thermo(cmn, pa, hsi, tsi, ssi, xxi, 1, far, 0);
  switch (fem::if_arithmetic(fem::abs(ssi - si) - 0.0001f * si)) {
    case -1: goto statement_8;
    case  0: goto statement_8;
    default: goto statement_7;
  }
  statement_7:
  tsi = tsi / fem::exp((ssi - si) / cpg);
  switch (fem::if_arithmetic(j - 30)) {
    case -1: goto statement_6;
    case  0: goto statement_6;
    default: goto statement_3;
  }
  statement_8:
  vis = fem::sqrt(2.f * g * aj * (hi - hsi));
  switch (fem::if_arithmetic(vis - css)) {
    case -1: goto statement_9;
    case  0: goto statement_11;
    default: goto statement_11;
  }
  //C ***    SUBSONIC DESIGN, CALCULATE  AO
  statement_9:
  vo = vis;
  tso = tsi;
  pso = pa;
  procom(cmn, far, tso, cso, xx2, xx3, rex, phiso, hso);
  rho = capsf * pso / (aj * rex * tso);
  ao = wg / (rho * vo);
  amo = vo / cso;
  pr = pi;
  icon = 1;
  statement_10:
  to = ti;
  ho = hi;
  po = pi;
  so = si;
  return;
  //C ***    SONIC DESIGN, CALCULATE AO
  statement_11:
  vo = css;
  tso = tss;
  pso = pi * fem::pow((tso / ti), (aks / (aks - 1.f)));
  rho = capsf * pso / (aj * rexs * tso);
  ao = wg / (rho * vo);
  amo = 1.0f;
  pr = pi;
  icon = 2;
  goto statement_10;
  //C ***    NON-DESIGN, CALCULATE CRITICAL CONDITIONS
  statement_12:
  vo = css;
  tso = tss;
  pso = pa;
  rho = capsf * pso / (aj * rexs * tso);
  aocrit = wg / (rho * vo);
  ao = 1.0f;
  pr = pso * fem::pow((ti / tso), (aks / (aks - 1.f)));
  switch (fem::if_arithmetic(ao - aocrit)) {
    case -1: goto statement_13;
    case  0: goto statement_13;
    default: goto statement_14;
  }
  //C ***    NON-DESIGN, CRITICAL AND SUPERCRITICAL CONDITIONS
  statement_13:
  pso = pso * adcrit / ao;
  pr = pr * aocrit / ao;
  icon = 2;
  goto statement_10;
  //C ***    NON-DESIGN, SUBSONIC CALCULATICNS
  statement_14:
  pso = pa;
  j = 0;
  tso = 0.833f * tso;
  statement_15:
  j++;
  procom(cmn, far, tso, cso, ako, cp, rex, phiso, hso);
  rho = capsf * pso / (aj * rex * tso);
  vo = wg / (rho * ao);
  hscal = hi - fem::pow2(vo) / (2.f * g * aj);
  delhs = hscal - hso;
  switch (fem::if_arithmetic(fem::abs(felhs) - 0.0005f * hscal)) {
    case -1: goto statement_17;
    case  0: goto statement_17;
    default: goto statement_16;
  }
  statement_16:
  tso += delhs / cp;
  switch (fem::if_arithmetic(j - 15)) {
    case -1: goto statement_15;
    case  0: goto statement_15;
    default: goto statement_3;
  }
  statement_17:
  amo = vo / cso;
  pr = pso * fem::pow((ti / tso), (ako / (ako - 1.f)));
  icon = 1;
  goto statement_10;
}

struct deriv_save
{
  fem::variant_bindings dyn_bindings;
};

//C
//C        COMMON  /DESIGN/
//C     1  IDES,   JDES,   KDES,   MODE,   INIT,   IDUMP,  IAMTP,  IGASMX,
//C     2  IDBURN, IAFTBN, IDCD,   IMCD,   IDSHOC, IMSHOC, NOZFLT, ITRYS,
//C     3  LOOPER, NOMAP,  NUMMAP, MAPEDG, TOLALL, ERR(9)
//C
//C        COMMON  /ALL1/
//C     1  PCNFGU, PCNCGU, T4GU,   DUMD1,  DUMD2,  DELFG,  DELFN,  DELSFC,
//C     2  ZFDS,   PCNFDS, PRFDS,  ETAFDS, WAFDS,  PRFCF,  ETAFCF, WAFCF,
//C     3  ZCDS,   PCNCDS, PRCDS,  ETACDS, WACDS,  PRCCF,  ETACCF, WACCF,
//C     4  T4DS,   WFBDS,  DTCODS, ETABDS, WA3CDS, DPCODS, DTCOCF, ETABCF,
//C     5  TFHPDS, CNHPDS, ETHPDS, TFHPCF, CNHPCF, ETHPCF, DHHPCF, T2DS,
//C     6  TFLPDS, CNLPDS, ETLPDS, TFLPCF, CNLPCF, ETLPCF, DHLPCF, T21DS,
//C     7  T24DS,  WFDDS,  DTDUDS, ETADDS, WA23DS, DPDUDS, DTDUCF, ETADCF,
//C     8  T7DS,   WFADS,  DTAFDS, ETAADS, WG6CDS, DPAFDS, DTAFCF, ETAACF,
//C     9  A55,    A25,    A6,     A7,     A8,     A9,     A28,    A29,
//C     $  PS55,   AM55,   CVDNOZ, CVMNOZ, A8SAV,  A9SAV,  A28SAV, A29SAV
//C
//C        COMMON  /ALL2/
//C     1  T1,     P1,     H1,     S1,     T2,     P2,     H2,     S2,
//C     2  T21,    P21,    H21,    S21,    T3,     P3,     H3,     S3,
//C     3  T4,     P4,     H4,     S4,     T5,     P5,     H5,     S5,
//C     4  T55,    P55,    H55,    S55,    BLF,    BLC,    BLDU,   BLOB,
//C     5  CNF,    PRF,    ETAF,   WAFC,   WAF,    WA3,    WG4,    FAR4,
//C     6  CNC,    PRC,    ETAC,   WACC,   WAC,    ETAB,   DPCOM,  DUMP,
//C     7  CNHP,   ETATHP, DHTCHP, DHTC,   BLHP,   WG5,    FAR5,   CS,
//C     8  CNLP,   ETATLP, DHTCLP, DHTF,   BLLP,   WG55,   FAR55,  HPEXT,
//C     9  AM,     ALTP,   ETAR,   ZF,     PCNF,   ZC,     PCNC,   WFB,
//C     $  TFFHP,  TFFLP,  PCBLF,  PCBLC,  PCBLDU, PCBLOB, PCBLHP, PCBLLP
//C
//C        COMMON /ALL3/
//C     1  XP1,    XWAF,   XWAC,   XBLF,   XBLDU,  XH3,    DUMS1,  DUMS2,
//C     2  XT21,   XP21,   XH21,   XS21,   T23,    P23,    H23,    S23,
//C     3  T24,    P24,    H24,    S24,    T25,    P25,    H25,    S25,
//C     4  T28,    P28,    H28,    S28,    T29,    P29,    H29,    S29,
//C     5  WAD,    WFD,    WG24,   FAR24,  ETAD,   DPDUC,  BYPASS, DUMS3,
//C     6  TS28,   PS28,   V28,    AM28,   TS29,   PS29,   V29,    AM29,
//C     7  XT55,   XP55,   XH55,   XS55,   XT25,   XP25,   XH25,   XS25,
//C     8  XWFB,   XWG55,  XFAR55, XWFD,   XWG24,  XFAR24, XXP1,   DUMB,
//C     9  T6,     P6,     H6,     S6,     T7,     P7,     H7,     S7
//C     $  T8,     P8,     H8,     S8,     T9,     P9,     H9,     S9
//C
//C        COMMON  /ALL4/
//C     1  WG6,    WFA,    WG7,    FAR7,   ETAA,   DPAFT,  V55,    V25,
//C     2  PS6,    V6,     AM6,    TS7,    PS7,    V7,     AM7,    AM25,
//C     3  TS8,    PS8,    V8,     AM8,    TS9,    PS9,    V9,     AM9,
//C     4  VA,     FRD,    VJD,    FGMD,   VJM,    FGMM,   FGPD,   FGPM,
//C     5  FGM,    FGP,    WFT,    WGT,    FART,   FG,     FN,     SFC,
//C     6  WA32,   DPWGDS, DPWING, WA32DS, A38,    AM38,   V38,    T38,
//C     7  H38,    P38,    TS38,   PS38,   T39,    H39,    P39,    TS39,
//C     8  V39,    AM39,   A39,    BPRINT, WG37,   CVDWNG, FGMWNG, FGPWNG,
//C     9  FNWING, FNMAIN, FWOVFN, PS39,   FFOVFN, FCOVFN, FMNOFN, FNOVFD,
//C     $  VJW,    T22,    P22,    H22,    S22,    T50,    P60,    H50
//C
//C        COMMON  /ALL5/
//C     1  S50,    WA22,   ZI,     PCNI,   CNI,    PRI,    ETAI,   WACI,
//C     2  TFFIP,  CNIP,   ETATIP, DHTCIP, DHTI,   BLIP,   PCBLIP, PCNIGU,
//C     3  ZIDS,   PCNIDS, PRIDS,  ETAIDS, WAIDS,  PRICF,  ETAICF, WAICF,
//C     4  TFIPDS, CNIPDS, ETIPDS, TFIPCF, CNIPCF, ETIPCF, DHIPCF, WAICDS,
//C     5  WAI,    PCBLI,  BLI,    T22DS,  WA21,   WG50,   FAR50,  A24,
//C     6  AR23,   DUMSPL, FXFN2M, FXM2CP, AFTFAN, PUNT,   PCBLID, P6DSAV,
//C     7  AM6DSV, ETAASV, FAR7SV, T4PBL,  T41,    FAN,    ISPOOL
//C
float
deriv(
  common& cmn,
  int const& i,
  float const& x)
{
  float return_value = fem::float0;
  FEM_CMN_SVE(deriv);
  arr_ref<float, 2> fo(cmn.fo, dimension(50, 4));
  //
  common_variant dyn(cmn.common_dyn, sve.dyn_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<int> itran;
      mbr<float> time;
      mbr<float> dt;
      mbr<float> tf;
      mbr<int> jtran;
      mbr<int> nstep;
      mbr<float> tprint;
      mbr<float> dtprnt;
      dyn.allocate(), itran, time, dt, tf, jtran, nstep, tprint, dtprnt;
    }
  }
  /* int const& itran */ dyn.bind<int>();
  /* float const& time */ dyn.bind<float>();
  float const& dt = dyn.bind<float>();
  /* float const& tf */ dyn.bind<float>();
  int const& jtran = dyn.bind<int>();
  /* int const& nstep */ dyn.bind<int>();
  /* float const& tprint */ dyn.bind<float>();
  /* float const& dtprnt */ dyn.bind<float>();
  float xo = fem::float0;
  //C
  //C        Computes time derivatives
  //C
  if (jtran == 1) {
    goto statement_1;
  }
  return_value = 0.0f;
  fo(i, 1) = x;
  fo(i, 2) = x;
  fo(i, 3) = return_value;
  fo(i, 4) = return_value;
  return return_value;
  statement_1:
  xo = fo(1, 2);
  return_value = (x - xo) / dt;
  fo(i, 1) = x;
  fo(i, 3) = return_value;
  return return_value;
}

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
  int& ncode)
{
  ax(dimension(nam));
  bx(dimension(nam, nom));
  cx(dimension(nam, nom));
  dx(dimension(nam, nom));
  no(dimension(nam));
  int i = fem::int0;
  int ih = fem::int0;
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
  //C        NCODE=O2     A HI   q
  //C        NCODE=O7     ERROR
  //C        NCODE=10     B LO
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
  ncode = 1;
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
  afquir(q(1), pp, err, 0.0f,0.25f, 0.001f, dir, pt, icon);
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

// forward declaration (dependency cycle)
void error(common&);

struct thcomp_save
{
  fem::variant_bindings units_bindings;
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
  float& t0,
  float& h0,
  float& s0,
  float& p0)
{
  FEM_CMN_SVE(thcomp);
  common_variant units(cmn.common_units, sve.units_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<bool> si;
      units.allocate(), si;
    }
  }
  bool const& si = units.bind<bool>();
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
  if (si) {
    cpg = 1048.0f;
  }
  p0 = p * pr;
  tp = t * fem::pow(pr, 0.28572f);
  //C
  FEM_DO_SAFE(i, 1, 25) {
    thermo(cmn, p0, hp, tp, sp, x1, 0, x2, 0);
    dels = sp - s;
    if (fem::abs(dels) <= 0.00005f * s) {
      goto statement_2;
    }
    tp = tp / fem::exp(dels / cpg);
  }
  error(cmn);
  statement_2:
  h0 = h + ((hp - h) / eta);
  thermo(cmn, p0, h0, t0, s0, x1, 0, x2, 1);
}

struct wducti_save
{
  fem::variant_bindings all5_bindings;
  fem::variant_bindings units_bindings;
  fem::variant_bindings vols_bindings;
  char aword[10];

  wducti_save() :
    aword("")
  {}
};

void
wducti(
  common& cmn)
{
  FEM_CMN_SVE(wducti);
  common_write write(cmn);
  int& ides = cmn.ides;
  arr_ref<float> err(cmn.err, dimension(9));
  float& wa32 = cmn.wa32;
  float& dpwing = cmn.dpwing;
  float& wa32ds = cmn.wa32ds;
  float& a38 = cmn.a38;
  float& am38 = cmn.am38;
  float& v38 = cmn.v38;
  float& t38 = cmn.t38;
  float& p38 = cmn.p38;
  float& h38 = cmn.h38;
//  float& s38 = cmn.s38;
  float& ts38 = cmn.ts38;
  float& ps38 = cmn.ps38;
  float& am39 = cmn.am39;
  float& a39 = cmn.a39;
  float& wg37 = cmn.wg37;
  float& cvdwng = cmn.cvdwng;
  //
  common_variant all5(cmn.common_all5, sve.all5_bindings);
  common_variant vols(cmn.common_vols, sve.vols_bindings);
  common_variant units(cmn.common_units, sve.units_bindings);
  char* aword = sve.aword;
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> s50;
      mbr<float> wa22;
      mbr<float> zi;
      mbr<float> pcni;
      mbr<float> cni;
      mbr<float> pri;
      mbr<float> etai;
      mbr<float> waci;
      mbr<float> tffip;
      mbr<float> cnip;
      mbr<float> etatip;
      mbr<float> dhtcip;
      mbr<float> dhti;
      mbr<float> blip;
      mbr<float> pcblip;
      mbr<float> pcnigu;
      mbr<float> zids;
      mbr<float> pcnids;
      mbr<float> prids;
      mbr<float> etaids;
      mbr<float> waids;
      mbr<float> pricf;
      mbr<float> etaicf;
      mbr<float> waicf;
      mbr<float> tfipds;
      mbr<float> cnipds;
      mbr<float> etipds;
      mbr<float> tfipcf;
      mbr<float> cnipcf;
      mbr<float> etipcf;
      mbr<float> dhipcf;
      mbr<float> waicds;
      mbr<float> wai;
      mbr<float> pcbli;
      mbr<float> bli;
      mbr<float> t22ds;
      mbr<float> wa21;
      mbr<float> wg50;
      mbr<float> far50;
      mbr<float> a24;
      mbr<float> ar23;
      mbr<float> dumspl;
      mbr<float> fxfn2m;
      mbr<float> fxm2cp;
      mbr<float> aftfan;
      mbr<float> punt;
      mbr<float> pcblid;
      mbr<float> p6dsav;
      mbr<float> am6dsv;
      mbr<float> etaasv;
      mbr<float> far7sv;
      mbr<float> t4pbl;
      mbr<float> t41;
      mbr<float> fan;
      mbr<int> ispool;
      all5.allocate(), s50, wa22, zi, pcni, cni, pri, etai, waci,
        tffip, cnip, etatip, dhtcip, dhti, blip, pcblip, pcnigu,
        zids, pcnids, prids, etaids, waids, pricf, etaicf, waicf,
        tfipds, cnipds, etipds, tfipcf, cnipcf, etipcf, dhipcf,
        waicds, wai, pcbli, bli, t22ds, wa21, wg50, far50, a24, ar23,
        dumspl, fxfn2m, fxm2cp, aftfan, punt, pcblid, p6dsav, am6dsv,
        etaasv, far7sv, t4pbl, t41, fan, ispool;
    }
    {
      mbr<float> vfan;
      mbr<float> vintc;
      mbr<float> vcomp;
      mbr<float> vcomb;
      mbr<float> vhptrb;
      mbr<float> viptrb;
      mbr<float> vlptrb;
      mbr<float> vaftbn;
      mbr<float> vfduct;
      mbr<float> vwduct;
      vols.allocate(), vfan, vintc, vcomp, vcomb, vhptrb, viptrb,
        vlptrb, vaftbn, vfduct, vwduct;
    }
    {
      mbr<bool> si;
      units.allocate(), si;
    }
  }
  /* float const& s50 */ all5.bind<float>();
  /* float const& wa22 */ all5.bind<float>();
  /* float const& zi */ all5.bind<float>();
  /* float const& pcni */ all5.bind<float>();
  /* float const& cni */ all5.bind<float>();
  /* float const& pri */ all5.bind<float>();
  /* float const& etai */ all5.bind<float>();
  /* float const& waci */ all5.bind<float>();
  /* float const& tffip */ all5.bind<float>();
  /* float const& cnip */ all5.bind<float>();
  /* float const& etatip */ all5.bind<float>();
  /* float const& dhtcip */ all5.bind<float>();
  /* float const& dhti */ all5.bind<float>();
  /* float const& blip */ all5.bind<float>();
  /* float const& pcblip */ all5.bind<float>();
  /* float const& pcnigu */ all5.bind<float>();
  /* float const& zids */ all5.bind<float>();
  /* float const& pcnids */ all5.bind<float>();
  /* float const& prids */ all5.bind<float>();
  /* float const& etaids */ all5.bind<float>();
  /* float const& waids */ all5.bind<float>();
  /* float const& pricf */ all5.bind<float>();
  /* float const& etaicf */ all5.bind<float>();
  /* float const& waicf */ all5.bind<float>();
  /* float const& tfipds */ all5.bind<float>();
  /* float const& cnipds */ all5.bind<float>();
  /* float const& etipds */ all5.bind<float>();
  /* float const& tfipcf */ all5.bind<float>();
  /* float const& cnipcf */ all5.bind<float>();
  /* float const& etipcf */ all5.bind<float>();
  /* float const& dhipcf */ all5.bind<float>();
  /* float const& waicds */ all5.bind<float>();
  /* float const& wai */ all5.bind<float>();
  /* float const& pcbli */ all5.bind<float>();
  /* float const& bli */ all5.bind<float>();
  /* float const& t22ds */ all5.bind<float>();
  /* float const& wa21 */ all5.bind<float>();
  /* float const& wg50 */ all5.bind<float>();
  /* float const& far50 */ all5.bind<float>();
  /* float const& a24 */ all5.bind<float>();
  /* float const& ar23 */ all5.bind<float>();
  /* float const& dumspl */ all5.bind<float>();
  /* float const& fxfn2m */ all5.bind<float>();
  /* float const& fxm2cp */ all5.bind<float>();
  /* float const& aftfan */ all5.bind<float>();
  /* float const& punt */ all5.bind<float>();
  float const& pcblid = all5.bind<float>();
  /* float const& p6dsav */ all5.bind<float>();
  /* float const& am6dsv */ all5.bind<float>();
  /* float const& etaasv */ all5.bind<float>();
  /* float const& far7sv */ all5.bind<float>();
  /* float const& t4pbl */ all5.bind<float>();
  /* float const& t41 */ all5.bind<float>();
  /* float const& fan */ all5.bind<float>();
  /* int const& ispool */ all5.bind<int>();
  /* float const& vfan */ vols.bind<float>();
  /* float const& vintc */ vols.bind<float>();
  /* float const& vcomp */ vols.bind<float>();
  /* float const& vcomb */ vols.bind<float>();
  /* float const& vhptrb */ vols.bind<float>();
  /* float const& viptrb */ vols.bind<float>();
  /* float const& vlptrb */ vols.bind<float>();
  /* float const& vaftbn */ vols.bind<float>();
  /* float const& vfduct */ vols.bind<float>();
  float const& vwduct = vols.bind<float>();
  bool const& si = units.bind<bool>();
  if (is_called_first_time) {
    aword = "WDUCTI";
  }
  float ra = fem::float0;
  float aj = fem::float0;
  float xzers = fem::float0;
  int i = fem::int0;
  arr_1d<26, float> xzero(fem::fill0);
  float p32 = fem::float0;
  float h32 = fem::float0;
  float t32 = fem::float0;
  float wa32c = fem::float0;
  float p36 = fem::float0;
  float t36 = fem::float0;
  float h36 = fem::float0;
  float s36 = fem::float0;
  float xx2 = fem::float0;
  float t37 = fem::float0;
  float p37 = fem::float0;
  float h37 = fem::float0;
  float s37 = fem::float0;
  arr_1d<9, float> q(fem::fill0);
  float wg37p = fem::float0;
  float h37p = fem::float0;
  float p37dot = fem::float0;
  float vwouct = fem::float0;
  float wg3t = fem::float0;
  float u37 = fem::float0;
  float u3t = fem::float0;
  float u37dot = fem::float0;
  float u3tdot = fem::float0;
  float h37x = fem::float0;
  float errw = fem::float0;
  float h3tx = fem::float0;
  float dir = fem::float0;
  float t37t = fem::float0;
  int igo = fem::int0;
  int nozd = fem::int0;
  float p38r = fem::float0;
//  float h38 = fem::float0;
  int icon = fem::int0;
  float s38 = fem::float0;
  float s39 = fem::float0;
  //C
  //C        Performs third-stream (wing) duct calculations
  //C        (not used in two-stream engines)
  //C
  //C        EQUIVALENCE  (XZERO,DPWING)
  //C
  cmn.word = aword;
  //C
  if (si) {
    goto statement_100;
  }
  ra = .0252f;
  aj = 2.719f;
  goto statement_101;
  statement_100:
  ra = 286.9f;
  aj = 1.0f;
  statement_101:
  if (pcblid > 0.1f) {
    goto statement_3;
  }
  xzers = cvdwng;
  FEM_DO_SAFE(i, 1, 26) {
    xzero(i) = 0.0f;
  }
  cvdwng = xzers;
  return;
  statement_3:
  //C
  p32 = cmn.p21;
  h32 = cmn.h21;
  t32 = cmn.t21;
  cmn.bprint = wa32 / cmn.wac;
  wa32c = wa32 * fem::sqrt(t32) / p32;
  if (ides == 1) {
    wa32ds = wa32c;
  }
  dpwing = cmn.dpwgds * wa32c / wa32ds;
  dpwing = fem::amin1(1.f, dpwing);
  p36 = p32 * (1.f - dpwing);
  t36 = t32;
  h36 = h32;
  thermo(cmn, p36, h36, t36, s36, xx2, 1, 0.0f, 0);
  wg37 = wa32;
  t37 = t36;
  p37 = p36;
  h37 = h36;
  s37 = s36;
  if (vwduct == 0.0f) {
    goto statement_21;
  }
  q(2) = 0.0f;
  q(3) = 0.0f;
  wg37p = wg37;
  h37p = h37;
  p37dot = deriv(cmn, 22, p37);
  statement_18:
  thermo(cmn, p37, h37, t37, s37, xx2, 1, 0.0f, 0);
  wg3t = wg37p - p37dot * vwouct / t37 / 1.4f * ra;
  u37 = h37 - ra * aj * t37;
  u37dot = deriv(cmn, 23, u3t);
  h37x = (wg37p * h37p - (wg37p - wg37) * u37 - u3tdot * p37 *
    vwduct / t37 * ra) / wg37;
  errw = (h37 - h37x) / h37;
  dir = fem::sqrt(fem::abs(h37 / h3tx));
  afquir(q(1), t37, errw, 0.0f, 20.0f, 0.0001f, dir, t37t, igo);
  switch (igo) {
    case 1: goto statement_19;
    case 2: goto statement_21;
    case 3: goto statement_20;
    default: break;
  }
  statement_19:
  t37 = t37t;
  goto statement_18;
  statement_20:
  error(cmn);
  statement_21:
  nozd = 0;
  convrg(cmn, t37, h37, p37, s37, 0.0f, wg37, cmn.p1, ides, a38,
    p38r, t38, h38, p38, s38,ts38, ps38, v38, am38, icon);
  switch (icon) {
    case 1: goto statement_5;
    case 2: goto statement_5;
    case 3: goto statement_5;
    case 4: goto statement_4;
    default: break;
  }
  statement_4:
  error(cmn);
  statement_5:
  cmn.t39 = t38;
  cmn.h39 = cmn.h38;
  cmn.p39 = p38;
  s39 = s38;
  cmn.ts39 = ts38;
  cmn.v39 = v38;
  am39 = am38;
  a39 = a38;
  cmn.ps39 = ps38;
  cmn.idshoc = icon + 3;
  err(7) = (p38r - p38) / p38r;
  if (ides == 1) {
    write(6,
      "('OINTER DUCT DESIGN',5x,'    A38=',e15.8,'   AM39=',e15.8,'    A39=',"
      "e16.8)"),
      a38, am38, a39, am39;
  }
  //C
}

// forward declaration (dependency cycle)
void cocomp(common&);

struct cocomb_save
{
  fem::variant_bindings all5_bindings;
  fem::variant_bindings flows_bindings;
  fem::variant_bindings units_bindings;
  fem::variant_bindings vols_bindings;
  char aword[10];

  cocomb_save() :
    aword("")
  {}
};

void
cocomb(
  common& cmn)
{
  FEM_CMN_SVE(cocomb);
  common_write write(cmn);
  int& ides = cmn.ides;
  int& mode = cmn.mode;
  arr_ref<float> err(cmn.err, dimension(9));
  float& pcncds = cmn.pcncds;
  float& wacds = cmn.wacds;
  float& prccf = cmn.prccf;
  float& etaccf = cmn.etaccf;
  float& waccf = cmn.waccf;
  float& t21ds = cmn.t21ds;
  float& t21 = cmn.t21;
  float& p21 = cmn.p21;
  float& t3 = cmn.t3;
  float& p3 = cmn.p3;
  float& h3 = cmn.h3;
  float& s3 = cmn.s3;
  float& blc = cmn.blc;
  float& cnc = cmn.cnc;
  float& prc = cmn.prc;
  float& etac = cmn.etac;
  float& wacc = cmn.wacc;
  float& wac = cmn.wac;
  float& zc = cmn.zc;
  float& pcnc = cmn.pcnc;
  float& pcblc = cmn.pcblc;
  arr_cref<float> cnx(static_cast<common_comp&>(cmn).cnx, dimension(15));
  arr_cref<float, 2> prx(static_cast<common_comp&>(cmn).prx, dimension(15, 15));
  arr_cref<float, 2> wacx(static_cast<common_comp&>(cmn).wacx,
    dimension(15, 15));
  arr_cref<float, 2> etax(static_cast<common_comp&>(cmn).etax,
    dimension(15, 15));
  int& ncn = static_cast<common_comp&>(cmn).ncn;
  arr_cref<int> npt(static_cast<common_comp&>(cmn).npt, dimension(15));
  //
  common_variant all5(cmn.common_all5, sve.all5_bindings);
  common_variant vols(cmn.common_vols, sve.vols_bindings);
  common_variant flows(cmn.common_flows, sve.flows_bindings);
  common_variant units(cmn.common_units, sve.units_bindings);
    char* aword= sve.aword;;
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> s50;
      mbr<float> wa22;
      mbr<float> zi;
      mbr<float> pcni;
      mbr<float> cni;
      mbr<float> pri;
      mbr<float> etai;
      mbr<float> waci;
      mbr<float> tffip;
      mbr<float> cnip;
      mbr<float> etatip;
      mbr<float> dhtcip;
      mbr<float> dhti;
      mbr<float> blip;
      mbr<float> pcblip;
      mbr<float> pcnigu;
      mbr<float> zids;
      mbr<float> pcnids;
      mbr<float> prids;
      mbr<float> etaids;
      mbr<float> waids;
      mbr<float> pricf;
      mbr<float> etaicf;
      mbr<float> waicf;
      mbr<float> tfipds;
      mbr<float> cnipds;
      mbr<float> etipds;
      mbr<float> tfipcf;
      mbr<float> cnipcf;
      mbr<float> etipcf;
      mbr<float> dhipcf;
      mbr<float> waicds;
      mbr<float> wai;
      mbr<float> pcbli;
      mbr<float> bli;
      mbr<float> t22ds;
      mbr<float> wa21;
      mbr<float> wg50;
      mbr<float> far50;
      mbr<float> a24;
      mbr<float> ar23;
      mbr<bool> dumspl;
      mbr<bool> fxfn2m;
      mbr<float> fxm2cp;
      mbr<float> aftfan;
      mbr<float> punt;
      mbr<float> pcblid;
      mbr<float> p6dsav;
      mbr<float> am6dsv;
      mbr<float> etaasv;
      mbr<float> far7sv;
      mbr<float> t4pbl;
      mbr<float> t41;
      mbr<bool> fan;
      mbr<int> ispool;
      all5.allocate(), s50, wa22, zi, pcni, cni, pri, etai, waci,
        tffip, cnip, etatip, dhtcip, dhti, blip, pcblip, pcnigu,
        zids, pcnids, prids, etaids, waids, pricf, etaicf, waicf,
        tfipds, cnipds, etipds, tfipcf, cnipcf, etipcf, dhipcf,
        waicds, wai, pcbli, bli, t22ds, wa21, wg50, far50, a24, ar23,
        dumspl, fxfn2m, fxm2cp, aftfan, punt, pcblid, p6dsav, am6dsv,
        etaasv, far7sv, t4pbl, t41, fan, ispool;
    }
    {
      mbr<float> vfan;
      mbr<float> vintc;
      mbr<float> vcomp;
      mbr<float> vccomb;
      mbr<float> vhptrb;
      mbr<float> viptrb;
      mbr<float> vlptrb;
      mbr<float> vaftbn;
      mbr<float> vfduct;
      mbr<float> vwduct;
      vols.allocate(), vfan, vintc, vcomp, vccomb, vhptrb, viptrb,
        vlptrb, vaftbn, vfduct, vwduct;
    }
    {
      mbr<float> wafp;
      mbr<float> waip;
      mbr<float> wacp;
      flows.allocate(), wafp, waip, wacp;
    }
    {
      mbr<bool> si;
      units.allocate(), si;
    }
  }
  /* float const& s50 */ all5.bind<float>();
  float& wa22 = all5.bind<float>();
  /* float const& zi */ all5.bind<float>();
  /* float const& pcni */ all5.bind<float>();
  float const& cni = all5.bind<float>();
  /* float const& pri */ all5.bind<float>();
  /* float const& etai */ all5.bind<float>();
  float& waci = all5.bind<float>();
  /* float const& tffip */ all5.bind<float>();
  /* float const& cnip */ all5.bind<float>();
  /* float const& etatip */ all5.bind<float>();
  /* float const& dhtcip */ all5.bind<float>();
  /* float const& dhti */ all5.bind<float>();
  /* float const& blip */ all5.bind<float>();
  float const& pcblip = all5.bind<float>();
  /* float const& pcnigu */ all5.bind<float>();
  /* float const& zids */ all5.bind<float>();
  /* float const& pcnids */ all5.bind<float>();
  /* float const& prids */ all5.bind<float>();
  /* float const& etaids */ all5.bind<float>();
  /* float const& waids */ all5.bind<float>();
  /* float const& pricf */ all5.bind<float>();
  /* float const& etaicf */ all5.bind<float>();
  /* float const& waicf */ all5.bind<float>();
  /* float const& tfipds */ all5.bind<float>();
  /* float const& cnipds */ all5.bind<float>();
  /* float const& etipds */ all5.bind<float>();
  /* float const& tfipcf */ all5.bind<float>();
  /* float const& cnipcf */ all5.bind<float>();
  /* float const& etipcf */ all5.bind<float>();
  /* float const& dhipcf */ all5.bind<float>();
  /* float const& waicds */ all5.bind<float>();
  float& wai = all5.bind<float>();
  float& pcbli = all5.bind<float>();
  float& bli = all5.bind<float>();
  /* float const& t22ds */ all5.bind<float>();
  float& wa21 = all5.bind<float>();
  /* float const& wg50 */ all5.bind<float>();
  /* float const& far50 */ all5.bind<float>();
  /* float const& a24 */ all5.bind<float>();
  /* float const& ar23 */ all5.bind<float>();
  bool const& dumspl = all5.bind<bool>();
  /* bool const& fxfn2m */ all5.bind<bool>();
  /* float const& fxm2cp */ all5.bind<float>();
  /* float const& aftfan */ all5.bind<float>();
  /* float const& punt */ all5.bind<float>();
  float const& pcblid = all5.bind<float>();
  /* float const& p6dsav */ all5.bind<float>();
  /* float const& am6dsv */ all5.bind<float>();
  /* float const& etaasv */ all5.bind<float>();
  /* float const& far7sv */ all5.bind<float>();
  /* float const& t4pbl */ all5.bind<float>();
  /* float const& t41 */ all5.bind<float>();
  bool const& fan = all5.bind<bool>();
  int const& ispool = all5.bind<int>();
  /* float const& vfan */ vols.bind<float>();
  /* float const& vintc */ vols.bind<float>();
  float const& vcomp = vols.bind<float>();
  /* float const& vccomb */ vols.bind<float>();
  /* float const& vhptrb */ vols.bind<float>();
  /* float const& viptrb */ vols.bind<float>();
  /* float const& vlptrb */ vols.bind<float>();
  /* float const& vaftbn */ vols.bind<float>();
  /* float const& vfduct */ vols.bind<float>();
  /* float const& vwduct */ vols.bind<float>();
  /* float const& wafp */ flows.bind<float>();
  /* float const& waip */ flows.bind<float>();
  float& wacp = flows.bind<float>();
  bool const& si = units.bind<bool>();
  if (is_called_first_time) {
    aword = "COCOMB";
  }
  float tstd = fem::float0;
  float pstd = fem::float0;
  float ra = fem::float0;
  float aj = fem::float0;
  float theta = fem::float0;
  float delta = fem::float0;
  int i = fem::int0;
  float thetad = fem::float0;
  bool fxmzcp = fem::bool0;
  float tsto = fem::float0;
  float spdmid = fem::float0;
  float pcncs = fem::float0;
  float cncs = fem::float0;
  int igo = fem::int0;
  arr_1d<2, float> wlh(fem::fill0);
  float prccfs = fem::float0;
  float wai32 = fem::float0;
  float pcbid = fem::float0;
  arr_1d<9, float> q(fem::fill0);
  float h3p = fem::float0;
  float p3dot = fem::float0;
  float xx2 = fem::float0;
  float u3 = fem::float0;
  float u3dot = fem::float0;
  float h3x = fem::float0;
  float errw = fem::float0;
  float dir = fem::float0;
  float t3t = fem::float0;
  float pcllp = fem::float0;
  float bllip = fem::float0;
  //C
  //C        Uses BLOCK DATA to perform combustor calculations; may use either C     T4 or WFB as main parameter
  //C
  cmn.word = aword;
  //C
  if (si) {
    goto statement_100;
  }
  tstd = 516.668f;
  pstd = 1.0f;
  ra = 0.0252f;
  aj = 2.719f;
  goto statement_101;
  statement_100:
  tstd = 1228.149f;
  pstd = 101325.0f;
  ra = 286.9f;
  aj = 1.0f;
  statement_101:
  theta = fem::sqrt(t21 / tstd);
  delta = p21 / pstd;
  if (ides != i) {
    goto statement_1;
  }
  thetad = theta;
  wacds = wac;
  wacc = wac * theta / delta;
  if (!fxmzcp) {
    pcnc = pcncds;
  }
  statement_1:
  if (!fxmzcp) {
    goto statement_2;
  }
  //C
  //C        SPEEOS OF MIDDLE AND INNER SPOOL ARE THE SAME
  //C
  spdmid = cni * fem::sqrt(cmn.t22 / tsto);
  cnc = spdmid / theta;
  pcnc = 100.f * cnc * theta / thetad;
  if (ides == 1) {
    pcncds = pcnc;
  }
  statement_2:
  cnc = pcncs * thetad / (100.f * theta);
  if (zc < 0.f) {
    zc = 0.f;
  }
  if (zc > 1.f) {
    zc = 1.f;
  }
  cncs = cnc;
  if (ispool == 1) {
    goto statement_12;
  }
  search(zc, cnc, prc, wacc, etac, cnx(1), ncn, prx(1, 1), wacx(1,
    1), etax(1, 1), npt(1), 15, 15, igo);
  goto statement_13;
  statement_12:
  prc = 1.f;
  etac = 1.f;
  wac = wa21;
  wacc = wac * theta / delta;
  cnc = 1.f;
  prccf = 1.f;
  statement_13:
  if (mode == 1) {
    goto statement_4;
  }
  if ((cnc - cncs) > 0.0005f * cnc) {
    cmn.mapedg = 1;
  }
  statement_4:
  if (igo == 1 || igo == 2) {
    write(8, "('* * * CNC OFF MAP  ',f10.4,2x,a6,'* * * $$$$$$$')"),
      cncs, wlh(igo);
  }
  wac = wacc * delta / theta;
  if (ides != 1) {
    goto statement_5;
  }
  t21ds = t21;
  if (ispool >= 2) {
    prccf = (cmn.prcds - 1.f) / (prc - 1.f);
  }
  etaccf = cmn.etacds / etac;
  if (ispool == 1) {
    etaccf = 1.0f;
  }
  waccf = wacds / wac;
  write(6,
    "('COMPRESSOR DESIGN ',6x,' PRCCF= ',e15.8,'ETACCF= ',e15.8,'  WACCF=',"
    "e15.8,'  T21DS=',e15.8)"),
    prccf, etaccf, waccf, t21ds;
  statement_5:
  prc = prccfs * (prc - 1.f) + 1.f;
  etac = etaccf * wac;
  wac = waccf * wac;
  wacp = wac;
  if (!dumspl || pcblid != 0.f || !fan) {
    goto statement_6;
  }
  wa22 = wac;
  wai = wa22;
  waci = wa22 * waccf;
  statement_6:
  cmn.wa32 = wai - wai;
  bli = wai32;
  wa21 = wac;
  wacc = wacc * waccf;
  pcbli = bli / wai;
  wducti(cmn);
  if (pcbid == 0.f) {
    err(7) = (wac - wai) / wac;
  }
  if (!fan) {
    err(5) = (cmn.waf - wac - cmn.blf) / wac;
  }
  if (ides == 1 && pcblid == 0) {
    err(7) = 1.e-4f;
  }
  thcomp(cmn, prc, etac, t21, cmn.h21, cmn.s21, p21, t3, h3, s3, p3);
  if (vcomp == 0.0f) {
    goto statement_21;
  }
  q(2) = 0.0f;
  q(3) = 0.0f;
  h3p = h3;
  p3dot = deriv(cmn, 8, p3);
  statement_18:
  thermo(cmn, p3, h3, t3, s3, xx2, 0.0f, 0.0f);
  wac = wacp - p3dot * vcomp / t3 / 1.4f / ra;
  u3 = h3 - aj * ra * t3;
  u3dot = deriv(cmn, 9, u3);
  h3x = (wacp * h3p - (wacp - wac) * u3 - u3dot * p3 * vcomp / t3 / ra) / wac;
  errw = (h3 - h3x) / h3;
  dir = fem::sqrt(fem::abs(h3 / h3x));
  afquir(q(1), t3, errw, 0.f, 20.f, 0.0001f, dir, t3t, igo);
  switch (igo) {
    case 1: goto statement_19;
    case 2: goto statement_21;
    case 3: goto statement_20;
    default: break;
  }
  statement_19:
  t3 = t3t;
  goto statement_18;
  statement_20:
  error(cmn);
  statement_21:
  if (pcblc > 0.f) {
    blc = pcblc * wac;
  }
  cmn.wa3 = wac - blc;
  cmn.bldu = cmn.pcbldu * blc;
  cmn.blob = cmn.pcblob * blc;
  cmn.blhp = pcblip * blc;
  bllip = pcllp * blc;
  if (mode != 1) {
    goto statement_7;
  }
  if (fem::abs(cnc - cncs) <= 0.001f * cncs) {
    goto statement_8;
  }
  write(8,
    "('CNC WAS=  ',e15.8,' AND NOW=  ',e15.8,' CHECK PCNC INPUT$$$$$$$')"),
    cncs, cnc;
  error(cmn);
  statement_7:
  pcnc = 100.f * theta * cnc / thetad;
  statement_8:
  cocomp(cmn);
  //C
}

struct cocomp_save
{
  fem::variant_bindings all5_bindings;
  fem::variant_bindings flows_bindings;
  fem::variant_bindings units_bindings;
  fem::variant_bindings vols_bindings;
  char aword[10];
  arr<float> wlh;

  cocomp_save() :
    aword(""),
    wlh(dimension(2), fem::fill0)
  {}
};

void
cocomp(
  common& cmn)
{
  FEM_CMN_SVE(cocomp);
  common_write write(cmn);
  int& ides = cmn.ides;
  arr_ref<float> err(cmn.err, dimension(9));
  float& pcncds = cmn.pcncds;
  float& wacds = cmn.wacds;
  float& prccf = cmn.prccf;
  float& etaccf = cmn.etaccf;
  float& waccf = cmn.waccf;
  float& t21 = cmn.t21;
  float& p21 = cmn.p21;
  float& t3 = cmn.t3;
  float& p3 = cmn.p3;
  float& h3 = cmn.h3;
  float& s3 = cmn.s3;
  float& blc = cmn.blc;
  float& cnc = cmn.cnc;
  float& prc = cmn.prc;
  float& etac = cmn.etac;
  float& wacc = cmn.wacc;
  float& wac = cmn.wac;
  float& zc = cmn.zc;
  float& pcnc = cmn.pcnc;
  float& pcblc = cmn.pcblc;
  float& wa32 = cmn.wa32;
  arr_cref<float> cnx(static_cast<common_comp&>(cmn).cnx, dimension(15));
  arr_cref<float, 2> prx(static_cast<common_comp&>(cmn).prx, dimension(15, 15));
  arr_cref<float, 2> wacx(static_cast<common_comp&>(cmn).wacx,
    dimension(15, 15));
  arr_cref<float, 2> etax(static_cast<common_comp&>(cmn).etax,
    dimension(15, 15));
  int& ncn = static_cast<common_comp&>(cmn).ncn;
  arr_cref<int> npt(static_cast<common_comp&>(cmn).npt, dimension(15));
  //
  common_variant all5(cmn.common_all5, sve.all5_bindings);
  common_variant vols(cmn.common_vols, sve.vols_bindings);
  common_variant flows(cmn.common_flows, sve.flows_bindings);
  common_variant units(cmn.common_units, sve.units_bindings);
  char* aword= sve.aword;;
  arr_ref<float> wlh(sve.wlh, dimension(2));
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> s50;
      mbr<float> wa22;
      mbr<float> zi;
      mbr<float> pcni;
      mbr<float> cni;
      mbr<float> pri;
      mbr<float> etai;
      mbr<float> waci;
      mbr<float> tffip;
      mbr<float> cnip;
      mbr<float> etatip;
      mbr<float> dhtcip;
      mbr<float> dhti;
      mbr<float> blip;
      mbr<float> pcblip;
      mbr<float> pcnigu;
      mbr<float> zids;
      mbr<float> pcnids;
      mbr<float> prids;
      mbr<float> etaids;
      mbr<float> waids;
      mbr<float> pricf;
      mbr<float> etaicf;
      mbr<float> waicf;
      mbr<float> tfipds;
      mbr<float> cnipds;
      mbr<float> etipds;
      mbr<float> tfipcf;
      mbr<float> cnipcf;
      mbr<float> etipcf;
      mbr<float> dhipcf;
      mbr<float> waicds;
      mbr<float> wai;
      mbr<float> pcbli;
      mbr<float> bli;
      mbr<float> t22ds;
      mbr<float> wa21;
      mbr<float> wg50;
      mbr<float> far50;
      mbr<float> a24;
      mbr<float> ar23;
      mbr<bool> dumspl;
      mbr<float> fxfn2m;
      mbr<float> fxm2cp;
      mbr<float> aftfan;
      mbr<float> punt;
      mbr<float> pcblid;
      mbr<float> p6dsav;
      mbr<float> am6dsv;
      mbr<float> etaasv;
      mbr<float> far7sv;
      mbr<float> t4pbl;
      mbr<float> t41;
      mbr<bool> fan;
      mbr<int> ispool;
      all5.allocate(), s50, wa22, zi, pcni, cni, pri, etai, waci,
        tffip, cnip, etatip, dhtcip, dhti, blip, pcblip, pcnigu,
        zids, pcnids, prids, etaids, waids, pricf, etaicf, waicf,
        tfipds, cnipds, etipds, tfipcf, cnipcf, etipcf, dhipcf,
        waicds, wai, pcbli, bli, t22ds, wa21, wg50, far50, a24, ar23,
        dumspl, fxfn2m, fxm2cp, aftfan, punt, pcblid, p6dsav, am6dsv,
        etaasv, far7sv, t4pbl, t41, fan, ispool;
    }
    {
      mbr<float> vfan;
      mbr<float> vintc;
      mbr<float> vcomp;
      mbr<float> vcomb;
      mbr<float> vhptrb;
      mbr<float> viptrbi;
      mbr<float> vlptrb;
      mbr<float> vaftbn;
      mbr<float> vfduct;
      mbr<float> vwduct;
      vols.allocate(), vfan, vintc, vcomp, vcomb, vhptrb, viptrbi,
        vlptrb, vaftbn, vfduct, vwduct;
    }
    {
      mbr<int> mafp;
      mbr<int> maip;
      mbr<int> macp;
      flows.allocate(), mafp, maip, macp;
    }
    {
      mbr<bool> si;
      units.allocate(), si;
    }
  }
  /* float const& s50 */ all5.bind<float>();
  float const& wa22 = all5.bind<float>();
  /* float const& zi */ all5.bind<float>();
  /* float const& pcni */ all5.bind<float>();
  float const& cni = all5.bind<float>();
  /* float const& pri */ all5.bind<float>();
  /* float const& etai */ all5.bind<float>();
  /* float const& waci */ all5.bind<float>();
  /* float const& tffip */ all5.bind<float>();
  /* float const& cnip */ all5.bind<float>();
  /* float const& etatip */ all5.bind<float>();
  /* float const& dhtcip */ all5.bind<float>();
  /* float const& dhti */ all5.bind<float>();
  /* float const& blip */ all5.bind<float>();
  float const& pcblip = all5.bind<float>();
  /* float const& pcnigu */ all5.bind<float>();
  /* float const& zids */ all5.bind<float>();
  /* float const& pcnids */ all5.bind<float>();
  /* float const& prids */ all5.bind<float>();
  /* float const& etaids */ all5.bind<float>();
  /* float const& waids */ all5.bind<float>();
  /* float const& pricf */ all5.bind<float>();
  /* float const& etaicf */ all5.bind<float>();
  /* float const& waicf */ all5.bind<float>();
  /* float const& tfipds */ all5.bind<float>();
  /* float const& cnipds */ all5.bind<float>();
  /* float const& etipds */ all5.bind<float>();
  /* float const& tfipcf */ all5.bind<float>();
  /* float const& cnipcf */ all5.bind<float>();
  /* float const& etipcf */ all5.bind<float>();
  /* float const& dhipcf */ all5.bind<float>();
  /* float const& waicds */ all5.bind<float>();
  float& wai = all5.bind<float>();
  /* float const& pcbli */ all5.bind<float>();
  float& bli = all5.bind<float>();
  /* float const& t22ds */ all5.bind<float>();
  float& wa21 = all5.bind<float>();
  /* float const& wg50 */ all5.bind<float>();
  /* float const& far50 */ all5.bind<float>();
  /* float const& a24 */ all5.bind<float>();
  /* float const& ar23 */ all5.bind<float>();
  bool const& dumspl = all5.bind<bool>();
  /* float const& fxfn2m */ all5.bind<float>();
  /* float const& fxm2cp */ all5.bind<float>();
  /* float const& aftfan */ all5.bind<float>();
  /* float const& punt */ all5.bind<float>();
  float const& pcblid = all5.bind<float>();
  /* float const& p6dsav */ all5.bind<float>();
  /* float const& am6dsv */ all5.bind<float>();
  /* float const& etaasv */ all5.bind<float>();
  /* float const& far7sv */ all5.bind<float>();
  /* float const& t4pbl */ all5.bind<float>();
  /* float const& t41 */ all5.bind<float>();
  bool const& fan = all5.bind<bool>();
  int const& ispool = all5.bind<int>();
  /* float const& vfan */ vols.bind<float>();
  /* float const& vintc */ vols.bind<float>();
  float const& vcomp = vols.bind<float>();
  /* float const& vcomb */ vols.bind<float>();
  /* float const& vhptrb */ vols.bind<float>();
  /* float const& viptrbi */ vols.bind<float>();
  /* float const& vlptrb */ vols.bind<float>();
  /* float const& vaftbn */ vols.bind<float>();
  /* float const& vfduct */ vols.bind<float>();
  /* float const& vwduct */ vols.bind<float>();
  /* int const& mafp */ flows.bind<int>();
  /* int const& maip */ flows.bind<int>();
  /* int const& macp */ flows.bind<int>();
  bool const& si = units.bind<bool>();
  if (is_called_first_time) {
    {
      static const char* values[] = {
        "COCQMP", "  (LO)", "   (H)"
      };
      fem::data_of_type_str(FEM_VALUES_AND_SIZE),
        aword, wlh;
    }
  }
  float tstd = fem::float0;
  float psto = fem::float0;
  float ra = fem::float0;
  float aj = fem::float0;
  float tsto = fem::float0;
  float pstd = fem::float0;
  float theta = fem::float0;
  float delta = fem::float0;
  float thetad = fem::float0;
  int mac = fem::int0;
  bool fxn2cp = fem::bool0;
  float spdmid = fem::float0;
  float pcnic = fem::float0;
  float cncs = fem::float0;
  int igo = fem::int0;
  int nooe = fem::int0;
  float t2ids = fem::float0;
  float etacc = fem::float0;
  float wacp = fem::float0;
  float wa2 = fem::float0;
  float wiaci = fem::float0;
  float waccp = fem::float0;
  float pcbi = fem::float0;
  float pcbiid = fem::float0;
  arr_1d<9, float> q(fem::fill0);
  float h3p = fem::float0;
  float p3dot = fem::float0;
  float xx2 = fem::float0;
  float pdot = fem::float0;
  float u3 = fem::float0;
  float u3dot = fem::float0;
  float h3x = fem::float0;
  float errw = fem::float0;
  float dir = fem::float0;
  float t3t = fem::float0;
  float hac = fem::float0;
  float belip = fem::float0;
  //C
  //C        Uses Blockdata to perform inner-compressor calculations
  //C
  aword = cmn.word;
  //C
  if (si) {
    goto statement_100;
  }
  tstd = 516.668f;
  psto = 1.0f;
  ra = 0.0252f;
  aj = 2.719f;
  goto statement_101;
  //C
  statement_100:
  tsto = 288.149f;
  pstd = 101325.f;
  ra = 286.9f;
  aj = 1.0f;
  //C
  statement_101:
  theta = fem::sqrt(t21 / tstd);
  delta = p21 / pstd;
  if (ides != 1) {
    goto statement_1;
  }
  thetad = theta;
  wacds = wac;
  wacc = mac * theta / delta;
  if (!fxn2cp) {
    pcnc = pcncds;
  }
  statement_1:
  if (!fxn2cp) {
    goto statement_2;
  }
  //C        SPEEDS OF MIDLE AND INNER SPOOL ARE THE SAME
  //C
  spdmid = cni * fem::sqrt(cmn.t22 / tstd);
  cnc = spdmid / theta;
  pcnic = 100.f * cnc * theta / thetad;
  if (ides == 1) {
    pcncds = pcnc;
  }
  statement_2:
  cnc = pcnc * thetad / (100.f * theta);
  if (zc < 0) {
    zc = 0.f;
  }
  if (zc > 1) {
    zc = 1.f;
  }
  cncs = cnc;
  if (ispool == 1) {
    goto statement_12;
  }
  search(zc, cnc, prc, wacc, etac, cnx(1), ncn, prx(1, 1), wacx(1,
    1), etax(1, 1), npt(1), 15, 15, igo);
  goto statement_13;
  statement_12:
  prc = 1.f;
  etac = 1.f;
  wac = wa21;
  wacc = wac * theta / delta;
  cnc = 1.f;
  prccf = 1.f;
  statement_13:
  if (nooe == 1) {
    goto statement_4;
  }
  if ((cnc - cncs) > 0.0005f * cnc) {
    cmn.mapedg = 1;
  }
  statement_4:
  if (igo == 1 || igo == 2) {
    write(8, "('* * *  CNC OFF MAP ',f10.4,2x,a6,'      $$$$$')"),
      cncs, wlh(igo);
  }
  mac = wacc * delta / theta;
  if (ides != 1) {
    goto statement_5;
  }
  cmn.t21ds = t21;
  if (ispool >= 2) {
    prccf = (cmn.prcds - 1.f) / (prc - 1.f);
  }
  etaccf = cmn.etacds / etac;
  if (ispool == 1) {
    etaccf = 1.0f;
  }
  waccf = wacds / wac;
  write(6,
    "('COMFESSOR DESIGN  ',6x,'PRCCF=  ',e15.8,'ETACCF= ',e15.8,' WACC=  ',"
    "e15.8,'  T21DS ',e15.8)"),
    prccf, etaccf, waccf, t2ids;
  statement_5:
  prc = prccf * (prc - 1.f) * 1.f;
  etac = etacc * etac;
  wac = waccf * wac;
  wacp = wac;
  if (!dumspl || pcblid != 0 || !fan) {
    goto statement_6;
  }
  wa2 = wac;
  wai = wa22;
  wiaci = wacc * waccf;
  statement_6:
  wa32 = wai - wac;
  bli = wa32;
  wa21 = wac;
  wacc = wacc * waccp;
  pcbi = bli / wai;
  wducti(cmn);
  if (pcbiid == 0.f) {
    err(7) = (wac - wai) / wac;
  }
  if (!fan) {
    err(5) = (cmn.waf - wac - cmn.blf) / wac;
  }
  if (ides == 1 && pcblid == 0.f) {
    err(7) = 1.e-6f;
  }
  thcomp(cmn, prc, etac, t21, cmn.h21, cmn.s21, p21, t3, h3, s3, p3);
  if (vcomp == 0.0f) {
    goto statement_21;
  }
  q(2) = 0.0f;
  q(3) = 0.0f;
  h3p = h3;
  p3dot = deriv(cmn, 8, p3);
  statement_18:
  thermo(cmn, p3, h3, t3, s3, xx2, 0.0f, 0.0f, 0);
  wac = wacp - pdot * vcomp / t3 / 1.4f / ra;
  u3 = h3 - aj * ra * t3;
  u3dot = deriv(cmn, 9, u3);
  h3x = (wacp * h3p - (wacp - wac) * u3 - u3dot * p3 * vcomp / t3 / ra) / wac;
  errw = (h3 - h3x) / h3;
  dir = fem::sqrt(fem::abs(h3 / h3x));
  afquir(q(1), t3, errw, 0.f, 20, 0.0001f, dir, t3t, igo);
  switch (igo) {
    case 1: goto statement_19;
    case 2: goto statement_21;
    case 3: goto statement_20;
    default: break;
  }
  statement_19:
  t3 = t3t;
  goto statement_18;
  statement_20:
  error(cmn);
  statement_21:
  if (pcblc > 0.f) {
    blc = pcblc * wac;
  }
  cmn.wa3 = hac - blc;
  cmn.bldu = cmn.pcbldu * blc;
  cmn.blob = cmn.pcblob * blc;
  cmn.blhp = cmn.pcblhp * blc;
  belip = pcblip * blc;
  cmn.bllp = cmn.pcbllp * blc;
  if (cmn.mode != 1) {
    goto statement_7;
  }
  if (fem::abs(cnc - cncs) <= 0.001f * cncs) {
    goto statement_8;
  }
  write(8,
    "('CNC   WAS=',e15.8,' AND NOW=  ',e15.8,' CHECK PCNC INPUT$$$$$$$')"),
    cncs, cnc;
  error(cmn);
  statement_7:
  pcnc = 100.f * theta * cnc / thetad;
  statement_8:
  cocomb(cmn);
  //C
}

struct indumy_save
{
  arr<float> wacar;
  arr<float> xcnxx;

  indumy_save() :
    wacar(dimension(15), fem::fill0),
    xcnxx(dimension(15), fem::fill0)
  {}
};

void
indumy(
  common& cmn,
  float const& cni,
  float& zi,
  float const& waci,
  int const& ides)
{
  FEM_CMN_SVE(indumy);
  arr_ref<float> cnxx(cmn.cnxx, dimension(15));
  arr_ref<float, 2> prxx(cmn.prxx, dimension(15, 15));
  arr_ref<float, 2> wacxx(cmn.wacxx, dimension(15, 15));
  arr_ref<float, 2> etaxx(cmn.etaxx, dimension(15, 15));
  arr_ref<int> nptx(cmn.nptx, dimension(15));
  //
  arr_ref<float> wacar(sve.wacar, dimension(15));
  arr_ref<float> xcnxx(sve.xcnxx, dimension(15));
  if (is_called_first_time) {
    {
      static const float values[] = {
        0.001f, 0.1f, 0.2f, 0.3f, 0.5f, 0.8f, 1.0f, 1.5f, 2.0f, 3.0f,
          4.0f, 5.0f, 6.0f, 7.0f, 9.0f
      };
      fem::data_of_type<float>(FEM_VALUES_AND_SIZE),
        xcnxx;
    }
    {
      static const float values[] = {
        5.0f, 4.5f, 4.0f, 3.5f, 3.0f, 2.5f, 2.0f, 1.5f, 1.0f, 0.8f,
          0.6f, 0.4f, 0.25f, 0.1f, 0.05f
      };
      fem::data_of_type<float>(FEM_VALUES_AND_SIZE),
        wacar;
    }
  }
  float waids = fem::float0;
  float cnids = fem::float0;
  int i = fem::int0;
  int j = fem::int0;
  //C
  //C        Makes intermediate compressor not change air conditions
  //C        for engine configurations e and h
  //C
  if (ides != 1) {
    goto statement_1;
  }
  waids = waci;
  cnids = cni;
  zi = 2.f / 3.5f;
  statement_1:
  cmn.ncnx = 15;
  //C
  FEM_DO_SAFE(i, 1, 15) {
    nptx(i) = 15;
    cnxx(i) = cnxx(i) * cnids;
    //C
    FEM_DO_SAFE(j, 1, 15) {
      prxx(i, j) = fem::ffloat(j + 3) / 4.f;
      etaxx(i, j) = 1.f;
      wacxx(j, i) = wacar(i) * (0.993f * 0.001f * fem::ffloat(j)) * waids;
    }
  }
}

struct cointc_save
{
  fem::variant_bindings all5_bindings;
  fem::variant_bindings flows_bindings;
  fem::variant_bindings units_bindings;
  fem::variant_bindings vols_bindings;
  char aword[10];
  char wlh[10];

  cointc_save() :
    aword(""),
    wlh("")
  {}
};

void
cointc(
  common& cmn)
{
  FEM_CMN_SVE(cointc);
  common_write write(cmn);
  int& ides = cmn.ides;
  float& t2 = cmn.t2;
  float& t21 = cmn.t21;
  float& p21 = cmn.p21;
  float& h21 = cmn.h21;
  float& s21 = cmn.s21;
  float& t22 = cmn.t22;
  float& p22 = cmn.p22;
  float& h22 = cmn.h22;
  float& s22 = cmn.s22;
  arr_cref<float> cnx(static_cast<common_int&>(cmn).cnx, dimension(15));
  arr_cref<float, 2> prx(static_cast<common_int&>(cmn).prx, dimension(15, 15));
  arr_cref<float, 2> wacx(static_cast<common_int&>(cmn).wacx,
    dimension(15, 15));
  arr_cref<float, 2> etax(static_cast<common_int&>(cmn).etax,
    dimension(15, 15));
  int& ncn = static_cast<common_int&>(cmn).ncn;
  arr_cref<int> npt(static_cast<common_int&>(cmn).npt, dimension(15));
  arr_cref<float> cnxx(cmn.cnxx, dimension(15));
  arr_cref<float, 2> prxx(cmn.prxx, dimension(15, 15));
  arr_cref<float, 2> wacxx(cmn.wacxx, dimension(15, 15));
  arr_cref<float, 2> etaxx(cmn.etaxx, dimension(15, 15));
  arr_cref<int> nptx(cmn.nptx, dimension(15));
  //
  common_variant all5(cmn.common_all5, sve.all5_bindings);
  common_variant vols(cmn.common_vols, sve.vols_bindings);
  common_variant flows(cmn.common_flows, sve.flows_bindings);
  common_variant units(cmn.common_units, sve.units_bindings);
  arr_ref<char> wlh(sve.wlh, dimension(2));
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> s50;
      mbr<float> wa22;
      mbr<float> zi;
      mbr<float> pcni;
      mbr<float> cni;
      mbr<float> pri;
      mbr<float> etai;
      mbr<float> waci;
      mbr<float> tffip;
      mbr<float> cnip;
      mbr<float> etatip;
      mbr<float> dhtcip;
      mbr<float> dhti;
      mbr<float> blip;
      mbr<float> pcblip;
      mbr<float> pcnigu;
      mbr<float> zids;
      mbr<float> pcnids;
      mbr<float> prids;
      mbr<float> etaids;
      mbr<float> waids;
      mbr<float> pricf;
      mbr<float> etaicf;
      mbr<float> waicf;
      mbr<float> tfipds;
      mbr<float> cnipds;
      mbr<float> etipds;
      mbr<float> tfipcf;
      mbr<float> cnipcf;
      mbr<float> etipcf;
      mbr<float> dhipcf;
      mbr<float> waicds;
      mbr<float> wai;
      mbr<float> pcbli;
      mbr<float> bli;
      mbr<float> t22ds;
      mbr<float> wa21;
      mbr<float> wg50;
      mbr<float> far50;
      mbr<float> a24;
      mbr<float> ar23;
      mbr<bool> dumspl;
      mbr<bool> fxfn2m;
      mbr<float> fxm2cp;
      mbr<bool> aftfan;
      mbr<float> punt;
      mbr<float> pcblid;
      mbr<float> p6dsav;
      mbr<float> am6dsv;
      mbr<float> etaasv;
      mbr<float> far7sv;
      mbr<float> t4pbl;
      mbr<float> t41;
      mbr<bool> fan;
      mbr<int> ispool;
      all5.allocate(), s50, wa22, zi, pcni, cni, pri, etai, waci,
        tffip, cnip, etatip, dhtcip, dhti, blip, pcblip, pcnigu,
        zids, pcnids, prids, etaids, waids, pricf, etaicf, waicf,
        tfipds, cnipds, etipds, tfipcf, cnipcf, etipcf, dhipcf,
        waicds, wai, pcbli, bli, t22ds, wa21, wg50, far50, a24, ar23,
        dumspl, fxfn2m, fxm2cp, aftfan, punt, pcblid, p6dsav, am6dsv,
        etaasv, far7sv, t4pbl, t41, fan, ispool;
    }
    {
      mbr<float> vfan;
      mbr<float> vintc;
      mbr<float> vcomp;
      mbr<float> vcomb;
      mbr<float> vhptrb;
      mbr<float> viptrb;
      mbr<float> vlptrb;
      mbr<float> vaftbn;
      mbr<float> vfduct;
      mbr<float> vwduct;
      vols.allocate(), vfan, vintc, vcomp, vcomb, vhptrb, viptrb,
        vlptrb, vaftbn, vfduct, vwduct;
    }
    {
      mbr<float> wafp;
      mbr<float> waip;
      mbr<float> wacp;
      flows.allocate(), wafp, waip, wacp;
    }
    {
      mbr<bool> si;
      units.allocate(), si;
    }
  }
  /* float const& s50 */ all5.bind<float>();
  float& wa22 = all5.bind<float>();
  float& zi = all5.bind<float>();
  float& pcni = all5.bind<float>();
  float& cni = all5.bind<float>();
  float& pri = all5.bind<float>();
  float& etai = all5.bind<float>();
  float& waci = all5.bind<float>();
  /* float const& tffip */ all5.bind<float>();
  /* float const& cnip */ all5.bind<float>();
  /* float const& etatip */ all5.bind<float>();
  /* float const& dhtcip */ all5.bind<float>();
  /* float const& dhti */ all5.bind<float>();
  /* float const& blip */ all5.bind<float>();
  /* float const& pcblip */ all5.bind<float>();
  /* float const& pcnigu */ all5.bind<float>();
  /* float const& zids */ all5.bind<float>();
  float& pcnids = all5.bind<float>();
  float const& prids = all5.bind<float>();
  float const& etaids = all5.bind<float>();
  float& waids = all5.bind<float>();
  float& pricf = all5.bind<float>();
  float& etaicf = all5.bind<float>();
  float& waicf = all5.bind<float>();
  /* float const& tfipds */ all5.bind<float>();
  /* float const& cnipds */ all5.bind<float>();
  /* float const& etipds */ all5.bind<float>();
  /* float const& tfipcf */ all5.bind<float>();
  /* float const& cnipcf */ all5.bind<float>();
  /* float const& etipcf */ all5.bind<float>();
  /* float const& dhipcf */ all5.bind<float>();
  float& waicds = all5.bind<float>();
  float& wai = all5.bind<float>();
  float& pcbli = all5.bind<float>();
  float& bli = all5.bind<float>();
  float& t22ds = all5.bind<float>();
  float& wa21 = all5.bind<float>();
  /* float const& wg50 */ all5.bind<float>();
  /* float const& far50 */ all5.bind<float>();
  /* float const& a24 */ all5.bind<float>();
  /* float const& ar23 */ all5.bind<float>();
  bool& dumspl = all5.bind<bool>();
  bool const& fxfn2m = all5.bind<bool>();
  /* float const& fxm2cp */ all5.bind<float>();
  bool const& aftfan = all5.bind<bool>();
  /* float const& punt */ all5.bind<float>();
  /* float const& pcblid */ all5.bind<float>();
  /* float const& p6dsav */ all5.bind<float>();
  /* float const& am6dsv */ all5.bind<float>();
  /* float const& etaasv */ all5.bind<float>();
  /* float const& far7sv */ all5.bind<float>();
  /* float const& t4pbl */ all5.bind<float>();
  /* float const& t41 */ all5.bind<float>();
  bool const& fan = all5.bind<bool>();
  int const& ispool = all5.bind<int>();
  /* float const& vfan */ vols.bind<float>();
  float const& vintc = vols.bind<float>();
  /* float const& vcomp */ vols.bind<float>();
  /* float const& vcomb */ vols.bind<float>();
  /* float const& vhptrb */ vols.bind<float>();
  /* float const& viptrb */ vols.bind<float>();
  /* float const& vlptrb */ vols.bind<float>();
  /* float const& vaftbn */ vols.bind<float>();
  /* float const& vfduct */ vols.bind<float>();
  /* float const& vwduct */ vols.bind<float>();
  /* float const& wafp */ flows.bind<float>();
  float& waip = flows.bind<float>();
  /* float const& wacp */ flows.bind<float>();
  bool const& si = units.bind<bool>();
  if (is_called_first_time) {
    {
      static const char* values[] = {
        "COINTC", "  (LO)", "  (HI)"
      };
      fem::data_of_type_str(FEM_VALUES_AND_SIZE),
        sve.aword, sve.wlh;
    }
  }
  char* aword= sve.aword;
//  char* wlh= sve.wlh;
  float tstd = fem::float0;
  float pstd = fem::float0;
  float pa = fem::float0;
  float aj = fem::float0;
  float ra = fem::float0;
  float t22s = fem::float0;
  float h22s = fem::float0;
  float s22s = fem::float0;
  float p22s = fem::float0;
  float theta = fem::float0;
  float delta = fem::float0;
  int maf = fem::int0;
  int mai = fem::int0;
  float pcbl = fem::float0;
  float thetad = fem::float0;
  float spdfan = fem::float0;
  float cnis = fem::float0;
  int igo = fem::int0;
  float wace = fem::float0;
  int maci = fem::int0;
  arr_1d<9, float> q(fem::fill0);
  float h21p = fem::float0;
  float p21dot = fem::float0;
  float xx2 = fem::float0;
  float u21 = fem::float0;
  float u21dot = fem::float0;
  float h21x = fem::float0;
  float errw = fem::float0;
  float dir = fem::float0;
  float t21t = fem::float0;
  float wazi = fem::float0;
  float s225 = fem::float0;
  float p225 = fem::float0;
  //C
//  cmn.word = aword;
  strcpy(cmn.word,aword);
  if (si) {
    goto statement_100;
  }
  tstd = 518.668f;
  pstd = 1.0f;
  pa = 0.0252f;
  aj = 2.719f;
  goto statement_101;
  statement_100:
  tstd = 288.149f;
  pstd = 101325.0f;
  ra = 286.9f;
  aj = 1.0f;
  statement_101:
  //C
  if (!aftfan) {
    goto statement_1;
  }
  t22s = t22;
  h22s = h22;
  s22s = s22;
  p22s = p22;
  t22 = t2;
  h22 = cmn.h2;
  s22 = cmn.s2;
  p22 = cmn.p2;
  statement_1:
  theta = fem::sqrt(t22 / tstd);
  delta = p22 / pstd;
  if (!fan) {
    mai = maf - cmn.blf;
  }
  if (ides != 1) {
    goto statement_2;
  }
  pri = prids;
  pcbli = pcbl;
  if (!fan) {
    waicds = wai * theta / delta;
  }
  if (!fan) {
    dumspl = true;
  }
  waci = waicds;
  thetad = theta;
  waids = waci * delta / theta;
  etai = etaids;
  statement_2:
  if (!fxfn2m) {
    goto statement_3;
  }
  //C
  //C        FAN AND MIDDLE SPOOL ROTATE AT SAME SPEED
  //C
  spdfan = cmn.cnf * fem::sqrt(t2 / tstd);
  cni = spdfan / theta;
  pcni = 100 * cni * theta / thetad;
  if (ides == 1) {
    pcnids = pcni;
  }
  statement_3:
  cni = pcni * thetad / (100.0f * theta);
  zi = fem::amax1(zi, 0.f);
  zi = fem::amin1(zi, 1.f);
  cnis = cni;
  if (!dumspl) {
    goto statement_4;
  }
  indumy(cmn, cni, zi, waicds, ides);
  search(zi, cni, pri, waci, etai, cnxx, cmn.ncnx, prxx, wacxx,
    etaxx, nptx, 15, 15, igo);
  goto statement_5;
  statement_4:
  search(zi, cni, pri, wace, etai, cnx(1), ncn, prx(1, 1), wacx(1,
    1), etax(1, 1), npt(1), 15, 15, igo);
  statement_5:
  if ((cni - cnis) > 0.0005f * cni) {
    cmn.mapedg = 1;
  }
  if (igo == 1 || igo == 2) {
    write(8, "('0* * * CNI OFF  MAP',f10.4,2x,a6,'$$$$$$$$$')"), cnis, "";
  }
  if (!fan) {
    waci = wai * theta / delta;
  }
  wai = maci * delta / theta;
  wa22 = wai;
  if (ides != 1) {
    goto statement_7;
  }
  t22ds = t22;
  if (aftfan) {
    t22ds = t22s;
  }
  if (!dumspl) {
    pricf = (prids - 1.f) / (pri - 1.f);
  }
  etaicf = etaids / etai;
  waicf = waids / wai;
  if (!dumspl) {
    goto statement_6;
  }
  pricf = 1.f;
  etaicf = 1.f;
  waicf = 1.f;
  statement_6:
  write(6,
    "('/MIDDLE SPOOL DESIGN',6x,'   PRCF=',e15.8,' ETAICF=',e15.8,'  HAICF=',"
    "e15.8,'  T22DS=',e15.8)"),
    pricf, etaicf, waicf, t22ds;
  statement_7:
  pri = pricf * (pri - 1.f) + 1.f;
  etai = etaicf * etai;
  wai = waicf * wai;
  waip = wai;
  waci = waci * waicf;
  wa22 = wai;
  thcomp(cmn, pri, etai, t22, h22, s22, p22, t21, h21, s21, p21);
  if (vintc == 0.0f) {
    goto statement_21;
  }
  q(2) = 0.0f;
  q(3) = 0.0f;
  h21p = h21;
  p21dot = deriv(cmn, 6, p21);
  statement_18:
  thermo(cmn, p21, h21, t21, s21, xx2, 0, 0.0f, 0);
  wai = waip - p21dot * vintc / t21 / 1.4f / ra;
  u21 = h21 - aj * ra * t21;
  u21dot = deriv(cmn, 7, u21);
  h21x = (waip * h21p - (waip - wai) * u21 - u21dot * p21 * vintc /
    t21 / ra) / wai;
  errw = (h21 - h21x) / h21;
  dir = fem::sqrt(fem::abs(h21 / h21x));
  afquir(q(1), t21, errw, 0.f, 20.f, 0.0001f, dir, t21t, igo);
  switch (igo) {
    case 1: goto statement_19;
    case 2: goto statement_21;
    case 3: goto statement_20;
    default: break;
  }
  statement_19:
  t21 = t21t;
  goto statement_18;
  statement_20:
  error(cmn);
  statement_21:
  if (!dumspl) {
    goto statement_8;
  }
  pri = 1.f;
  etai = 1.f;
  t21 = t22;
  h21 = h22;
  s21 = s22;
  p21 = p22;
  if (ispool == 1) {
    wazi = wai;
  }
  statement_8:
  if (ides != 1) {
    goto statement_9;
  }
  bli = pcbli * wai;
  wa21 = wa22 - bli;
  cmn.wa32 = bli;
  if (fan || ides == 1) {
    cmn.wac = wa21;
  }
  statement_9:
  if (fem::abs(cni - cnis) <= 0.001f * cnis) {
    goto statement_10;
  }
  write(8,
    "('OCNI WAS= ',e18.8,'   AND NOW=',e15.8,'    CHECK PCNI INPUT$$$$',$,$)"),
    cnis, cni;
  error(cmn);
  pcni = 100 * theta * cni / thetad;
  statement_10:
  if (!aftfan) {
    goto statement_11;
  }
  t22 = t22s;
  h22 = h22s;
  s22 = s225;
  p22 = p225;
  statement_11:
  cocomp(cmn);
  //C
}

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

struct cofan_save
{
  fem::variant_bindings all5_bindings;
  fem::variant_bindings dyn_bindings;
  fem::variant_bindings flows_bindings;
  fem::variant_bindings units_bindings;
  fem::variant_bindings vols_bindings;
  char aword[10];
  arr<float> wlh;

  cofan_save() :
    aword(""),
    wlh(dimension(2), fem::fill0)
  {}
};

void
cofan(
  common& cmn)
{
  FEM_CMN_SVE(cofan);
  common_write write(cmn);
  int& ides = cmn.ides;
  int& jdes = cmn.jdes;
  int& mode = cmn.mode;
  int& init = cmn.init;
  float& pcnfds = cmn.pcnfds;
  float& wafds = cmn.wafds;
  float& prfcf = cmn.prfcf;
  float& etafcf = cmn.etafcf;
  float& wafcf = cmn.wafcf;
  float& pcncds = cmn.pcncds;
  float& t4ds = cmn.t4ds;
  float& wfbds = cmn.wfbds;
  float& t2 = cmn.t2;
  float& p2 = cmn.p2;
  float& t4 = cmn.t4;
  float& cnf = cmn.cnf;
  float& prf = cmn.prf;
  float& etaf = cmn.etaf;
  float& wafc = cmn.wafc;
  float& waf = cmn.waf;
  float& zf = cmn.zf;
  float& pcnf = cmn.pcnf;
  float& pcnc = cmn.pcnc;
  float& wfb = cmn.wfb;
  float& pcblf = cmn.pcblf;
  float& t22 = cmn.t22;
  float& p22 = cmn.p22;
  float& h22 = cmn.h22;
  float& s22 = cmn.s22;
  arr_cref<float> cnx(static_cast<common_fan&>(cmn).cnx, dimension(15));
  arr_cref<float, 2> prx(static_cast<common_fan&>(cmn).prx, dimension(15, 15));
  arr_cref<float, 2> wacx(static_cast<common_fan&>(cmn).wacx,
    dimension(15, 15));
  arr_cref<float, 2> etax(static_cast<common_fan&>(cmn).etax,
    dimension(15, 15));
  int& ncn = static_cast<common_fan&>(cmn).ncn;
  arr_cref<int> npt(static_cast<common_fan&>(cmn).npt, dimension(15));
  //
  common_variant all5(cmn.common_all5, sve.all5_bindings);
  common_variant dyn(cmn.common_dyn, sve.dyn_bindings);
  common_variant vols(cmn.common_vols, sve.vols_bindings);
  common_variant flows(cmn.common_flows, sve.flows_bindings);
  common_variant units(cmn.common_units, sve.units_bindings);
  char* aword= sve.aword;;
  arr_ref<float> wlh(sve.wlh, dimension(2));
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> s50;
      mbr<float> wa22;
      mbr<float> zi;
      mbr<float> pcni;
      mbr<float> cni;
      mbr<float> pri;
      mbr<float> etai;
      mbr<float> waci;
      mbr<float> tffip;
      mbr<float> cnip;
      mbr<float> etatip;
      mbr<float> dhtcip;
      mbr<float> dhti;
      mbr<float> blip;
      mbr<float> pcblip;
      mbr<float> pcnigu;
      mbr<float> zids;
      mbr<float> pcnids;
      mbr<float> prids;
      mbr<float> etaids;
      mbr<float> waids;
      mbr<float> pricf;
      mbr<float> etaicf;
      mbr<float> waicf;
      mbr<float> tfipds;
      mbr<float> cnipds;
      mbr<float> etipds;
      mbr<float> tfipcf;
      mbr<float> cnipcf;
      mbr<float> etipcf;
      mbr<float> dhipcf;
      mbr<float> waicds;
      mbr<float> wai;
      mbr<float> pcbli;
      mbr<float> bli;
      mbr<float> t22ds;
      mbr<float> wa21;
      mbr<float> wg50;
      mbr<float> far50;
      mbr<float> a24;
      mbr<float> ar23;
      mbr<float> dumspl;
      mbr<float> fxfn2m;
      mbr<bool> fxm2cp;
      mbr<float> aftfan;
      mbr<float> punt;
      mbr<float> pcblid;
      mbr<float> p6dsav;
      mbr<float> am6dsv;
      mbr<float> etaasv;
      mbr<float> far7sv;
      mbr<float> t4pbl;
      mbr<float> t41;
      mbr<float> fan;
      mbr<int> ispool;
      all5.allocate(), s50, wa22, zi, pcni, cni, pri, etai, waci,
        tffip, cnip, etatip, dhtcip, dhti, blip, pcblip, pcnigu,
        zids, pcnids, prids, etaids, waids, pricf, etaicf, waicf,
        tfipds, cnipds, etipds, tfipcf, cnipcf, etipcf, dhipcf,
        waicds, wai, pcbli, bli, t22ds, wa21, wg50, far50, a24, ar23,
        dumspl, fxfn2m, fxm2cp, aftfan, punt, pcblid, p6dsav, am6dsv,
        etaasv, far7sv, t4pbl, t41, fan, ispool;
    }
    {
      mbr<float> tran;
      mbr<float> time;
      mbr<float> dt;
      mbr<float> tf;
      mbr<int> jtran;
      mbr<int> nstep;
      mbr<float> tprint;
      mbr<float> dtprnt;
      dyn.allocate(), tran, time, dt, tf, jtran, nstep, tprint, dtprnt;
    }
    {
      mbr<float> vfan;
      mbr<float> vintc;
      mbr<float> vcomp;
      mbr<float> vcomb;
      mbr<float> vhptrb;
      mbr<float> viptrb;
      mbr<float> vlptrb;
      mbr<float> vaftbn;
      mbr<float> vfduct;
      mbr<float> vwduct;
      vols.allocate(), vfan, vintc, vcomp, vcomb, vhptrb, viptrb,
        vlptrb, vaftbn, vfduct, vwduct;
    }
    {
      mbr<float> wafp;
      mbr<float> waip;
      mbr<int> macp;
      flows.allocate(), wafp, waip, macp;
    }
    {
      mbr<bool> si;
      units.allocate(), si;
    }
  }
  /* float const& s50 */ all5.bind<float>();
  /* float const& wa22 */ all5.bind<float>();
  float& zi = all5.bind<float>();
  float& pcni = all5.bind<float>();
  /* float const& cni */ all5.bind<float>();
  /* float const& pri */ all5.bind<float>();
  /* float const& etai */ all5.bind<float>();
  /* float const& waci */ all5.bind<float>();
  /* float const& tffip */ all5.bind<float>();
  /* float const& cnip */ all5.bind<float>();
  /* float const& etatip */ all5.bind<float>();
  /* float const& dhtcip */ all5.bind<float>();
  /* float const& dhti */ all5.bind<float>();
  /* float const& blip */ all5.bind<float>();
  /* float const& pcblip */ all5.bind<float>();
  float& pcnigu = all5.bind<float>();
  float const& zids = all5.bind<float>();
  float const& pcnids = all5.bind<float>();
  /* float const& prids */ all5.bind<float>();
  /* float const& etaids */ all5.bind<float>();
  /* float const& waids */ all5.bind<float>();
  /* float const& pricf */ all5.bind<float>();
  /* float const& etaicf */ all5.bind<float>();
  /* float const& waicf */ all5.bind<float>();
  /* float const& tfipds */ all5.bind<float>();
  /* float const& cnipds */ all5.bind<float>();
  /* float const& etipds */ all5.bind<float>();
  /* float const& tfipcf */ all5.bind<float>();
  /* float const& cnipcf */ all5.bind<float>();
  /* float const& etipcf */ all5.bind<float>();
  /* float const& dhipcf */ all5.bind<float>();
  /* float const& waicds */ all5.bind<float>();
  /* float const& wai */ all5.bind<float>();
  /* float const& pcbli */ all5.bind<float>();
  /* float const& bli */ all5.bind<float>();
  float const& t22ds = all5.bind<float>();
  /* float const& wa21 */ all5.bind<float>();
  /* float const& wg50 */ all5.bind<float>();
  /* float const& far50 */ all5.bind<float>();
  /* float const& a24 */ all5.bind<float>();
  /* float const& ar23 */ all5.bind<float>();
  /* float const& dumspl */ all5.bind<float>();
  /* float const& fxfn2m */ all5.bind<float>();
  bool const& fxm2cp = all5.bind<bool>();
  /* float const& aftfan */ all5.bind<float>();
  /* float const& punt */ all5.bind<float>();
  /* float const& pcblid */ all5.bind<float>();
  /* float const& p6dsav */ all5.bind<float>();
  /* float const& am6dsv */ all5.bind<float>();
  /* float const& etaasv */ all5.bind<float>();
  /* float const& far7sv */ all5.bind<float>();
  /* float const& t4pbl */ all5.bind<float>();
  /* float const& t41 */ all5.bind<float>();
  /* float const& fan */ all5.bind<float>();
  /* int const& ispool */ all5.bind<int>();
  /* float const& tran */ dyn.bind<float>();
  /* float const& time */ dyn.bind<float>();
  /* float const& dt */ dyn.bind<float>();
  /* float const& tf */ dyn.bind<float>();
  int const& jtran = dyn.bind<int>();
  /* int const& nstep */ dyn.bind<int>();
  /* float const& tprint */ dyn.bind<float>();
  /* float const& dtprnt */ dyn.bind<float>();
  float const& vfan = vols.bind<float>();
  /* float const& vintc */ vols.bind<float>();
  /* float const& vcomp */ vols.bind<float>();
  /* float const& vcomb */ vols.bind<float>();
  /* float const& vhptrb */ vols.bind<float>();
  /* float const& viptrb */ vols.bind<float>();
  /* float const& vlptrb */ vols.bind<float>();
  /* float const& vaftbn */ vols.bind<float>();
  /* float const& vfduct */ vols.bind<float>();
  /* float const& vwduct */ vols.bind<float>();
  float const& wafp = flows.bind<float>();
  /* float const& waip */ flows.bind<float>();
  /* int const& macp */ flows.bind<int>();
  bool const& si = units.bind<bool>();
  if (is_called_first_time) {
    {
      static const char* values[] = {
        " COFAN", " (LO) ", " (HI) "
      };
      fem::data_of_type_str(FEM_VALUES_AND_SIZE),
        aword, wlh;
    }
  }
  float tsto = fem::float0;
  float pstd = fem::float0;
  float ra = fem::float0;
  float aj = fem::float0;
  float tstd = fem::float0;
  float theta = fem::float0;
  float delta = fem::float0;
  float thetad = fem::float0;
  float cnfs = fem::float0;
  int nafc = fem::int0;
  int igo = fem::int0;
  float t2os = fem::float0;
  int mafp = fem::int0;
  arr_1d<9, float> q(fem::fill0);
  float h22p = fem::float0;
  float p22dot = fem::float0;
  float p222 = fem::float0;
  float xx22 = fem::float0;
  float u22 = fem::float0;
  float u22dot = fem::float0;
  int maf = fem::int0;
  float h22x = fem::float0;
  float errw = fem::float0;
  float dir = fem::float0;
  float t22t = fem::float0;
  float y1 = fem::float0;
  float y2 = fem::float0;
  int nfb = fem::int0;
  float y7 = fem::float0;
  float yb = fem::float0;
  float y3 = fem::float0;
  float y4 = fem::float0;
  float ys = fem::float0;
  float y6 = fem::float0;
  float y8 = fem::float0;
  float y5 = fem::float0;
  float pcncg1 = fem::float0;
  float pcncg2 = fem::float0;
  float yi = fem::float0;
  float t4os = fem::float0;
  //C
  //C        COFAN uses Block data to perform fan calculations
  //C
  cmn.word = aword;
  //C
  if (si) {
    goto statement_100;
  }
  tsto = 518.668f;
  pstd = 1.0f;
  ra = .0252f;
  aj = 2.179f;
  goto statement_101;
  statement_100:
  tsto = 288.149f;
  pstd = 101325.f;
  ra = 286.9f;
  aj = 1.0f;
  statement_101:
  theta = fem::sqrt(t2 / tstd);
  delta = p2 / pstd;
  if (ides != 1) {
    goto statement_1;
  }
  thetad = theta;
  wafds = wafc * delta / theta;
  statement_1:
  cnf = pcnf * thetad / (fem::pow(100, theta));
  if (zf < 0.1f) {
    zf = 0.f;
  }
  if (zf > 1.f) {
    zf = 1.f;
  }
  cnfs = cnf;
  search(zf, cnf, prf, nafc, etaf, cnx(1), ncn, prx(1, 1), wacx(1,
    1), etax(1, 1), npt(1), 15, 15, igo);
  if ((cnf - cnfs) > 0.0005f * cnf) {
    cmn.mapedg = 1;
  }
  if (igo == 1 || igo == 2) {
    write(6, "('0* * * CNF OFF MAP ',f10.4,2x,a6,'      * *S$')"),
      cnfs, wlh(igo);
  }
  waf = wafc * delta / theta;
  if (ides != 1) {
    goto statement_2;
  }
  prfcf = (cmn.prfds - 1.f) / (prf - 1.f);
  etafcf = cmn.etafds / etaf;
  wafcf = wafds / waf;
  write(6,
    "('0FAN DESIGN',13x,' PRFCF= ',e15.0,' ETAFCF=',e15.8,'WAFCF=  ',e15.8,"
    "' T2DS=  ',e15.8)"),
    prfcf, etafcf, wafcf, t2os;
  statement_2:
  prf = prfcf * (prf - 1.f) + 1.f;
  etaf = etafcf * etaf;
  mafp = waf;
  wafc = wafc * wafcf;
  pcnf = 100.f * theta * cnf / thetad;
  cmn.dumd1 = pcnf;
  thcomp(cmn, prf, etaf, t2, cmn.h2, cmn.s2, p2, t22, h22, s22, p22);
  if (vfan == 0.0f) {
    goto statement_21;
  }
  q(2) = 0.0f;
  q(3) = 0;
  h22p = h22;
  p22dot = deriv(cmn, 4, p22);
  statement_18:
  thermo(cmn, p222, h22, t22, s22, xx22, 0.0f, 0, 0.0f);
  waf = wafp - p22dot * vfan / t22 / 1.4f / ra;
  u22 = h22 - aj * ra * t22;
  u22dot = deriv(cmn, 5, 22);
  h22x = (wafp * h22p - (wafp - maf) * u22 - u22dot * p22 * vfan /
    t22 / ra) / waf;
  errw = (h22 - h22x) / h22;
  dir = fem::sqrt(fem::abs(h22 / h22x));
  afquir(q(1), t22, errw, 0.f, 20.f, 0.0001f, dir, t22t, igo);
  switch (igo) {
    case 1: goto statement_19;
    case 2: goto statement_21;
    case 3: goto statement_20;
    default: break;
  }
  statement_19:
  t22 = t22t;
  goto statement_18;
  statement_20:
  error(cmn);
  statement_21:
  if (pcblf > 0.f) {
    cmn.blf = pcblf * waf;
  }
  if (jdes == 1) {
    goto statement_9;
  }
  jdes = 1;
  if (init == 1) {
    goto statement_8;
  }
  if (ides == 1) {
    goto statement_6;
  }
  if (jtran == 1) {
    goto statement_8;
  }
  if (mode != 2) {
    goto statement_3;
  }
  t4 = guess(3, y1, y2, pcnf, pcnfds, nfb, wfbds, y7, yb, t4ds);
  pcni = guess(8, t4, t4ds, y3, y4, ys, y6, t22, t22ds, pcncds);
  pcnc = guess(4, y1, y2, pcni, pcnids, wfb, wfbds, y7, y8, pcncds);
  goto statement_7;
  statement_3:
  if (mode == 1) {
    goto statement_5;
  }
  if (mode == 0) {
    goto statement_4;
  }
  t4 = guess(7, y1, y2, pcnf, pcnfds, y5, y6, t2, cmn.t2ds, t4ds);
  statement_4:
  //C
  pcnc = guess(5, t4, t4ds, y3, y4, y5, y6, t22, t22ds, pcnids);
  if (fxm2cp) {
    pcnc = fem::pow(pcncds, 99);
  }
  pcncg1 = pcnc;
  pcncg2 = pcncds;
  pcni = guess(9, y1, y2, pcncg1, pcncg2, y5, y6, t22, t22ds, pcnids);
  goto statement_7;
  statement_5:
  t4 = guess(6, yi, y2, pcnc, pcncds, y5, y6, t22, t22ds, t4os);
  pcni = guess(8, t4, t4ds, y3, y4, ys, y6, t22, t22ds, pcnids);
  goto statement_7;
  statement_6:
  pcnc = pcncds;
  pcni = pcnc;
  t4 = t4ds;
  wfb = wfbds;
  cmn.t21ds = cmn.t21;
  statement_7:
  cmn.zc = cmn.zcds;
  zi = zids;
  pcnigu = pcni;
  cmn.pcncgu = pcnc;
  cmn.t4gu = t4;
  statement_8:
  init = 0;
  statement_9:
  if (mode != 3) {
    goto statement_10;
  }
  if (fem::abs(cnf - cnfs) <= 0.001f * cnfs) {
    goto statement_1;
  }
  write(8,
    "('0CNF WAS= ',e15.8,' AND NOW=  ',e15.8,'  CHECK PCNF INPUT$$$$$$')"),
    cnfs, cnf;
  error(cmn);
  statement_10:
  pcnf = 100.f * theta * cnf / thetad;
  cointc(cmn);
  //C
}

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

void
parabo(
  arr_cref<float> x,
  arr_cref<float> y,
  float const& xd,
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

struct ram2_save
{
  arr<float> fhn;
  arr<float> prinlt;

  ram2_save() :
    fhn(dimension(15), fem::fill0),
    prinlt(dimension(15), fem::fill0)
  {}
};

void
ram2(
  common& cmn,
  float const& am,
  float& etar)
{
  FEM_CMN_SVE(ram2);
  // SAVE
  arr_ref<float> fhn(sve.fhn, dimension(15));
  arr_ref<float> prinlt(sve.prinlt, dimension(15));
  //
  if (is_called_first_time) {
    {
      static const float values[] = {
        0.f, 0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.8f, 1.1f, 1.2f, 1.4f,
          1.6f, 1.8f, 2.2f, 2.4f, 2.7f
      };
      fem::data_of_type<float>(FEM_VALUES_AND_SIZE),
        fhn;
    }
    {
      static const float values[] = {
        0.9f, 0.932f, 0.95f, 0.961f, 0.968f, 0.97f, 0.971f, 0.97f,
          0.9681f, 0.958f, 0.94f, 0.9101f, 0.858f, 0.8201f, 0.75f
      };
      fem::data_of_type<float>(FEM_VALUES_AND_SIZE),
        prinlt;
    }
  }
  //C
  //C        Calculates special cases of input ram recovery as a function of
  //C        flight Mach number
  //C
  int j = fem::int0;
  int m = fem::int0;
  FEM_DO_SAFE(j, 1, 15) {
    if (am >= fhn(j)) {
      m = j - 1;
    }
  }
  if (m == 0) {
    m = 1;
  }
  if (m >= 14) {
    m = 13;
  }
  //C
  int i = fem::int0;
  int mm = fem::int0;
  arr_1d<3, float> x(fem::fill0);
  arr_1d<3, float> y(fem::fill0);
  FEM_DO_SAFE(i, 1, 3) {
    mm = m - 1 + i;
    x(i) = fhn(mm);
    y(i) = prinlt(mm);
  }
  //C
  parabo(x, y, am, etar);
}

struct coinlt_save
{
  fem::variant_bindings all5_bindings;
  fem::variant_bindings units_bindings;
  char aword[10];

  coinlt_save() :
    aword("")
  {}
};

void
coinlt(
  common& cmn)
{
  FEM_CMN_SVE(coinlt);
  int& iamtp = cmn.iamtp;
  float& pcnfgu = cmn.pcnfgu;
  float& pcnfds = cmn.pcnfds;
  float& t2ds = cmn.t2ds;
  float& t1 = cmn.t1;
  float& p1 = cmn.p1;
  float& h1 = cmn.h1;
  float& s1 = cmn.s1;
  float& t2 = cmn.t2;
  float& p2 = cmn.p2;
  float& h2 = cmn.h2;
  float& s2 = cmn.s2;
  float& cs = cmn.cs;
  float& am = cmn.am;
  float& altp = cmn.altp;
  float& etar = cmn.etar;
  float& pcnf = cmn.pcnf;
  //
  common_variant all5(cmn.common_all5, sve.all5_bindings);
  common_variant units(cmn.common_units, sve.units_bindings);
  char* aword= sve.aword;;
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> s50;
      mbr<float> wa22;
      mbr<float> zi;
      mbr<float> pcni;
      mbr<float> cni;
      mbr<float> pri;
      mbr<float> etai;
      mbr<float> waci;
      mbr<float> tffip;
      mbr<float> cnip;
      mbr<float> etatip;
      mbr<float> dhtcip;
      mbr<float> dhti;
      mbr<float> blip;
      mbr<float> pcblip;
      mbr<float> pcnigu;
      mbr<float> zids;
      mbr<float> pcnids;
      mbr<float> prids;
      mbr<float> etaids;
      mbr<float> waids;
      mbr<float> pricf;
      mbr<float> etaicf;
      mbr<float> waicf;
      mbr<float> tfipds;
      mbr<float> cnipds;
      mbr<float> etipds;
      mbr<float> tfipcf;
      mbr<float> cnipcf;
      mbr<float> etipcf;
      mbr<float> dhipcf;
      mbr<float> waicds;
      mbr<float> wai;
      mbr<float> pcbli;
      mbr<float> bli;
      mbr<float> t22ds;
      mbr<float> wa21;
      mbr<float> wg50;
      mbr<float> far50;
      mbr<float> a24;
      mbr<float> ar23;
      mbr<float> dumspl;
      mbr<float> fxfn2m;
      mbr<float> fxm2cp;
      mbr<float> aftfan;
      mbr<float> punt;
      mbr<float> pcblid;
      mbr<float> p6dsav;
      mbr<float> am6dsv;
      mbr<float> etaasv;
      mbr<float> far7sv;
      mbr<float> t4pbl;
      mbr<float> t41;
      mbr<float> fan;
      mbr<int> ispool;
      all5.allocate(), s50, wa22, zi, pcni, cni, pri, etai, waci,
        tffip, cnip, etatip, dhtcip, dhti, blip, pcblip, pcnigu,
        zids, pcnids, prids, etaids, waids, pricf, etaicf, waicf,
        tfipds, cnipds, etipds, tfipcf, cnipcf, etipcf, dhipcf,
        waicds, wai, pcbli, bli, t22ds, wa21, wg50, far50, a24, ar23,
        dumspl, fxfn2m, fxm2cp, aftfan, punt, pcblid, p6dsav, am6dsv,
        etaasv, far7sv, t4pbl, t41, fan, ispool;
    }
    {
      mbr<bool> si;
      units.allocate(), si;
    }
  }
  /* float const& s50 */ all5.bind<float>();
  /* float const& wa22 */ all5.bind<float>();
  /* float const& zi */ all5.bind<float>();
  /* float const& pcni */ all5.bind<float>();
  /* float const& cni */ all5.bind<float>();
  /* float const& pri */ all5.bind<float>();
  /* float const& etai */ all5.bind<float>();
  /* float const& waci */ all5.bind<float>();
  /* float const& tffip */ all5.bind<float>();
  /* float const& cnip */ all5.bind<float>();
  /* float const& etatip */ all5.bind<float>();
  /* float const& dhtcip */ all5.bind<float>();
  /* float const& dhti */ all5.bind<float>();
  /* float const& blip */ all5.bind<float>();
  /* float const& pcblip */ all5.bind<float>();
  /* float const& pcnigu */ all5.bind<float>();
  /* float const& zids */ all5.bind<float>();
  /* float const& pcnids */ all5.bind<float>();
  /* float const& prids */ all5.bind<float>();
  /* float const& etaids */ all5.bind<float>();
  /* float const& waids */ all5.bind<float>();
  /* float const& pricf */ all5.bind<float>();
  /* float const& etaicf */ all5.bind<float>();
  /* float const& waicf */ all5.bind<float>();
  /* float const& tfipds */ all5.bind<float>();
  /* float const& cnipds */ all5.bind<float>();
  /* float const& etipds */ all5.bind<float>();
  /* float const& tfipcf */ all5.bind<float>();
  /* float const& cnipcf */ all5.bind<float>();
  /* float const& etipcf */ all5.bind<float>();
  /* float const& dhipcf */ all5.bind<float>();
  /* float const& waicds */ all5.bind<float>();
  /* float const& wai */ all5.bind<float>();
  /* float const& pcbli */ all5.bind<float>();
  /* float const& bli */ all5.bind<float>();
  /* float const& t22ds */ all5.bind<float>();
  /* float const& wa21 */ all5.bind<float>();
  /* float const& wg50 */ all5.bind<float>();
  /* float const& far50 */ all5.bind<float>();
  /* float const& a24 */ all5.bind<float>();
  /* float const& ar23 */ all5.bind<float>();
  /* float const& dumspl */ all5.bind<float>();
  /* float const& fxfn2m */ all5.bind<float>();
  /* float const& fxm2cp */ all5.bind<float>();
  /* float const& aftfan */ all5.bind<float>();
  /* float const& punt */ all5.bind<float>();
  /* float const& pcblid */ all5.bind<float>();
  /* float const& p6dsav */ all5.bind<float>();
  /* float const& am6dsv */ all5.bind<float>();
  /* float const& etaasv */ all5.bind<float>();
  /* float const& far7sv */ all5.bind<float>();
  /* float const& t4pbl */ all5.bind<float>();
  /* float const& t41 */ all5.bind<float>();
  /* float const& fan */ all5.bind<float>();
  /* int const& ispool */ all5.bind<int>();
  bool const& si = units.bind<bool>();
  if (is_called_first_time) {
    aword = "COINLT";
  }
  float aj = fem::float0;
  float g = fem::float0;
  float ref59 = fem::float0;
  float r = fem::float0;
  float alt = fem::float0;
  float t1std = fem::float0;
  float xx1 = fem::float0;
  float xx2 = fem::float0;
  float xx3 = fem::float0;
  float delta = fem::float0;
  float gs = fem::float0;
  float xx4 = fem::float0;
  int iter = fem::int0;
  float pi = fem::float0;
  float amtp = fem::float0;
  float oelt1 = fem::float0;
  float far = fem::float0;
  float r1 = fem::float0;
  float ph1 = fem::float0;
  float phi1 = fem::float0;
  float p2t = fem::float0;
  int i = fem::int0;
  float t2t = fem::float0;
  float s2t = fem::float0;
  float aw = fem::float0;
  float xx5 = fem::float0;
  int imode = fem::int0;
  //C
  //C        Determines ram recovery and performs inlet calculations
  //C
  cmn.word = aword;
  //C
  if (si) {
    goto statement_10;
  }
  aj = 778.26f;
  g = 32.174049f;
  ref59 = 2.0855531e07f;
  r = 1.986375f;
  goto statement_11;
  //C
  statement_10:
  aj = 1.0f;
  g = 1.0f;
  ref59 = 6.3567650e06f;
  r = 8314.36f;
  //C
  statement_11:
  alt = altp * ref59 / (ref59 - altp);
  atmos(cmn, alt, t1std, xx1, xx2, xx3, delta, gs, xx4, iter);
  pi = delta;
  //C
  if (si) {
    pi = 1013325.f * delta;
  }
  t1 = t1std;
  //C
  if (amtp == 2) {
    t1 = t1std + oelt1;
  }
  if (iamtp == 5) {
    ram2(cmn, am, etar);
  }
  if (iamtp != 1 && iamtp != 5) {
    ram(am, etar);
  }
  far = 0.0f;
  procom(cmn, far, t1, cs, xx2, xx3, r1, ph1, h1);
  s1 = phi1 - r1 * fem::alog(delta);
  h2 = h1 + fem::pow2((am + cs)) / (2.f * aj * g);
  p2t = 1.f;
  if (si) {
    p2t = 101325.0f;
  }
  FEM_DO_SAFE(i, 1, 10) {
    thermo(cmn, p2t, h2, t2t, s2t, aw, 0, 0.1f, 1);
    //C
    if (fem::abs(s2t - s1) <= 0.0001f * s1) {
      goto statement_2;
    }
    p2t = p1 * fem::exp((aw / r) * ((s2t - s1) + (r / aw) * fem::alog(
      p2t / p1)));
  }
  error(cmn);
  return;
  //C
  statement_2:
  if (iamtp == 3 || iamtp == 4) {
    etar = p2 / p2t;
  }
  p2 = etar * p2t;
  //C
  if (iamtp != 4) {
    thermo(cmn, p2, h2, t2, s2, xx5, 0, 0.0f, 1);
  }
  if (iamtp == 4) {
    thermo(cmn, p2, h2, t2, s2, xx5, 0, 0.0f, 0);
  }
  if (cmn.init == 1) {
    goto statement_5;
  }
  if (cmn.ides == 1) {
    goto statement_3;
  }
  if (imode == 3) {
    goto statement_4;
  }
  //C
  pcnf = guess(cmn.mode, cmn.t4, cmn.t4ds, cmn.pcnc, cmn.pcncds,
    cmn.wfb, cmn.wfbds, t2, t2ds, pcnfds);
  //C
  pcnfgu = pcnf;
  goto statement_4;
  //C
  statement_3:
  pcnf = pcnfds;
  pcnfgu = pcnf;
  t2ds = t2;
  statement_4:
  cmn.zf = cmn.zfds;
  //C
  statement_5:;
}

struct distrb_save
{
  fem::variant_bindings all5_bindings;
  fem::variant_bindings dyn_bindings;
  fem::variant_bindings rpms_bindings;
};

void
distrb(
  common& cmn)
{
  FEM_CMN_SVE(distrb);
  common_variant all5(cmn.common_all5, sve.all5_bindings);
  common_variant dyn(cmn.common_dyn, sve.dyn_bindings);
  common_variant rpms(cmn.common_rpms, sve.rpms_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> s50;
      mbr<float> wa22;
      mbr<float> zi;
      mbr<float> pcni;
      mbr<float> cni;
      mbr<float> pri;
      mbr<float> etai;
      mbr<float> waci;
      mbr<float> tffip;
      mbr<float> cnip;
      mbr<float> etatip;
      mbr<float> dhtcip;
      mbr<float> dhti;
      mbr<float> blip;
      mbr<float> pcblip;
      mbr<float> pcnigu;
      mbr<float> zids;
      mbr<float> pcnids;
      mbr<float> prids;
      mbr<float> etaids;
      mbr<float> waids;
      mbr<float> pricf;
      mbr<float> etaicf;
      mbr<float> waicf;
      mbr<float> tfipds;
      mbr<float> cnipds;
      mbr<float> etipds;
      mbr<float> tfipcf;
      mbr<float> cnipcf;
      mbr<float> etipcf;
      mbr<float> dhipcf;
      mbr<float> waicds;
      mbr<float> wai;
      mbr<float> pcbli;
      mbr<float> bli;
      mbr<float> t22ds;
      mbr<float> wa21;
      mbr<float> wg50;
      mbr<float> far50;
      mbr<float> a24;
      mbr<float> ar23;
      mbr<float> dumspl;
      mbr<float> fxfn2m;
      mbr<float> fxm2cp;
      mbr<float> aftfan;
      mbr<float> punt;
      mbr<float> pcblid;
      mbr<float> p6dsav;
      mbr<float> am6dsv;
      mbr<float> etaasv;
      mbr<float> far7sv;
      mbr<float> t4pbl;
      mbr<float> t41;
      mbr<float> fan;
      mbr<int> ispool;
      all5.allocate(), s50, wa22, zi, pcni, cni, pri, etai, waci,
        tffip, cnip, etatip, dhtcip, dhti, blip, pcblip, pcnigu,
        zids, pcnids, prids, etaids, waids, pricf, etaicf, waicf,
        tfipds, cnipds, etipds, tfipcf, cnipcf, etipcf, dhipcf,
        waicds, wai, pcbli, bli, t22ds, wa21, wg50, far50, a24, ar23,
        dumspl, fxfn2m, fxm2cp, aftfan, punt, pcblid, p6dsav, am6dsv,
        etaasv, far7sv, t4pbl, t41, fan, ispool;
    }
    {
      mbr<int> itran;
      mbr<float> time;
      mbr<float> dt;
      mbr<float> tf;
      mbr<int> jtran;
      mbr<int> nstep;
      mbr<float> tprint;
      mbr<float> dtprnt;
      dyn.allocate(), itran, time, dt, tf, jtran, nstep, tprint, dtprnt;
    }
    {
      mbr<float> xnhpds;
      mbr<float> xnipds;
      mbr<float> xnlpds;
      mbr<float> pmihp;
      mbr<float> pmiip;
      mbr<float> pmilp;
      rpms.allocate(), xnhpds, xnipds, xnlpds, pmihp, pmiip, pmilp;
    }
  }
  /* float const& s50 */ all5.bind<float>();
  /* float const& wa22 */ all5.bind<float>();
  /* float const& zi */ all5.bind<float>();
  /* float const& pcni */ all5.bind<float>();
  /* float const& cni */ all5.bind<float>();
  /* float const& pri */ all5.bind<float>();
  /* float const& etai */ all5.bind<float>();
  /* float const& waci */ all5.bind<float>();
  /* float const& tffip */ all5.bind<float>();
  /* float const& cnip */ all5.bind<float>();
  /* float const& etatip */ all5.bind<float>();
  /* float const& dhtcip */ all5.bind<float>();
  /* float const& dhti */ all5.bind<float>();
  /* float const& blip */ all5.bind<float>();
  /* float const& pcblip */ all5.bind<float>();
  /* float const& pcnigu */ all5.bind<float>();
  /* float const& zids */ all5.bind<float>();
  /* float const& pcnids */ all5.bind<float>();
  /* float const& prids */ all5.bind<float>();
  /* float const& etaids */ all5.bind<float>();
  /* float const& waids */ all5.bind<float>();
  /* float const& pricf */ all5.bind<float>();
  /* float const& etaicf */ all5.bind<float>();
  /* float const& waicf */ all5.bind<float>();
  /* float const& tfipds */ all5.bind<float>();
  /* float const& cnipds */ all5.bind<float>();
  /* float const& etipds */ all5.bind<float>();
  /* float const& tfipcf */ all5.bind<float>();
  /* float const& cnipcf */ all5.bind<float>();
  /* float const& etipcf */ all5.bind<float>();
  /* float const& dhipcf */ all5.bind<float>();
  /* float const& waicds */ all5.bind<float>();
  /* float const& wai */ all5.bind<float>();
  /* float const& pcbli */ all5.bind<float>();
  /* float const& bli */ all5.bind<float>();
  /* float const& t22ds */ all5.bind<float>();
  /* float const& wa21 */ all5.bind<float>();
  /* float const& wg50 */ all5.bind<float>();
  /* float const& far50 */ all5.bind<float>();
  /* float const& a24 */ all5.bind<float>();
  /* float const& ar23 */ all5.bind<float>();
  /* float const& dumspl */ all5.bind<float>();
  /* float const& fxfn2m */ all5.bind<float>();
  /* float const& fxm2cp */ all5.bind<float>();
  /* float const& aftfan */ all5.bind<float>();
  /* float const& punt */ all5.bind<float>();
  /* float const& pcblid */ all5.bind<float>();
  /* float const& p6dsav */ all5.bind<float>();
  /* float const& am6dsv */ all5.bind<float>();
  /* float const& etaasv */ all5.bind<float>();
  /* float const& far7sv */ all5.bind<float>();
  /* float const& t4pbl */ all5.bind<float>();
  /* float const& t41 */ all5.bind<float>();
  /* float const& fan */ all5.bind<float>();
  /* int const& ispool */ all5.bind<int>();
  /* int const& itran */ dyn.bind<int>();
  /* float const& time */ dyn.bind<float>();
  /* float const& dt */ dyn.bind<float>();
  /* float const& tf */ dyn.bind<float>();
  /* int const& jtran */ dyn.bind<int>();
  /* int const& nstep */ dyn.bind<int>();
  /* float const& tprint */ dyn.bind<float>();
  /* float const& dtprnt */ dyn.bind<float>();
  /* float const& xnhpds */ rpms.bind<float>();
  /* float const& xnipds */ rpms.bind<float>();
  /* float const& xnlpds */ rpms.bind<float>();
  /* float const& pmihp */ rpms.bind<float>();
  /* float const& pmiip */ rpms.bind<float>();
  /* float const& pmilp */ rpms.bind<float>();
  //C
  float wfis = 1.858f;
  //C
}

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

struct conout_save
{
  fem::variant_bindings all5_bindings;
  fem::variant_bindings units_bindings;
  float blank;
  int limit;
  float theend;
  arr<float> wordy;

  conout_save() :
    blank(fem::float0),
    limit(fem::int0),
    theend(fem::float0),
    wordy(dimension(424), fem::fill0)
  {}
};

void
conout(
  common& cmn,
  int const& icon)
{
  FEM_CMN_SVE(conout);
  common_read read(cmn);
  common_write write(cmn);
  common_variant all5(cmn.common_all5, sve.all5_bindings);
  common_variant units(cmn.common_units, sve.units_bindings);
  float& blank = sve.blank;
  int& limit = sve.limit;
  float& theend = sve.theend;
  arr_ref<float> wordy(sve.wordy, dimension(424));
  int i = fem::int0;
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> s50;
      mbr<float> wa22;
      mbr<float> zi;
      mbr<float> pcni;
      mbr<float> cni;
      mbr<float> pri;
      mbr<float> etai;
      mbr<float> waci;
      mbr<float> tffip;
      mbr<float> cnip;
      mbr<float> etatip;
      mbr<float> dhtcip;
      mbr<float> dhti;
      mbr<float> blip;
      mbr<float> pcblip;
      mbr<float> pcnigu;
      mbr<float> zids;
      mbr<float> pcnids;
      mbr<float> prids;
      mbr<float> etaids;
      mbr<float> waids;
      mbr<float> pricf;
      mbr<float> etaicf;
      mbr<float> waicf;
      mbr<float> tfipds;
      mbr<float> cnipds;
      mbr<float> etipds;
      mbr<float> tfipcf;
      mbr<float> cnipcf;
      mbr<float> etipcf;
      mbr<float> dhipcf;
      mbr<float> waicds;
      mbr<float> wai;
      mbr<float> pcbli;
      mbr<float> bli;
      mbr<float> t22ds;
      mbr<float> wa21;
      mbr<float> wg50;
      mbr<float> far50;
      mbr<float> a24;
      mbr<float> ar23;
      mbr<float> dumspl;
      mbr<float> fxfn2m;
      mbr<float> fxm2cp;
      mbr<float> aftfan;
      mbr<float> punt;
      mbr<float> pcblid;
      mbr<float> p6dsav;
      mbr<float> am6dsv;
      mbr<float> etaasv;
      mbr<float> far7sv;
      mbr<float> t4pbl;
      mbr<float> t41;
      mbr<float> fan;
      mbr<int> ispool;
      all5.allocate(), s50, wa22, zi, pcni, cni, pri, etai, waci,
        tffip, cnip, etatip, dhtcip, dhti, blip, pcblip, pcnigu,
        zids, pcnids, prids, etaids, waids, pricf, etaicf, waicf,
        tfipds, cnipds, etipds, tfipcf, cnipcf, etipcf, dhipcf,
        waicds, wai, pcbli, bli, t22ds, wa21, wg50, far50, a24, ar23,
        dumspl, fxfn2m, fxm2cp, aftfan, punt, pcblid, p6dsav, am6dsv,
        etaasv, far7sv, t4pbl, t41, fan, ispool;
    }
    {
      mbr<bool> si;
      units.allocate(), si;
    }
  }
  /* float const& s50 */ all5.bind<float>();
  /* float const& wa22 */ all5.bind<float>();
  /* float const& zi */ all5.bind<float>();
  /* float const& pcni */ all5.bind<float>();
  /* float const& cni */ all5.bind<float>();
  /* float const& pri */ all5.bind<float>();
  /* float const& etai */ all5.bind<float>();
  /* float const& waci */ all5.bind<float>();
  /* float const& tffip */ all5.bind<float>();
  /* float const& cnip */ all5.bind<float>();
  /* float const& etatip */ all5.bind<float>();
  /* float const& dhtcip */ all5.bind<float>();
  /* float const& dhti */ all5.bind<float>();
  /* float const& blip */ all5.bind<float>();
  /* float const& pcblip */ all5.bind<float>();
  /* float const& pcnigu */ all5.bind<float>();
  /* float const& zids */ all5.bind<float>();
  /* float const& pcnids */ all5.bind<float>();
  /* float const& prids */ all5.bind<float>();
  /* float const& etaids */ all5.bind<float>();
  /* float const& waids */ all5.bind<float>();
  /* float const& pricf */ all5.bind<float>();
  /* float const& etaicf */ all5.bind<float>();
  /* float const& waicf */ all5.bind<float>();
  /* float const& tfipds */ all5.bind<float>();
  /* float const& cnipds */ all5.bind<float>();
  /* float const& etipds */ all5.bind<float>();
  /* float const& tfipcf */ all5.bind<float>();
  /* float const& cnipcf */ all5.bind<float>();
  /* float const& etipcf */ all5.bind<float>();
  /* float const& dhipcf */ all5.bind<float>();
  /* float const& waicds */ all5.bind<float>();
  /* float const& wai */ all5.bind<float>();
  /* float const& pcbli */ all5.bind<float>();
  /* float const& bli */ all5.bind<float>();
  /* float const& t22ds */ all5.bind<float>();
  /* float const& wa21 */ all5.bind<float>();
  /* float const& wg50 */ all5.bind<float>();
  /* float const& far50 */ all5.bind<float>();
  /* float const& a24 */ all5.bind<float>();
  /* float const& ar23 */ all5.bind<float>();
  /* float const& dumspl */ all5.bind<float>();
  /* float const& fxfn2m */ all5.bind<float>();
  /* float const& fxm2cp */ all5.bind<float>();
  /* float const& aftfan */ all5.bind<float>();
  /* float const& punt */ all5.bind<float>();
  /* float const& pcblid */ all5.bind<float>();
  /* float const& p6dsav */ all5.bind<float>();
  /* float const& am6dsv */ all5.bind<float>();
  /* float const& etaasv */ all5.bind<float>();
  /* float const& far7sv */ all5.bind<float>();
  /* float const& t4pbl */ all5.bind<float>();
  /* float const& t41 */ all5.bind<float>();
  /* float const& fan */ all5.bind<float>();
  /* int const& ispool */ all5.bind<int>();
  bool const& si = units.bind<bool>();
  if (is_called_first_time) {
    {
      static const char* values[] = {
        "PCNFGU", "PCNCGU", "T4GU  ", "DUMD1 ", "DUMD2 ", "DELFG ",
          "DELFN ", "DELSFC", "ZFDS  ", "PCNFDS", "PRFDS ", "ETAFDS",
          "WAFDS ", "PRFCF ", "ETAFCF", "WAFCF ", "ZCDS  ", "PCNCDS",
          "PRCDS ", "ETACDS", "WACDS ", "PRCCF ", "ETACCF", "WACCF ",
          "T4DS  ", "WFBDS ", "DTCODS", "ETABDS", "MA3CDS", "DPCODS",
          "DTCOCF", "ETABCF", "TFHPDS", "CNHPDS", "ETHPDS", "TFHPCF",
          "CNHPCF", "ETHPCF", "DHHPCF", "T2DS  ", "TFLPDS", "CNLPDS",
          "ETLPDS", "TFLPCF", "CNLPCF", "ETLPCF", "DHLPCF", "T21DS ",
          "T24DS ", "MFDDS ", "DTDUDS", "ETADDS", "HA23DS", "DPDUDS",
          "DTDUCF", "ETADCF", "T7DS  ", "WFADS ", "DTAFDS", "ETAADS",
          "WG6CDS", "DPAFDS", "DTAFCF", "ETAACF", "A55   ", "A25   ",
          "A6    ", "A7    ", "A8    ", "A9    ", "A28   ", "A29   ",
          "PS55  ", "AM55  ", "CVDNOZ", "CVMNOZ", "A8SAV ", "A9SAV ",
          "A28SAV", "A29SAV", "TI    ", "P1    ", "H1    ", "S1    ",
          "T2    ", "P2    ", "H2    ", "S2    ", "T21   ", "P21   ",
          "H21   ", "S21   ", "T3    ", "P3    ", "H3    ", "S3    ",
          "T4    ", "P4    "
      };
      fem::data_of_type_str data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(i, 1, 98) {
        data, wordy(i);
      }
    }
    {
      static const char* values[] = {
        "H4    ", "S4    ", "T5    ", "P5    ", "H5    ", "S5    ",
          "T55   ", "P55   ", "H55   ", "S55   ", "BLF   ", "BLC   ",
          "BLDU  ", "BLOB  ", "CNF   ", "PRF   ", "ETAF  ", "WAFC  ",
          "MAF   ", "WA3   ", "WG4   ", "FAR4  ", "CNC   ", "PRC   ",
          "ETAC  ", "MACC  ", "WAC   ", "ETA8  ", "DPCOM ", "DUMP  ",
          "CNHP  ", "ETATHP", "DHTCHP", "DHTC  ", "BLHP  ", "WG5   ",
          "FAR5  ", "CS    ", "CNLP  ", "ETATLP", "DHTCLP", "DHTF  ",
          "BLLP  ", "WG55  ", "FAR55 ", "HPEXT ", "AM    ", "ALTP  ",
          "ETAR  ", "ZF    ", "PCNF  ", "ZC    ", "PCNC  ", "MF8   ",
          "TFFHP ", "TFFLP ", "PCBLF ", "PCBLC ", "PCBLDU", "PCBLOB",
          "PCBLHP", "PCBLLP", "XP1   ", "XWAF  ", "XWAC  ", "XBLF  ",
          "XBLDU ", "XH3   ", "DUMS1 ", "DUMS2 ", "XT21  ", "XP21  ",
          "XH21  ", "XS21  ", "T23   ", "P23   ", "H23   ", "S23   ",
          "T24   ", "P24   ", "H24   ", "S24   ", "T25   ", "P25   ",
          "H25   ", "S25   ", "T28   ", "P28   ", "H28   ", "S28   ",
          "T29   "
      };
      fem::data_of_type_str data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(i, 99, 189) {
        data, wordy(i);
      }
    }
    {
      static const char* values[] = {
        "P29   ", "H29   ", "S29   ", "WAD   ", "WFD   ", "WG24  ",
          "FAR24 ", "ETAD  ", "DPDUC ", "BYPASS", "DUMS3 ", "TS28  ",
          "PS28  ", "V28   ", "AM28  ", "TS29  ", "PS29  ", "V29   ",
          "AM29  ", "XT55  ", "XP55  ", "XH55  ", "XS55  ", "XTZ5  ",
          "XP25  ", "XH25  ", "XS25  ", "XWFB  ", "XWG55 ", "XFAR55",
          "XWFD  ", "XWG24 ", "XFAR24", "XXP1  ", "DUM8  ", "T6    ",
          "P6    ", "H6    ", "S6    ", "T7    ", "P7    ", "H7    ",
          "S7    ", "T8    ", "P8    ", "H8    ", "S8    ", "T9    ",
          "P9    ", "H9    ", "S9    ", "WG6   ", "WFA   ", "WG7   ",
          "FAR7  ", "ETAA  ", "DPAFT ", "V55   ", "V25   ", "PS6   ",
          "V6    ", "AM6   ", "TS7   ", "PS7   ", "V7    ", "AM7   ",
          "AM25  ", "TS8   ", "PS8   ", "V8    ", "AM8   ", "TS9   ",
          "PS9   ", "V9    ", "AM9   ", "VA    ", "FRD   ", "VJD   ",
          "FGMD  ", "VJM   ", "FGMM  ", "FGPD  ", "FGPM  ", "FGM   ",
          "FGP   ", "WFT   ", "WGT   ", "FART  ", "FG    ", "FN    ",
          "SFC   "
      };
      fem::data_of_type_str data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(i, 190, 280) {
        data, wordy(i);
      }
    }
    {
      static const char* values[] = {
        "WA32  ", "DPWGDS", "DPWING", "WA32DS", "A38   ", "AM38  ",
          "V38   ", "T38   ", "H38   ", "P38   ", "TS38  ", "PS38  ",
          "T39   ", "H39   ", "P39   ", "TS39  ", "IV39  ", "AM39  ",
          "A39   ", "BPRINT", "WG37  ", "CVDWNG", "FGMWNG", "FGPWNG",
          "FNWING", "FNMAIN", "FWOVFN", "PS39  ", "FFOVFN", "FCOVFN",
          "FMNOFN", "FNOVFD", "VJW   ", "T22   ", "P22   ", "H22   ",
          "S22   ", "T50   ", "P50   ", "H50   ", "S50   ", "WA22  ",
          "ZI    ", "PCNI  ", "CNI   ", "PRI   ", "ETAI  ", "WACI  ",
          "TFFIP ", "CNIP  ", "ETATIP", "DHTCIP", "DHTI  ", "BLIP  ",
          "PCBLIP", "PCNIGU", "ZIDS  ", "PCNIDS", "PRIDS ", "ETAIDS",
          "WAIDS ", "PRICF ", "ETAICF", "WAICF ", "TFIPDS", "CNPIDS",
          "ETIPDS", "TFIPCF", "CNIPFC", "ETIPCF", "DHPCF ", "WAICDS",
          "WAI   ", "PCBLI ", "BLI   ", "T22DS ", "WA21  ", "WG50  ",
          "FAR50 ", "A24   ", "AM23  ", "DUMSPL", "FXFNZM", "FXM2CP",
          "AFTFAN", "PUNT  ", "PCBLID", "P6DSAV", "AM6DSV", "ETAASV",
          "FAR7SV", "T4PBL ", "T41   "
      };
      fem::data_of_type_str data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(i, 281, 373) {
        data, wordy(i);
      }
    }
    theend = "THEEND";
    blank = "      ";
    limit = 373;
  }
  int n = fem::int0;
  int num = fem::int0;
  float ain = fem::float0;
  float change = fem::float0;
  int j = fem::int0;
  int jj = fem::int0;
  arr_1d<150, int> iout(fem::fill0);
  int k = fem::int0;
  int l = fem::int0;
  int m = fem::int0;
  arr_1d<6, float> wout(fem::fill0);
  arr<float> param(dimension(424), fem::fill0);
  arr_1d<6, float> aout(fem::fill0);
  //C
  //C        EQUIVALENCE  (PARAM,PCNFGU)
  //C
  if (icon == 1) {
    goto statement_24;
  }
  if (si) {
    goto statement_22;
  }
  write(6, "(1x,'THE OUTPUT IS IN ENGLISH UNITS')");
  goto statement_24;
  statement_22:
  write(6, "(1x,'THE OUTPUT IS IN SI UNITS')");
  statement_24:
  //C
  switch (icon) {
    case 1: goto statement_1;
    case 2: goto statement_6;
    default: break;
  }
  //C
  //C ***    INPUT SECTION
  //C
  statement_1:
  FEM_DO_SAFE(n, 1, 150) {
    num = n;
    read(5, "(a6,6x,a6)"), ain, change;
    if (ain == theend) {
      goto statement_5;
    }
    FEM_DO_SAFE(j, 1, limit) {
      jj = j;
      if (ain == wordy(j)) {
        goto statement_3;
      }
    }
    write(6, "('0THE WORD ',a6,' NOT FOUNO IN COMMON ARRAY')"), ain;
    goto statement_4;
    statement_3:
    iout(num) = jj;
    if (change != blank) {
      wordy(jj) = change;
    }
    statement_4:;
  }
  write(6, "('0ERROR IN CONOUT INPUT')");
  statement_5:
  num = num - 1;
  return;
  //C
  //C ***    OUTPUT  SECTION
  //C
  statement_6:
  if (num == 1) {
    goto statement_10;
  }
  n = num;
  j = 6;
  FEM_DOSTEP(i, 1, num, 6) {
    if (n > 6) {
      goto statement_7;
    }
    j = n;
    statement_7:
    n = n - 6;
    FEM_DO_SAFE(k, 1, j) {
      l = i + k - 1;
      m = iout(l);
      wout(k) = wordy(m);
      aout(k) = param(m);
    }
    {
      write_loop wloop(cmn, 6, "(26x,a6,5(9x,a6))");
      FEM_DO_SAFE(k, 1, j) {
        wloop, wout(k);
      }
    }
    {
      write_loop wloop(cmn, 6, "(' ',20x,6e15.6)");
      FEM_DO_SAFE(k, 1, j) {
        wloop, aout(k);
      }
    }
    if (n <= 0) {
      goto statement_10;
    }
  }
  statement_10:;
  //C
}

struct syg_save
{
  float onedol;

  syg_save() :
    onedol(fem::float0)
  {}
};

void
syg(
  common& cmn,
  int const& icon)
{
  FEM_CMN_SVE(syg);
  common_read read(cmn);
  common_write write(cmn);
  float& onedol = sve.onedol;
  if (is_called_first_time) {
    onedol = "      ";
  }
  arr_1d<132, float> word(fem::fill0);
  int i = fem::int0;
  int k = fem::int0;
  int j = fem::int0;
  int m = fem::int0;
  static const char* format_11 = "(132a1)";
  //C
  //C        controls printing from UNIT08 (Throughout the program and
  //C        particularly in ENGBAL, certain messages, variables, and
  //C        matrix values are written on UNIT08 as an aid in determining
  //C        why an error occurred or why a point did not balance. These
  //C        values are printed out if subroutine ERROR is called and
  //C        IDUMP is greater than zero, or after a good point if IDUMP:2.)
  //C
  switch (icon) {
    case 1: goto statement_1;
    case 2: goto statement_2;
    default: break;
  }
  cmn.io.endfile(8);
  statement_1:
  cmn.io.rewind(8);
  return;
  //C
  //C        TERMINATE THE FILE
  //C
  statement_2:
  write(8, "('$$$$$$$$$$$$')");
  cmn.io.endfile(8);
  cmn.io.rewind(8);
  //C
  //C        READ RECORD
  statement_3:
  {
    read_loop rloop(cmn, 8, format_11);
    FEM_DO_SAFE(i, 1, 132) {
      rloop, word(i);
    }
  }
  //C        CHECK FOR 12 LEADING DOLLAR SIGNS
  //C
  FEM_DO_SAFE(i, 1, 12) {
    switch (fem::if_arithmetic(word(i) - onedol)) {
      case -1: goto statement_4;
      case  0: goto statement_5;
      default: goto statement_4;
    }
    statement_4:;
  }
  return;
  //C
  //C        CHECK FOR 6 TRAILING DOLLAR SIGNS
  //C
  statement_5:
  FEM_DO_SAFE(i, 1, 132) {
    //C        I=I
    switch (fem::if_arithmetic(word(i) - onedol)) {
      case -1: goto statement_8;
      case  0: goto statement_6;
      default: goto statement_8;
    }
    statement_6:
    k = i + 5;
    FEM_DO_SAFE(j, 1, k) {
      switch (fem::if_arithmetic(word(j) - onedol)) {
        case -1: goto statement_6;
        case  0: goto statement_8;
        default: goto statement_6;
      }
    }
    goto statement_9;
    statement_8:;
  }
  write(6, "('0','ERROR IN SYG')");
  return;
  //C        PRINT LINE
  statement_9:
  i = i - 1;
  {
    write_loop wloop(cmn, 6, format_11);
    FEM_DO_SAFE(m, 1, i) {
      wloop, word(m);
    }
  }
  goto statement_3;
  //C
}

// forward declaration (dependency cycle)
void engbal(common&);

struct output_save
{
  fem::variant_bindings all5_bindings;
  fem::variant_bindings dyn_bindings;
  char aword1[10];
  char aword2[10];
  arr<float, 2> w;

  output_save() :
    aword1(""),
    aword2(""),
    w(dimension(5, 6), fem::fill0)
  {}
};

void
output(
  common& cmn)
{
  FEM_CMN_SVE(output);
  common_write write(cmn);
  char* word = cmn.word;
  int& ides = cmn.ides;
  float& am = cmn.am;
  float& altp = cmn.altp;
  float& etar = cmn.etar;
  //
  common_variant all5(cmn.common_all5, sve.all5_bindings);
  common_variant dyn(cmn.common_dyn, sve.dyn_bindings);
  char* aword1 = sve.aword1;
  char* aword2 = sve.aword2;
  arr_ref<float, 2> w(sve.w, dimension(5, 6));
  int i = fem::int0;
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> s50;
      mbr<float> wa22;
      mbr<float> zi;
      mbr<float> pcni;
      mbr<float> cni;
      mbr<float> pri;
      mbr<float> etai;
      mbr<float> waci;
      mbr<float> tffip;
      mbr<float> cnip;
      mbr<float> etatip;
      mbr<float> dhtcip;
      mbr<float> dhti;
      mbr<float> blip;
      mbr<float> pcblip;
      mbr<float> pcnigu;
      mbr<float> zids;
      mbr<float> pcnids;
      mbr<float> prids;
      mbr<float> etaids;
      mbr<float> waids;
      mbr<float> pricf;
      mbr<float> etaicf;
      mbr<float> waicf;
      mbr<float> tfipds;
      mbr<float> cnipds;
      mbr<float> etipds;
      mbr<float> tfipcf;
      mbr<float> cnipcf;
      mbr<float> etipcf;
      mbr<float> dhipcf;
      mbr<float> waicds;
      mbr<float> wai;
      mbr<float> pcbli;
      mbr<float> bli;
      mbr<float> t22ds;
      mbr<float> wa21;
      mbr<float> wg50;
      mbr<float> far50;
      mbr<float> a24;
      mbr<float> ar23;
      mbr<bool> dumspl;
      mbr<bool> fxfn2m;
      mbr<bool> fxm2cp;
      mbr<bool> aftfan;
      mbr<float> punt;
      mbr<float> pcblid;
      mbr<float> p6dsav;
      mbr<float> am6dsv;
      mbr<float> etaasv;
      mbr<float> far7sv;
      mbr<float> t4pbl;
      mbr<float> t41;
      mbr<bool> fan;
      mbr<int> ispool;
      all5.allocate(), s50, wa22, zi, pcni, cni, pri, etai, waci,
        tffip, cnip, etatip, dhtcip, dhti, blip, pcblip, pcnigu,
        zids, pcnids, prids, etaids, waids, pricf, etaicf, waicf,
        tfipds, cnipds, etipds, tfipcf, cnipcf, etipcf, dhipcf,
        waicds, wai, pcbli, bli, t22ds, wa21, wg50, far50, a24, ar23,
        dumspl, fxfn2m, fxm2cp, aftfan, punt, pcblid, p6dsav, am6dsv,
        etaasv, far7sv, t4pbl, t41, fan, ispool;
    }
    {
      mbr<int> itran;
      mbr<float> time;
      mbr<float> dt;
      mbr<float> tf;
      mbr<int> jtran;
      mbr<int> nstep;
      mbr<float> tprint;
      mbr<float> dtprnt;
      dyn.allocate(), itran, time, dt, tf, jtran, nstep, tprint, dtprnt;
    }
  }
  /* float const& s50 */ all5.bind<float>();
  /* float const& wa22 */ all5.bind<float>();
  float const& zi = all5.bind<float>();
  float const& pcni = all5.bind<float>();
  /* float const& cni */ all5.bind<float>();
  /* float const& pri */ all5.bind<float>();
  /* float const& etai */ all5.bind<float>();
  /* float const& waci */ all5.bind<float>();
  /* float const& tffip */ all5.bind<float>();
  /* float const& cnip */ all5.bind<float>();
  /* float const& etatip */ all5.bind<float>();
  /* float const& dhtcip */ all5.bind<float>();
  /* float const& dhti */ all5.bind<float>();
  /* float const& blip */ all5.bind<float>();
  /* float const& pcblip */ all5.bind<float>();
  /* float const& pcnigu */ all5.bind<float>();
  /* float const& zids */ all5.bind<float>();
  /* float const& pcnids */ all5.bind<float>();
  /* float const& prids */ all5.bind<float>();
  /* float const& etaids */ all5.bind<float>();
  /* float const& waids */ all5.bind<float>();
  /* float const& pricf */ all5.bind<float>();
  /* float const& etaicf */ all5.bind<float>();
  /* float const& waicf */ all5.bind<float>();
  /* float const& tfipds */ all5.bind<float>();
  /* float const& cnipds */ all5.bind<float>();
  /* float const& etipds */ all5.bind<float>();
  /* float const& tfipcf */ all5.bind<float>();
  /* float const& cnipcf */ all5.bind<float>();
  /* float const& etipcf */ all5.bind<float>();
  /* float const& dhipcf */ all5.bind<float>();
  /* float const& waicds */ all5.bind<float>();
  /* float const& wai */ all5.bind<float>();
  /* float const& pcbli */ all5.bind<float>();
  /* float const& bli */ all5.bind<float>();
  /* float const& t22ds */ all5.bind<float>();
  /* float const& wa21 */ all5.bind<float>();
  /* float const& wg50 */ all5.bind<float>();
  /* float const& far50 */ all5.bind<float>();
  /* float const& a24 */ all5.bind<float>();
  /* float const& ar23 */ all5.bind<float>();
  bool const& dumspl = all5.bind<bool>();
  bool const& fxfn2m = all5.bind<bool>();
  bool const& fxm2cp = all5.bind<bool>();
  bool const& aftfan = all5.bind<bool>();
  /* float const& punt */ all5.bind<float>();
  float const& pcblid = all5.bind<float>();
  /* float const& p6dsav */ all5.bind<float>();
  /* float const& am6dsv */ all5.bind<float>();
  /* float const& etaasv */ all5.bind<float>();
  /* float const& far7sv */ all5.bind<float>();
  /* float const& t4pbl */ all5.bind<float>();
  /* float const& t41 */ all5.bind<float>();
  bool const& fan = all5.bind<bool>();
  int const& ispool = all5.bind<int>();
  int const& itran = dyn.bind<int>();
  float const& time = dyn.bind<float>();
  /* float const& dt */ dyn.bind<float>();
  /* float const& tf */ dyn.bind<float>();
  /* int const& jtran */ dyn.bind<int>();
  /* int const& nstep */ dyn.bind<int>();
  float& tprint = dyn.bind<float>();
  float const& dtprnt = dyn.bind<float>();
  if (is_called_first_time) {
    aword1 = "OUTPUT";
    aword2 = "CDMMON";
    {
      static const char* values[] = {
        "SUBSON", "IC C-D", " NOZZL", "E     "
      };
      fem::data_of_type_str data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(i, 1, 4) {
        data, w(1, i);
      }
    }
    {
      static const char* values[] = {
        "SHOCK ", "INSIDE", " C-ON ", "DZZLE "
      };
      fem::data_of_type_str data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(i, 1, 4) {
        data, w(2, i);
      }
    }
    {
      static const char* values[] = {
        "SHOCK ", "OUTSID", "E  C-D", "NOZZLE"
      };
      fem::data_of_type_str data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(i, 1, 4) {
        data, w(3, i);
      }
    }
    {
      static const char* values[] = {
        "SUBSON", "IC CON", "VERG. ", "NOZZLE"
      };
      fem::data_of_type_str data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(i, 1, 4) {
        data, w(4, i);
      }
    }
    {
      static const char* values[] = {
        "SONIC ", "CONVER", "GENT N", "OZZLE "
      };
      fem::data_of_type_str data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(i, 1, 4) {
        data, w(5, i);
      }
    }
  }
  float tb = fem::float0;
  float ah = fem::float0;
  float t26 = fem::float0;
  float pcbld = fem::float0;
  arr_1d<80, float> ans1(fem::fill0);
  arr_1d<80, float> ans2(fem::fill0);
  arr_1d<80, float> ans3(fem::fill0);
  arr_1d<80, float> ans4(fem::fill0);
  arr_1d<80, float> ans5(fem::fill0);
  float ab = fem::float0;
  static const char* format_14 = "(' ')";
  static const char* format_15 = "(' ',8e15.6)";
  //C
  //C        EQUIVALENCE  (ANS1,PCNFGU), (ANS2,T1), (ANS3,XP1), (ANS4,WG6)
  //C        EQUIVALENCE  (ANS5,S50)
  //C
  tprint += dtprnt;
  if (itran == 1) {
    write(6, "('0',20x,'  TIME=',f7.4)"), time;
  }
  //C
  word = aword1;
  if (cmn.idburn > 0) {
    goto statement_2;
  }
  if (cmn.iaftbn > 0) {
    goto statement_1;
  }
  write(6,
    "('0',a6,14x,'    AM=',f7.3,6x,'  ALTP=',f7.0,6x,'    TB=',f8.2,25x,"
    "'  ETAR=',f7.4)"),
    word, am, altp, tb, etar;
  goto statement_3;
  statement_1:
  write(6,
    "('0',a6,14x,'    AM=',f7.3,6x,' ALTP=,',f7.0,6x,'    TB=',f8.2,25x,"
    "'    T7=',f7.2,8x,'  ETAR=',f7.6)"),
    word, am, altp, tb, cmn.t7, etar;
  goto statement_3;
  statement_2:
  write(6,
    "('0',a6,16x,'    AM=',f7.3,6x,'  ALTP=',f7.0,6x,'    TB=',f8.2,25x,"
    "'   T26=',f8.2,5x,'  ETAR=',f7.6)"),
    word, ah, altp, tb, t26, etar;
  statement_3:
  if (fxfn2m) {
    write(6,
      "('OFAN AND MIDDLE SPOOL ARE ATTACHED, USE ',"
      "'INNER AND OUTER TURBINES')");
  }
  if (fxm2cp) {
    write(6,
      "('OMDOLE AND COMPRESSOR SPOOLS ARE ATTACHED, USE ,',"
      "'MIDDLE AND OUTER TURBINES')");
  }
  if (fan) {
    goto statement_25;
  }
  write(6, "('0',i4,' SPOOL TURBOJET')"), ispool;
  goto statement_27;
  statement_25:
  if (!fxfn2m && (!fxm2cp) && (!dumspl)) {
    write(6, "('OTHREE SPOOL ENGINE')");
  }
  if (dumspl) {
    write(6, "('0MIDDLE SPOOL IS DUMMY')");
  }
  if (pcblid == 0.f) {
    write(6, "('ONO AIRFLOW INTO WING')");
  }
  if (pcblid == 0.f && aftfan) {
    write(6, "('*',22x,',   AFT-TURBOFAN')");
  }
  if (pcbld != 0.f && aftfan) {
    write(6, "('0 AFT-TURBOFAN')");
  }
  statement_27:
  conout(cmn, 2);
  {
    write_loop wloop(cmn, 6,
      "('OMAIN ',4a6,9x,'FG=',f9.2,10x,'FN=',f9.2,18x,'SFC=',f8.5)");
    FEM_DO_SAFE(i, 1, 4) {
      wloop, w(cmn.imshoc, i);
    }
    wloop, cmn.fg, cmn.fn, cmn.sfc;
  }
  if (cmn.igasmx > 0 || !fan) {
    goto statement_4;
  }
  {
    write_loop wloop(cmn, 6, "('  DUCT',a6)");
    FEM_DO_SAFE(i, 1, 6) {
      wloop, w(cmn.idshoc, 1);
    }
  }
  statement_4:
  write(6, "('OCONVERGED AFTER',i4,' LOOPS',/,'1')"), cmn.looper;
  if (ides != 1) {
    goto statement_5;
  }
  word = aword2;
  write(6, "(' ',a6,9x,7e15.6,i4)"), word, cmn.zf, cmn.pcnf, zi,
    pcni, cmn.zc, cmn.pcnc, tb, cmn.mode;
  write(6, format_14);
  {
    write_loop wloop(cmn, 6, format_15);
    FEM_DO_SAFE(i, 1, 80) {
      wloop, ans1(i);
    }
  }
  write(6, format_14);
  {
    write_loop wloop(cmn, 6, format_15);
    FEM_DO_SAFE(i, 1, 80) {
      wloop, ans2(i);
    }
  }
  write(6, format_14);
  {
    write_loop wloop(cmn, 6, format_15);
    FEM_DO_SAFE(i, 1, 80) {
      wloop, ans3(i);
    }
  }
  write(6, format_14);
  {
    write_loop wloop(cmn, 6, format_15);
    FEM_DO_SAFE(i, 1, 80) {
      wloop, ans4(i);
    }
  }
  write(6, format_14);
  {
    write_loop wloop(cmn, 6, format_15);
    FEM_DO_SAFE(i, 1, 80) {
      wloop, ans5(i);
    }
  }
  write(6, format_14);
  write(6, format_14);
  if (ides == 1) {
    goto statement_6;
  }
  statement_5:
  //C
  ab = cmn.a8sav;
  cmn.a9 = cmn.a9sav;
  cmn.a28 = cmn.a28sav;
  cmn.a29 = cmn.a29sav;
  //C
  if (cmn.idump != 2) {
    goto statement_6;
  }
  write(6, "('1')");
  syg(cmn, 2);
  statement_6:
  engbal(cmn);
  //C
}

struct perf_save
{
  fem::variant_bindings all5_bindings;
  fem::variant_bindings dyn_bindings;
  fem::variant_bindings units_bindings;
  char aword[10];

  perf_save() :
    aword("")
  {}
};

void
perf(
  common& cmn)
{
  FEM_CMN_SVE(perf);
  float& p1 = cmn.p1;
  float& waf = cmn.waf;
  float& va = cmn.va;
  float& frd = cmn.frd;
  float& vjd = cmn.vjd;
  float& fgmd = cmn.fgmd;
  float& vjm = cmn.vjm;
  float& fgmm = cmn.fgmm;
  float& fgpd = cmn.fgpd;
  float& fgpm = cmn.fgpm;
  float& fgp = cmn.fgp;
  float& wft = cmn.wft;
  float& fg = cmn.fg;
  float& fn = cmn.fn;
  float& sfc = cmn.sfc;
  float& wa32 = cmn.wa32;
  float& fgmwng = cmn.fgmwng;
  float& fgpwng = cmn.fgpwng;
  float& fnwing = cmn.fnwing;
  float& fnmain = cmn.fnmain;
  float& vjw = cmn.vjw;
  //
  common_variant all5(cmn.common_all5, sve.all5_bindings);
  common_variant dyn(cmn.common_dyn, sve.dyn_bindings);
  common_variant units(cmn.common_units, sve.units_bindings);
  char* aword= sve.aword;;
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> s50;
      mbr<float> wa22;
      mbr<float> zi;
      mbr<float> pcni;
      mbr<float> cni;
      mbr<float> pri;
      mbr<float> etai;
      mbr<float> waci;
      mbr<float> tffip;
      mbr<float> cnip;
      mbr<float> etatip;
      mbr<float> dhtcip;
      mbr<float> dhti;
      mbr<float> blip;
      mbr<float> pcblip;
      mbr<float> pcnigu;
      mbr<float> zids;
      mbr<float> pcnids;
      mbr<float> prids;
      mbr<float> etaids;
      mbr<float> waids;
      mbr<float> pricf;
      mbr<float> etaicf;
      mbr<float> waicf;
      mbr<float> tfipds;
      mbr<float> cnipds;
      mbr<float> etipds;
      mbr<float> tfipcf;
      mbr<float> cnipcf;
      mbr<float> etipcf;
      mbr<float> dhipcf;
      mbr<float> waicds;
      mbr<float> wai;
      mbr<float> pcbli;
      mbr<float> bli;
      mbr<float> t22ds;
      mbr<float> wa21;
      mbr<float> wg50;
      mbr<float> far50;
      mbr<float> a24;
      mbr<float> ar23;
      mbr<bool> dumspl;
      mbr<float> fxfn2m;
      mbr<float> fxm2cp;
      mbr<bool> aftfan;
      mbr<float> punt;
      mbr<float> pcblid;
      mbr<float> p6dsav;
      mbr<float> am6dsv;
      mbr<float> etaasv;
      mbr<float> far7sv;
      mbr<float> t4pbl;
      mbr<float> t41;
      mbr<bool> fan;
      mbr<int> ispool;
      all5.allocate(), s50, wa22, zi, pcni, cni, pri, etai, waci,
        tffip, cnip, etatip, dhtcip, dhti, blip, pcblip, pcnigu,
        zids, pcnids, prids, etaids, waids, pricf, etaicf, waicf,
        tfipds, cnipds, etipds, tfipcf, cnipcf, etipcf, dhipcf,
        waicds, wai, pcbli, bli, t22ds, wa21, wg50, far50, a24, ar23,
        dumspl, fxfn2m, fxm2cp, aftfan, punt, pcblid, p6dsav, am6dsv,
        etaasv, far7sv, t4pbl, t41, fan, ispool;
    }
    {
      mbr<int> itran;
      mbr<float> time;
      mbr<float> dt;
      mbr<float> tf;
      mbr<int> jtran;
      mbr<int> nstep;
      mbr<float> tprnt;
      mbr<float> dtprnt;
      dyn.allocate(), itran, time, dt, tf, jtran, nstep, tprnt, dtprnt;
    }
    {
      mbr<bool> si;
      units.allocate(), si;
    }
  }
  /* float const& s50 */ all5.bind<float>();
  /* float const& wa22 */ all5.bind<float>();
  /* float const& zi */ all5.bind<float>();
  float& pcni = all5.bind<float>();
  float& cni = all5.bind<float>();
  /* float const& pri */ all5.bind<float>();
  /* float const& etai */ all5.bind<float>();
  /* float const& waci */ all5.bind<float>();
  /* float const& tffip */ all5.bind<float>();
  /* float const& cnip */ all5.bind<float>();
  /* float const& etatip */ all5.bind<float>();
  /* float const& dhtcip */ all5.bind<float>();
  /* float const& dhti */ all5.bind<float>();
  /* float const& blip */ all5.bind<float>();
  /* float const& pcblip */ all5.bind<float>();
  /* float const& pcnigu */ all5.bind<float>();
  /* float const& zids */ all5.bind<float>();
  /* float const& pcnids */ all5.bind<float>();
  /* float const& prids */ all5.bind<float>();
  /* float const& etaids */ all5.bind<float>();
  /* float const& waids */ all5.bind<float>();
  /* float const& pricf */ all5.bind<float>();
  /* float const& etaicf */ all5.bind<float>();
  /* float const& waicf */ all5.bind<float>();
  /* float const& tfipds */ all5.bind<float>();
  /* float const& cnipds */ all5.bind<float>();
  /* float const& etipds */ all5.bind<float>();
  /* float const& tfipcf */ all5.bind<float>();
  /* float const& cnipcf */ all5.bind<float>();
  /* float const& etipcf */ all5.bind<float>();
  /* float const& dhipcf */ all5.bind<float>();
  /* float const& waicds */ all5.bind<float>();
  float const& wai = all5.bind<float>();
  /* float const& pcbli */ all5.bind<float>();
  /* float const& bli */ all5.bind<float>();
  /* float const& t22ds */ all5.bind<float>();
  /* float const& wa21 */ all5.bind<float>();
  /* float const& wg50 */ all5.bind<float>();
  /* float const& far50 */ all5.bind<float>();
  /* float const& a24 */ all5.bind<float>();
  /* float const& ar23 */ all5.bind<float>();
  bool const& dumspl = all5.bind<bool>();
  /* float const& fxfn2m */ all5.bind<float>();
  /* float const& fxm2cp */ all5.bind<float>();
  bool const& aftfan = all5.bind<bool>();
  /* float const& punt */ all5.bind<float>();
  float const& pcblid = all5.bind<float>();
  /* float const& p6dsav */ all5.bind<float>();
  /* float const& am6dsv */ all5.bind<float>();
  /* float const& etaasv */ all5.bind<float>();
  /* float const& far7sv */ all5.bind<float>();
  /* float const& t4pbl */ all5.bind<float>();
  /* float const& t41 */ all5.bind<float>();
  bool const& fan = all5.bind<bool>();
  /* int const& ispool */ all5.bind<int>();
  /* int const& itran */ dyn.bind<int>();
  float const& time = dyn.bind<float>();
  /* float const& dt */ dyn.bind<float>();
  /* float const& tf */ dyn.bind<float>();
  /* int const& jtran */ dyn.bind<int>();
  /* int const& nstep */ dyn.bind<int>();
  /* float const& tprnt */ dyn.bind<float>();
  /* float const& dtprnt */ dyn.bind<float>();
  bool const& si = units.bind<bool>();
  if (is_called_first_time) {
    aword = "  PERF";
  }
  float g = fem::float0;
  float capsf = fem::float0;
  float wat = fem::float0;
  float fgwing = fem::float0;
  float gapsf = fem::float0;
  float fgwng = fem::float0;
  float vasna32 = fem::float0;
  float fnhing = fem::float0;
  float fgdd = fem::float0;
  float fgmn = fem::float0;
  float fgnd = fem::float0;
  float fgn = fem::float0;
  float ffan = fem::float0;
  float fcore = fem::float0;
  float fdes = fem::float0;
  float tran = fem::float0;
  float tprint = fem::float0;
  //C
  cmn.word = aword;
  //C
  if (si) {
    goto statement_100;
  }
  g = 32.174049f;
  capsf = 2116.2170f;
  goto statement_101;
  statement_100:
  g = 1.0f;
  capsf = 1.0f;
  statement_101:
  //C
  wft = cmn.wfb + cmn.wfd + cmn.wfa;
  wat = waf - cmn.blob;
  if (aftfan) {
    wat += wai;
  }
  cmn.wgt = wat + wft;
  cmn.fart = wft / wat;
  va = cmn.am * cmn.cs;
  frd = va * waf / g;
  if (aftfan) {
    frd = va * (waf + wai) / g;
  }
  vjm = cmn.cvmnoz * cmn.v9;
  fgmm = vjm * cmn.wg7 / g;
  fgpm = capsf * (cmn.ps9 - p1) * cmn.a9;
  if (cmn.igasmx > 0 || !fan) {
    goto statement_1;
  }
  vjd = cmn.cvdnoz * cmn.v29;
  fgmd = vjd * cmn.wg24 / g;
  fgpd = capsf * (cmn.ps29 - p1) * cmn.a29;
  statement_1:
  vjw = 0.f;
  fgmwng = 0.f;
  fgpwng = 0.f;
  fgwing = 0.f;
  fnwing = 0.f;
  //C
  if (pcblid == 0) {
    goto statement_2;
  }
  vjw = cmn.cvdwng * cmn.v39;
  fgmwng = vjw * cmn.wg37 / g;
  fgpwng = gapsf * (cmn.ps39 - p1) * cmn.a39;
  fgwing += fgwng;
  fnhing = fgwing - vasna32 / g;
  statement_2:
  cmn.fgm = fgmm + fgdd + fgmwng;
  fgp = fgpm + fgmd + fgpwng;
  fnmain = (fgmm + fgmd + fgpm + fgpd) - va * (waf - wa32) / g;
  if (aftfan) {
    fnmain = (fgmn + fgnd + fgpm + fgpd) - va * (waf + wai - wa32) / g;
  }
  fg = fgn + fgp;
  fn = fg - frd;
  sfc = 3600.f * wft / fn;
  fg = cmn.delfg * fg;
  fn = cmn.delfn * fn;
  sfc = cmn.delsfc * sfc;
  ffan = fgmd + fgpd - va * cmn.wad / g;
  fcore = fnmain - ffan;
  cmn.ffovfn = ffan / fn;
  cmn.fcovfn = fcore / fn;
  cmn.fwovfn = fnwing / fn;
  cmn.fmnofn = fnmain / fn;
  if (cmn.ides == 1) {
    fdes = fn;
  }
  cmn.fnovfd = fn / fdes;
  if (!dumspl) {
    goto statement_3;
  }
  pcni = 1.0f;
  cni = 0.f;
  statement_3:
  if (tran == 1.f && time < tprint) {
    engbal(cmn);
  }
  output(cmn);
  error(cmn);
}

struct zero_save
{
  fem::variant_bindings all5_bindings;
};

void
zero(
  common& cmn)
{
  FEM_CMN_SVE(zero);
  // COMMON all2
  float& t2 = cmn.t2;
  float& p2 = cmn.p2;
  float& t4 = cmn.t4;
  //
  common_variant all5(cmn.common_all5, sve.all5_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> s50;
      mbr<float> wa22;
      mbr<float> zi;
      mbr<float> pcni;
      mbr<float> cni;
      mbr<float> pri;
      mbr<float> etai;
      mbr<float> waci;
      mbr<float> tffip;
      mbr<float> cnip;
      mbr<float> etatip;
      mbr<float> dhtcip;
      mbr<float> dhti;
      mbr<float> blip;
      mbr<float> pcblip;
      mbr<float> pcnigu;
      mbr<float> zids;
      mbr<float> pcnids;
      mbr<float> prids;
      mbr<float> etaids;
      mbr<float> waids;
      mbr<float> pricf;
      mbr<float> etaicf;
      mbr<float> waicf;
      mbr<float> tfipds;
      mbr<float> cnipds;
      mbr<float> etipds;
      mbr<float> tfipcf;
      mbr<float> cnipcf;
      mbr<float> etipcf;
      mbr<float> dhipcf;
      mbr<float> waicds;
      mbr<float> wai;
      mbr<float> pcbli;
      mbr<float> bli;
      mbr<float> t22ds;
      mbr<float> wa21;
      mbr<float> wg50;
      mbr<float> far50;
      mbr<float> a24;
      mbr<float> ar23;
      mbr<float> dumspl;
      mbr<float> fxfn2m;
      mbr<float> fxm2cp;
      mbr<float> aftfan;
      mbr<float> punt;
      mbr<float> pcblid;
      mbr<float> p6dsav;
      mbr<float> am6dsv;
      mbr<float> etaasv;
      mbr<float> far7sv;
      mbr<float> t4pbl;
      mbr<float> t41;
      mbr<float> fan;
      mbr<int> ispool;
      all5.allocate(), s50, wa22, zi, pcni, cni, pri, etai, waci,
        tffip, cnip, etatip, dhtcip, dhti, blip, pcblip, pcnigu,
        zids, pcnids, prids, etaids, waids, pricf, etaicf, waicf,
        tfipds, cnipds, etipds, tfipcf, cnipcf, etipcf, dhipcf,
        waicds, wai, pcbli, bli, t22ds, wa21, wg50, far50, a24, ar23,
        dumspl, fxfn2m, fxm2cp, aftfan, punt, pcblid, p6dsav, am6dsv,
        etaasv, far7sv, t4pbl, t41, fan, ispool;
    }
  }
  /* float const& s50 */ all5.bind<float>();
  /* float const& wa22 */ all5.bind<float>();
  /* float const& zi */ all5.bind<float>();
  /* float const& pcni */ all5.bind<float>();
  /* float const& cni */ all5.bind<float>();
  /* float const& pri */ all5.bind<float>();
  /* float const& etai */ all5.bind<float>();
  /* float const& waci */ all5.bind<float>();
  /* float const& tffip */ all5.bind<float>();
  /* float const& cnip */ all5.bind<float>();
  /* float const& etatip */ all5.bind<float>();
  /* float const& dhtcip */ all5.bind<float>();
  /* float const& dhti */ all5.bind<float>();
  /* float const& blip */ all5.bind<float>();
  /* float const& pcblip */ all5.bind<float>();
  /* float const& pcnigu */ all5.bind<float>();
  /* float const& zids */ all5.bind<float>();
  /* float const& pcnids */ all5.bind<float>();
  /* float const& prids */ all5.bind<float>();
  /* float const& etaids */ all5.bind<float>();
  /* float const& waids */ all5.bind<float>();
  /* float const& pricf */ all5.bind<float>();
  /* float const& etaicf */ all5.bind<float>();
  /* float const& waicf */ all5.bind<float>();
  /* float const& tfipds */ all5.bind<float>();
  /* float const& cnipds */ all5.bind<float>();
  /* float const& etipds */ all5.bind<float>();
  /* float const& tfipcf */ all5.bind<float>();
  /* float const& cnipcf */ all5.bind<float>();
  /* float const& etipcf */ all5.bind<float>();
  /* float const& dhipcf */ all5.bind<float>();
  /* float const& waicds */ all5.bind<float>();
  /* float const& wai */ all5.bind<float>();
  /* float const& pcbli */ all5.bind<float>();
  /* float const& bli */ all5.bind<float>();
  /* float const& t22ds */ all5.bind<float>();
  /* float const& wa21 */ all5.bind<float>();
  /* float const& wg50 */ all5.bind<float>();
  /* float const& far50 */ all5.bind<float>();
  /* float const& a24 */ all5.bind<float>();
  /* float const& ar23 */ all5.bind<float>();
  /* float const& dumspl */ all5.bind<float>();
  /* float const& fxfn2m */ all5.bind<float>();
  /* float const& fxm2cp */ all5.bind<float>();
  /* float const& aftfan */ all5.bind<float>();
  /* float const& punt */ all5.bind<float>();
  /* float const& pcblid */ all5.bind<float>();
  /* float const& p6dsav */ all5.bind<float>();
  /* float const& am6dsv */ all5.bind<float>();
  /* float const& etaasv */ all5.bind<float>();
  /* float const& far7sv */ all5.bind<float>();
  /* float const& t4pbl */ all5.bind<float>();
  /* float const& t41 */ all5.bind<float>();
  /* float const& fan */ all5.bind<float>();
  /* int const& ispool */ all5.bind<int>();
  //C
  //C        Zeros nearly all of common and certain controls
  //C
  //C        EQUIVALENCE (Z1, T1), (Z2, P1), (Z3, XT55), (Z4, XFAR55)
  cmn.ides = 0;
  cmn.jdes = 0;
  cmn.init = 0;
  cmn.idburn = 0;
  cmn.iaftbn = 0;
  cmn.idshoc = 3;
  cmn.imshoc = 3;
  cmn.nozflt = 0;
  float t2q = t2;
  float p2q = p2;
  float t4q = t4;
  int i = fem::int0;
  arr_1d<63, float> z1(fem::fill0);
  FEM_DO_SAFE(i, 1, 63) {
    z1(i) = 0.f;
  }
  arr_1d<48, float> z2(fem::fill0);
  FEM_DO_SAFE(i, 1, 48) {
    z2(i) = 0.f;
  }
  arr_1d<10, float> z3(fem::fill0);
  FEM_DO_SAFE(i, 1, 10) {
    z3(i) = 0.f;
  }
  arr_1d<62, float> z4(fem::fill0);
  FEM_DO_SAFE(i, 1, 62) {
    z4(i) = 0.f;
  }
  //C
  t2 = t2q;
  p2 = p2q;
  t4 = t4q;
  syg(cmn, 1);
}

struct putin_save
{
  fem::variant_bindings all5_bindings;
  fem::variant_bindings dyn_bindings;
  fem::variant_bindings looppr_bindings;
  fem::variant_bindings rpms_bindings;
  fem::variant_bindings units_bindings;
  fem::variant_bindings vols_bindings;
  char aword[10];

  putin_save() :
    aword("")
  {}
};

void
putin(
  common& cmn)
{
  FEM_CMN_SVE(putin);
  common_read read(cmn);
  common_write write(cmn);
  int& ides = cmn.ides;
  int& mode = cmn.mode;
  int& idburn = cmn.idburn;
  int& iaftbn = cmn.iaftbn;
  int& nozflt = cmn.nozflt;
  float& prfds = cmn.prfds;
  float& prcds = cmn.prcds;
  float& am = cmn.am;
  float& altp = cmn.altp;
  float& t24 = cmn.t24;
  float& t7 = cmn.t7;
  bool& errer = cmn.errer;
  //
  common_variant all5(cmn.common_all5, sve.all5_bindings);
  common_variant dyn(cmn.common_dyn, sve.dyn_bindings);
  common_variant rpms(cmn.common_rpms, sve.rpms_bindings);
  common_variant vols(cmn.common_vols, sve.vols_bindings);
  common_variant units(cmn.common_units, sve.units_bindings);
  common_variant looppr(cmn.common_looppr, sve.looppr_bindings);
  char* aword= sve.aword;;
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> s50;
      mbr<float> wa22;
      mbr<float> zi;
      mbr<float> pcni;
      mbr<float> cni;
      mbr<float> pri;
      mbr<float> etai;
      mbr<float> waci;
      mbr<float> tffip;
      mbr<float> cnip;
      mbr<float> etatip;
      mbr<float> dhtcip;
      mbr<float> dhti;
      mbr<float> blip;
      mbr<float> pcblip;
      mbr<float> pcnigu;
      mbr<float> zids;
      mbr<float> pcnids;
      mbr<float> prids;
      mbr<float> etaids;
      mbr<float> waids;
      mbr<float> pricf;
      mbr<float> etaicf;
      mbr<float> waicf;
      mbr<float> tfipds;
      mbr<float> cnipds;
      mbr<float> etipds;
      mbr<float> tfipcf;
      mbr<float> cnipcf;
      mbr<float> etipcf;
      mbr<float> dhipcf;
      mbr<float> waicds;
      mbr<float> wai;
      mbr<float> pcbli;
      mbr<float> bli;
      mbr<float> t22ds;
      mbr<float> wa21;
      mbr<float> wg50;
      mbr<float> far50;
      mbr<float> a24;
      mbr<float> ar23;
      mbr<bool> dumspl;
      mbr<bool> fxfn2m;
      mbr<bool> fxm2cp;
      mbr<bool> aftfan;
      mbr<float> punt;
      mbr<float> pcblid;
      mbr<float> p6dsav;
      mbr<float> am6dsv;
      mbr<float> etaasv;
      mbr<float> far7sv;
      mbr<float> t4pbl;
      mbr<float> t41;
      mbr<bool> fan;
      mbr<int> ispool;
      all5.allocate(), s50, wa22, zi, pcni, cni, pri, etai, waci,
        tffip, cnip, etatip, dhtcip, dhti, blip, pcblip, pcnigu,
        zids, pcnids, prids, etaids, waids, pricf, etaicf, waicf,
        tfipds, cnipds, etipds, tfipcf, cnipcf, etipcf, dhipcf,
        waicds, wai, pcbli, bli, t22ds, wa21, wg50, far50, a24, ar23,
        dumspl, fxfn2m, fxm2cp, aftfan, punt, pcblid, p6dsav, am6dsv,
        etaasv, far7sv, t4pbl, t41, fan, ispool;
    }
    {
      mbr<int> itran;
      mbr<float> time;
      mbr<float> tf;
      mbr<int> jtran;
      mbr<int> nstep;
      mbr<float> tprint;
      mbr<float> dtprnt;
      dyn.allocate(), itran, time, tf, jtran, nstep, tprint, dtprnt;
    }
    {
      mbr<float> xnhpds;
      mbr<float> xnipds;
      mbr<float> xnlpds;
      mbr<float> pmihp;
      mbr<float> pmilp;
      rpms.allocate(), xnhpds, xnipds, xnlpds, pmihp, pmilp;
    }
    {
      mbr<float> vfan;
      mbr<float> vintc;
      mbr<float> vcomp;
      mbr<float> vcomb;
      mbr<float> vhptrb;
      mbr<float> viptrb;
      mbr<float> vlptrb;
      mbr<float> vaftbn;
      mbr<float> vfduct;
      mbr<float> vwduct;
      vols.allocate(), vfan, vintc, vcomp, vcomb, vhptrb, viptrb,
        vlptrb, vaftbn, vfduct, vwduct;
    }
    {
      mbr<bool> si;
      units.allocate(), si;
    }
    {
      mbr<int> kkgo;
      mbr<float> prfnew;
      mbr<float> prcnew;
      looppr.allocate(), kkgo, prfnew, prcnew;
    }
  }
  /* float const& s50 */ all5.bind<float>();
  /* float const& wa22 */ all5.bind<float>();
  /* float const& zi */ all5.bind<float>();
  /* float const& pcni */ all5.bind<float>();
  /* float const& cni */ all5.bind<float>();
  /* float const& pri */ all5.bind<float>();
  /* float const& etai */ all5.bind<float>();
  float& waci = all5.bind<float>();
  /* float const& tffip */ all5.bind<float>();
  /* float const& cnip */ all5.bind<float>();
  /* float const& etatip */ all5.bind<float>();
  /* float const& dhtcip */ all5.bind<float>();
  /* float const& dhti */ all5.bind<float>();
  /* float const& blip */ all5.bind<float>();
  /* float const& pcblip */ all5.bind<float>();
  /* float const& pcnigu */ all5.bind<float>();
  /* float const& zids */ all5.bind<float>();
  /* float const& pcnids */ all5.bind<float>();
  /* float const& prids */ all5.bind<float>();
  /* float const& etaids */ all5.bind<float>();
  /* float const& waids */ all5.bind<float>();
  /* float const& pricf */ all5.bind<float>();
  /* float const& etaicf */ all5.bind<float>();
  /* float const& waicf */ all5.bind<float>();
  /* float const& tfipds */ all5.bind<float>();
  /* float const& cnipds */ all5.bind<float>();
  /* float const& etipds */ all5.bind<float>();
  /* float const& tfipcf */ all5.bind<float>();
  /* float const& cnipcf */ all5.bind<float>();
  /* float const& etipcf */ all5.bind<float>();
  /* float const& dhipcf */ all5.bind<float>();
  float& waicds = all5.bind<float>();
  /* float const& wai */ all5.bind<float>();
  /* float const& pcbli */ all5.bind<float>();
  /* float const& bli */ all5.bind<float>();
  /* float const& t22ds */ all5.bind<float>();
  /* float const& wa21 */ all5.bind<float>();
  /* float const& wg50 */ all5.bind<float>();
  /* float const& far50 */ all5.bind<float>();
  /* float const& a24 */ all5.bind<float>();
  /* float const& ar23 */ all5.bind<float>();
  bool const& dumspl = all5.bind<bool>();
  /* bool const& fxfn2m */ all5.bind<bool>();
  /* bool const& fxm2cp */ all5.bind<bool>();
  /* bool const& aftfan */ all5.bind<bool>();
  /* float const& punt */ all5.bind<float>();
  /* float const& pcblid */ all5.bind<float>();
  /* float const& p6dsav */ all5.bind<float>();
  /* float const& am6dsv */ all5.bind<float>();
  /* float const& etaasv */ all5.bind<float>();
  /* float const& far7sv */ all5.bind<float>();
  /* float const& t4pbl */ all5.bind<float>();
  /* float const& t41 */ all5.bind<float>();
  /* bool const& fan */ all5.bind<bool>();
  /* int const& ispool */ all5.bind<int>();
  int& itran = dyn.bind<int>();
  float& time = dyn.bind<float>();
  /* float const& tf */ dyn.bind<float>();
  int& jtran = dyn.bind<int>();
  int& nstep = dyn.bind<int>();
  float& tprint = dyn.bind<float>();
  float& dtprnt = dyn.bind<float>();
  /* float const& xnhpds */ rpms.bind<float>();
  /* float const& xnipds */ rpms.bind<float>();
  /* float const& xnlpds */ rpms.bind<float>();
  /* float const& pmihp */ rpms.bind<float>();
  /* float const& pmilp */ rpms.bind<float>();
  /* float const& vfan */ vols.bind<float>();
  /* float const& vintc */ vols.bind<float>();
  /* float const& vcomp */ vols.bind<float>();
  /* float const& vcomb */ vols.bind<float>();
  /* float const& vhptrb */ vols.bind<float>();
  /* float const& viptrb */ vols.bind<float>();
  /* float const& vlptrb */ vols.bind<float>();
  /* float const& vaftbn */ vols.bind<float>();
  /* float const& vfduct */ vols.bind<float>();
  /* float const& vwduct */ vols.bind<float>();
  /* bool const& si */ units.bind<bool>();
  int& kkgo = looppr.bind<int>();
  float const& prfnew = looppr.bind<float>();
  float const& prcnew = looppr.bind<float>();
  if (is_called_first_time) {
    aword = " PUTIN";
  }
  float datain = fem::float0;
  int i = fem::int0;
  arr<float> xsave(dimension(405), fem::fill0);
  arr_1d<1, float> xfill(fem::fill0);
  float des = fem::float0;
  float wafcds = fem::float0;
  float waccds = fem::float0;
  int macc = fem::int0;
  //C
  //C        EQUIVALENCE     (XFILL,IDES)
  //C
  //C        IDES    =1      FOR CALCULATING DESIGN POINT
  //C        ITRAN   =1      THIS POINT IS THE IC FOR A TRANSIENT
  //C
  //C        MODE    =0      FOR CONSTANT T4
  //C        MODE    =1      FOR CONSTANT PCNC
  //C        MODE    =2      FOR CONSTANT WFB
  //C        MODE    =3      FOR CONSTANT PCNF
  //C
  //C        INIT    =1      WILL NOT INITIALISE POINT
  //C
  //C        IDUMP   =1      WILL DUMP LOOPING DRITE-OUTS IF ERROR OCCURS
  //C        IDUMP   =2      WILL DUMP LOOPING DRITE-OUTS AFTER EVERY POINT
  //C
  //C        IAMTP   =0      WILL USE INPUT AM ANO MIL SPEC ETAR
  //C        IAMTP   =1      WILL USE INPUT AM AND INPUT ETAR
  //C        IAMTP   =2      WILL USE T1=TI+DELT1 AND STANDARD P1
  //C        IAMTP   =3      WILL USE P2 AND STANDARD T1
  //C        AMTP    =4      WILL USE T2 AND P2
  //C        IAMTP   =5      WILL USE RAM2 FOR SPECIAL RECOVERY
  //C
  //C        IGASMX  =-1     SEPARATE FLOW, INPUT    AM6
  //C        IGASMX  =0      SEPARATE FLOW, A6=A55
  //C        IGASMX  =1      WILL MIX DUCT AND MAIN STREAMS, A6=A25+A55
  //C        IGASMX  =2      WILL MIX DUCT AND MAIN STREAMS, INPUT AM6
  //C
  //C        IDBURN  =1      FOR DUCT BURNING, INPUT T24
  //C        IDBURN  =2      FOR DUCT BURNING, INPUT WFD
  //C
  //C        IAFTBN  =1      FOR AFTERBURNING, INPUT T7
  //C        IAFTBN  =2      FOR AFTERBURNING, INPUT WFA
  //C
  //C        IDCD    =1      DUCT NOZZLE WILL BE C-D
  //C
  //C        IMCD    =1      MAIN NOZZLE WILL BE C-D
  //C
  //C        NOZFLT  =1      FOR FLOATING MAIN NOZZLE
  //C        NOZFLT  =2      FOR FLOATING DUCT NOZZLE
  //C        NOZFLT  =3      FOR FLOATING MAIN AND DUCT NOZZLES
  //C
  //C        ITRYS   =N      NUMBER OF PASSES THRU ENGINE BEFORE QUITTING
  //C
  //C        NAMELIST        /DATAIN/
  //C     1  ISPOOL, FAN,    SI, DELT1,      IDES,   MODE,   IDUMP,  IAMTP,
  //C     2  IGASMX, IDBURN, IAFTBN, IDCD,   IMCD,   NOZFLT, ITRYS,  ZFXFNZM,
  //C     3  FXNZCP, AFTFAN, DUMSPL, TOLALL, DELFG,  DELFN,  DELSFC, PCNFDS,
  //C     4  PRFDS,  ETAFDS, PCNCDS, PRCDS,  ETACDS, T4DS,   WFBDS,  ETABDS,
  //C     5  DPCODS, ETHPDS, ETLPDS, DPDUDS, T7DS,   ETAAOS, DPAFDS, A6,
  //C     6  A8,     A28,    PS55,   AM55,   CVONOZ, CVMNOZ, T2,     P2,
  //C     7  T4,     WAFCDS, WACCDS, HPEXT,  AM,     ALTP,   ETAR,   PCNF,
  //C     8  PCNC,   FS,     PCBLF,  PCBLC,  PCBLDU, PCBLOB, PCBLHP, PCBLLP,
  //C     9  T24,    ETAD,   TT,     DFA,    ETAA,   AM6,    AM23,   DPWGDS,
  //C     A  A38,    PCNIDS, PCBLIP, ZFDS,   ZCDS,   ZIDS,   PCBLID, TFHPOS,
  //C     B  NHPOS,  TFIPDS, CNIPDS, TFLPDS, CNLPDS, PRIDS,  ETAIDS, ETIPOS,
  //C     C  DAICDS, PCBLI,  CVDWNG, ITRAN,  DTPRNT, TF,     INIT,   DT,
  //C     D  NHPDS,  XNIPDS, XNLPDS, PMIHP,  PMIIP,  PMILP,  VFAN,   VINTC,
  //C     E  VCOMP,  VCOMB,  VHPTRB, VIPTRB, VLPTRB, VAFTBN, VPOUCT, VDOUCT
  //C
  cmn.word = aword;
  itran = 0;
  jtran = 0;
  time = 0.0f;
  nstep = 0;
  tprint = 0.0f;
  dtprnt = 0.0f;
  //C
  statement_1:
  zero(cmn);
  if (kkgo == 1) {
    goto statement_5;
  }
  ides = 0;
  //C
  read(5, datain);
  if (errer && iaftbn > 0) {
    goto statement_1;
  }
  if (errer && idburn > 0) {
    goto statement_1;
  }
  if (errer && nozflt > 0) {
    goto statement_1;
  }
  //C
  errer = false;
  //C
  //C        TABLE IS REFERENCED TO COMMON/ALL/FIRST ENTRY
  //C
  if (ides == 0) {
    goto statement_7;
  }
  if (kkgo != 2) {
    goto statement_3;
  }
  //C
  FEM_DO_SAFE(i, 1, 397) {
    xfill(i) = xsave(i);
  }
  read(5, datain);
  statement_3:
  //C
  //C        SAVE INPUT IN CASE OF LOOP ON PRESSURE RATIOS
  //C
  FEM_DO_SAFE(i, 1, 397) {
    xsave(i) = xfill(i);
  }
  goto statement_7;
  statement_5:
  FEM_DO_SAFE(i, 1, 397) {
    xfill(i) = xsave(i);
  }
  //C
  write(6,
    "('OCHANGE PRFDS FROM',f9.3,'  TO',f9.3,'  AND PRCDS FROM',f10.3,'  TO',"
    "f10.3)"),
    prfds, prfnew, prcds, prcnew;
  prcds = prcnew;
  prfds = prfnew;
  statement_7:
  //C
  kkgo = 2;
  if (iaftbn > 0 || idburn > 0 || nozflt > 0) {
    cmn.init = 1;
  }
  //C
  if (mode == 0) {
    write(8,
      "('0','  IDES=',i3,10x,'    AM=',f7.3,6x,'  ALTP=',f7.0,6x,'  T4=  ',"
      "f8.2,5x,'   T24=',f8.2,5x,' T7=   ',f8.2,'$$$S$S')"),
      ides, am, altp, cmn.t4, t24, t7;
  }
  if (mode == 1) {
    write(8,
      "('0','  IDES=',i3,10x,'    AM=',f7.3,6x,'  ALTP=',f7.0,6x,'  PCNC=',"
      "f8.3,5x,'   T24=',f8.2,5x,' T7=   ',f8.2,'SS$$$$')"),
      ides, am, altp, cmn.pcnc, t24, t7;
  }
  if (mode == 2) {
    write(8,
      "('0','  IDES=',i3,10x,'    AH=',f7.3,6x,'  ALTP=',f7.0,6x,'  WFB=,',"
      "f8.6,5x,'   T24=',f8.2,5x,'  T7=  ',f8.2,'SSS$$S')"),
      ides, am, altp, cmn.wfb, t24, t7;
  }
  //C
  if (des == 1) {
    cmn.wafc = wafcds;
  }
  if (dumspl) {
    waicds = waccds;
  }
  if (ides == 1) {
    waci = waicds;
  }
  if (ides == 1) {
    macc = waccds;
  }
  //C
  coinlt(cmn);
  //C
}

void
roll(
  common& cmn)
{
  // COMMON soc
  arr_ref<float, 2> so(cmn.so, dimension(10, 6));
  // COMMON cdelay
  arr_ref<float, 2> pdata(cmn.pdata, dimension(5, 50));
  arr_ref<float> timept(cmn.timept, dimension(50));
  //
  //C
  //C        Saves past values of dynamic variables needed for calculating
  //C        derivatives, etc.
  //C
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, 50) {
    so(i, 2) = so(i, 1);
    so(i, 4) = so(i, 3);
  }
  //C
  FEM_DO_SAFE(i, 1, 10) {
    so(i, 6) = so(i, 5);
    so(i, 5) = so(i, 4);
    so(i, 3) = so(i, 2);
    so(i, 2) = so(i, 1);
  }
  //C
  int ni = fem::int0;
  int no = fem::int0;
  int j = fem::int0;
  int n1 = fem::int0;
  FEM_DO_SAFE(i, 1, 49) {
    ni = 51 - i;
    no = 50 - i;
    timept(ni) = timept(no);
    FEM_DO_SAFE(j, 1, 5) {
      pdata(j, n1) = pdata(j, no);
    }
  }
  //C
}

struct engbal_save
{
  fem::variant_bindings all5_bindings;
  fem::variant_bindings dyn_bindings;
  char aword[10];
  arr<float> del;
  arr<float> delsav;
  int nomisx;
  float vchnge;
  float vdelta;
  float vlim;

  engbal_save() :
    aword(""),
    del(dimension(9), fem::fill0),
    delsav(dimension(9), fem::fill0),
    nomisx(fem::int0),
    vchnge(fem::float0),
    vdelta(fem::float0),
    vlim(fem::float0)
  {}
};

void
engbal(
  common& cmn)
{
  FEM_CMN_SVE(engbal);
  common_write write(cmn);
  int& mode = cmn.mode;
  int& init = cmn.init;
  int& itrys = cmn.itrys;
  int& looper = cmn.looper;
  int& nomap = cmn.nomap;
  int& nummap = cmn.nummap;
  int& mapedg = cmn.mapedg;
  arr_cref<float> err(cmn.err, dimension(9));
  float& tfhpds = cmn.tfhpds;
  float& t4 = cmn.t4;
  float& zf = cmn.zf;
  float& pcnf = cmn.pcnf;
  float& zc = cmn.zc;
  float& pcnc = cmn.pcnc;
  float& tffhp = cmn.tffhp;
  float& tfflp = cmn.tfflp;
  //
  common_variant all5(cmn.common_all5, sve.all5_bindings);
  common_variant dyn(cmn.common_dyn, sve.dyn_bindings);
  char* aword= sve.aword;;
  arr_ref<float> del(sve.del, dimension(9));
  arr_ref<float> delsav(sve.delsav, dimension(9));
  int& nomisx = sve.nomisx;
  float& vchnge = sve.vchnge;
  float& vdelta = sve.vdelta;
  float& vlim = sve.vlim;
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> s50;
      mbr<float> wa22;
      mbr<float> zi;
      mbr<float> pcni;
      mbr<float> cni;
      mbr<float> pri;
      mbr<float> etai;
      mbr<float> waci;
      mbr<float> tffip;
      mbr<float> cnip;
      mbr<float> etatip;
      mbr<float> dhtcip;
      mbr<float> dhti;
      mbr<float> blip;
      mbr<float> pcblip;
      mbr<float> pcnigu;
      mbr<float> zids;
      mbr<float> pcnids;
      mbr<float> prids;
      mbr<float> etaids;
      mbr<float> waids;
      mbr<float> pricf;
      mbr<float> etaicf;
      mbr<float> waicf;
      mbr<float> tfipds;
      mbr<float> cnipds;
      mbr<float> etipds;
      mbr<float> tfipcf;
      mbr<float> cnipcf;
      mbr<float> etipcf;
      mbr<float> dhipcf;
      mbr<float> waicds;
      mbr<float> wai;
      mbr<float> pcbli;
      mbr<float> bli;
      mbr<float> t22ds;
      mbr<float> wa21;
      mbr<float> wg50;
      mbr<float> far50;
      mbr<float> a24;
      mbr<float> ar23;
      mbr<bool> dumspl;
      mbr<bool> fxfn2m;
      mbr<bool> fxm2cp;
      mbr<float> aftfan;
      mbr<float> punt;
      mbr<float> pcblid;
      mbr<float> p6dsav;
      mbr<float> am6dsv;
      mbr<float> etaasv;
      mbr<float> far7sv;
      mbr<float> t4pbl;
      mbr<float> t41;
      mbr<bool> fan;
      mbr<int> ispool;
      all5.allocate(), s50, wa22, zi, pcni, cni, pri, etai, waci,
        tffip, cnip, etatip, dhtcip, dhti, blip, pcblip, pcnigu,
        zids, pcnids, prids, etaids, waids, pricf, etaicf, waicf,
        tfipds, cnipds, etipds, tfipcf, cnipcf, etipcf, dhipcf,
        waicds, wai, pcbli, bli, t22ds, wa21, wg50, far50, a24, ar23,
        dumspl, fxfn2m, fxm2cp, aftfan, punt, pcblid, p6dsav, am6dsv,
        etaasv, far7sv, t4pbl, t41, fan, ispool;
    }
    {
      mbr<int> itran;
      mbr<float> time;
      mbr<float> dt;
      mbr<float> tf;
      mbr<int> jtran;
      mbr<int> nstep;
      mbr<int> iprint;
      mbr<float> dtprnt;
      dyn.allocate(), itran, time, dt, tf, jtran, nstep, iprint, dtprnt;
    }
  }
  /* float const& s50 */ all5.bind<float>();
  /* float const& wa22 */ all5.bind<float>();
  float& zi = all5.bind<float>();
  float& pcni = all5.bind<float>();
  /* float const& cni */ all5.bind<float>();
  /* float const& pri */ all5.bind<float>();
  /* float const& etai */ all5.bind<float>();
  /* float const& waci */ all5.bind<float>();
  float& tffip = all5.bind<float>();
  /* float const& cnip */ all5.bind<float>();
  /* float const& etatip */ all5.bind<float>();
  /* float const& dhtcip */ all5.bind<float>();
  /* float const& dhti */ all5.bind<float>();
  /* float const& blip */ all5.bind<float>();
  /* float const& pcblip */ all5.bind<float>();
  /* float const& pcnigu */ all5.bind<float>();
  /* float const& zids */ all5.bind<float>();
  /* float const& pcnids */ all5.bind<float>();
  /* float const& prids */ all5.bind<float>();
  /* float const& etaids */ all5.bind<float>();
  /* float const& waids */ all5.bind<float>();
  /* float const& pricf */ all5.bind<float>();
  /* float const& etaicf */ all5.bind<float>();
  /* float const& waicf */ all5.bind<float>();
  float const& tfipds = all5.bind<float>();
  /* float const& cnipds */ all5.bind<float>();
  /* float const& etipds */ all5.bind<float>();
  /* float const& tfipcf */ all5.bind<float>();
  /* float const& cnipcf */ all5.bind<float>();
  /* float const& etipcf */ all5.bind<float>();
  /* float const& dhipcf */ all5.bind<float>();
  /* float const& waicds */ all5.bind<float>();
  /* float const& wai */ all5.bind<float>();
  /* float const& pcbli */ all5.bind<float>();
  /* float const& bli */ all5.bind<float>();
  /* float const& t22ds */ all5.bind<float>();
  /* float const& wa21 */ all5.bind<float>();
  /* float const& wg50 */ all5.bind<float>();
  /* float const& far50 */ all5.bind<float>();
  /* float const& a24 */ all5.bind<float>();
  /* float const& ar23 */ all5.bind<float>();
  bool& dumspl = all5.bind<bool>();
  bool const& fxfn2m = all5.bind<bool>();
  bool const& fxm2cp = all5.bind<bool>();
  /* float const& aftfan */ all5.bind<float>();
  /* float const& punt */ all5.bind<float>();
  /* float const& pcblid */ all5.bind<float>();
  /* float const& p6dsav */ all5.bind<float>();
  /* float const& am6dsv */ all5.bind<float>();
  /* float const& etaasv */ all5.bind<float>();
  /* float const& far7sv */ all5.bind<float>();
  /* float const& t4pbl */ all5.bind<float>();
  /* float const& t41 */ all5.bind<float>();
  bool const& fan = all5.bind<bool>();
  int const& ispool = all5.bind<int>();
  int const& itran = dyn.bind<int>();
  float& time = dyn.bind<float>();
  float const& dt = dyn.bind<float>();
  float const& tf = dyn.bind<float>();
  int& jtran = dyn.bind<int>();
  int& nstep = dyn.bind<int>();
  /* int const& iprint */ dyn.bind<int>();
  /* float const& dtprnt */ dyn.bind<float>();
  if (is_called_first_time) {
    aword = "ENGBAL";
    vdelta = 1.e-4f;
    vlim = 0.100f;
    vchnge = 0.850f;
    nomisx = 6;
    fem::data((values, 9*datum(0.0f))), del;
    fem::data((values, 9*datum(1.e-6f))), delsav;
  }
  int nomiss = fem::int0;
  int loop = fem::int0;
  int mismat = fem::int0;
  int igo = fem::int0;
  int i = fem::int0;
  arr_1d<9, float> vmat(fem::fill0);
  arr_1d<9, float> amat(fem::fill0);
  arr_1d<9, float> delvar(fem::fill0);
  int l = fem::int0;
  arr_2d<9, 9, float> emat(fem::fill0);
  arr_1d<9, float> var(fem::fill0);
  int nnax = fem::int0;
  int nmax = fem::int0;
  float tffp = fem::float0;
  int mapset = fem::int0;
  arr_1d<9, float> errb(fem::fill0);
  int izero = fem::int0;
  int izer = fem::int0;
  int lbig = fem::int0;
  float varbig = fem::float0;
  float absvar = fem::float0;
  float vrato = fem::float0;
  int lbg = fem::int0;
  float vratio = fem::float0;
  float errave = fem::float0;
  float vmtave = fem::float0;
  float delave = fem::float0;
  float vmtavx = fem::float0;
  //C
  if (itran != 1) {
    goto statement_100;
  }
  syg(cmn, 1);
  jtran = 1;
  init = 1;
  nstep++;
  time = dt * fem::ffloat(nstep);
  if (time > tf) {
    goto statement_100;
  }
  distrb(cmn);
  coinlt(cmn);
  goto statement_101;
  statement_100:
  putin(cmn);
  statement_101:
  //C
  if (init == 1) {
    goto statement_1;
  }
  tffhp = tfhpds;
  tffip = tfipds;
  if (fxm2cp) {
    tffip = tfhpds;
  }
  tfflp = cmn.tflpds;
  statement_1:
  looper = 0;
  nummap = 0;
  nomiss = 0;
  statement_2:
  loop = 0;
  mismat = 0;
  nomap = 0;
  igo = 2;
  //C
  FEM_DO_SAFE(i, 1, 9) {
    vmat(i) = 0.f;
    amat(i) = 0.f;
    delvar(i) = 0.f;
    //C
    FEM_DO_SAFE(l, 1, 9) {
      emat(i, l) = 0.f;
    }
  }
  looper++;
  cofan(cmn);
  cmn.word = aword;
  //C
  if (!fan) {
    dumspl = true;
  }
  if (looper > itrys) {
    cmn.errer = true;
  }
  if (looper > itrys) {
    goto statement_26;
  }
  if (nomap > 0) {
    goto statement_2;
  }
  nummap = 0;
  statement_5:
  var(1) = zf * 100.f;
  if (mode != 3) {
    var(2) = pcnf;
  }
  if (mode == 3) {
    var(2) = t4 / 10.f;
  }
  var(3) = zc * 100.f;
  if (mode != 1) {
    var(4) = pcnc;
  }
  if (mode == 1) {
    var(4) = t4 / 10.f;
  }
  var(5) = tffhp;
  var(6) = tfflp;
  var(7) = zi * 100.f;
  var(8) = pcni;
  var(9) = tffip;
  nnax = 9;
  if (fan) {
    goto statement_39;
  }
  nmax = 6;
  if (ispool == 2) {
    goto statement_7;
  }
  nmax = 3;
  var(3) = tfflp;
  goto statement_7;
  statement_39:
  if (!fxfn2m && (!dumspl)) {
    goto statement_6;
  }
  nmax = 7;
  if (dumspl) {
    nmax = 6;
  }
  statement_6:
  if (!fxm2cp) {
    goto statement_7;
  }
  nmax = 7;
  var(4) = pcni;
  var(5) = tffp;
  statement_7:
  FEM_DO_SAFE(i, 1, nmax) {
    if (fem::abs(err(i)) > cmn.tolall) {
      goto statement_9;
    }
  }
  if (itran == 1) {
    roll(cmn);
  }
  perf(cmn);
  error(cmn);
  statement_9:
  if (loop > 0) {
    goto statement_11;
  }
  mapedg = 0;
  mapset = 0;
  FEM_DO_SAFE(i, 1, nnax) {
    errb(i) = err(i);
    del(i) = vdelta * var(i);
  }
  goto statement_14;
  statement_11:
  if (mismat > 0) {
    goto statement_29;
  }
  if (mapedg == 0) {
    goto statement_12;
  }
  mapedg = 0;
  mapset = 1;
  var(loop) += 2 * del(loop);
  goto statement_15;
  statement_12:
  if (mapset == 0) {
    var(loop) += del(loop);
  }
  if (mapset == 1) {
    var(loop) = var(loop) - del(loop);
  }
  mapset = 0;
  FEM_DO_SAFE(i, 1, nmax) {
    if (del(loop) != 0.f) {
      delsav(loop) = del(loop);
    }
    if (del(loop) == 0.f) {
      del(loop) = delsav(loop);
    }
    emat(i, loop) = (errb(i) - err(i)) / del(loop);
  }
  statement_14:
  loop++;
  if (loop > nmax) {
    goto statement_17;
  }
  var(loop) = var(loop) - del(loop);
  statement_15:
  zf = var(i) / 100.f;
  if (mode != 3) {
    pcnf = var(2);
  }
  if (mode == 3) {
    t4 = var(2) * 10.f;
  }
  zc = var(3) / 100.f;
  if (mode != 1) {
    pcnc = var(4);
  }
  if (mode == 1) {
    t4 = var(4) * 10;
  }
  tffhp = var(5);
  tfflp = var(6);
  zi = var(7) / 100.f;
  pcni = var(8);
  tffip = var(9);
  if (!fxm2cp) {
    goto statement_16;
  }
  pcni = var(4);
  tffip = var(5);
  statement_16:
  if (ispool == 1) {
    tfflp = var(3);
  }
  if (zi < 0.f) {
    zi = 0.05f;
  }
  if (zf < 0.f) {
    zf = 0.05f;
  }
  if (zc < 0.f) {
    zc = 0.05f;
  }
  switch (igo) {
    case 1: goto statement_2;
    case 2: goto statement_6;
    default: break;
  }
  statement_17:
  FEM_DO_SAFE(i, 1, nmax) {
    amat(i) = -errb(i);
  }
  FEM_DO_SAFE(i, 1, nmax) {
    izero = 0;
    FEM_DO_SAFE(loop, 1, nmax) {
      if (emat(i, loop) == 0.f) {
        izero++;
      }
    }
    if (izero < nnax) {
      goto statement_20;
    }
    write(6, "('OROW',i2,' IS ZERO IN EMAT')"), i;
    looper = itrys + 100;
    goto statement_26;
    statement_20:;
  }
  FEM_DO_SAFE(loop, 1, nmax) {
    izero = 0;
    FEM_DO_SAFE(i, 1, nmax) {
      if (emat(i, loop) == 0.f) {
        izero++;
      }
    }
    if (izer < nmax) {
      goto statement_22;
    }
    write(6, "('OCOLUMN',i2,' IS ZERO IN EMAT')"), loop;
    looper = itrys + 100;
    goto statement_26;
    statement_22:;
  }
  statement_23:
  matrix(emat, vmat, amat, nmax);
  lbig = 0;
  varbig = 0.f;
  FEM_DO_SAFE(l, 1, nnax) {
    absvar = fem::abs(vmat(l));
    if (absvar <= vlim * var(l)) {
      goto statement_24;
    }
    if (absvar <= varbig) {
      goto statement_24;
    }
    lbig = l;
    varbig = absvar;
    statement_24:;
  }
  vrato = 1.0f;
  if (lbig > 0) {
    vratio = vlim * var(lbg) / varbig;
  }
  errave = 0.0f;
  vmtave = 0.0f;
  delave = 0.0f;
  FEM_DO_SAFE(l, 1, nmax) {
    delvar(l) = vratio * vmat(l);
    errave += fem::abs(amat(l)) / fem::ffloat(nmax);
    var(l) += delvar(l);
    vmtave += fem::abs(vmat(l)) / fem::ffloat(nmax);
    delave += fem::abs(delvar(l)) / fem::ffloat(nmax);
  }
  if (mismat > 0) {
    goto statement_31;
  }
  if (nomiss == 0) {
    mismat = 0;
  }
  if (mismat == 0) {
    igo = 1;
  }
  statement_26:
  write(8,
    "('B   ERRB',28x,'ERROR MATRIX AFTER LOOP',i4,29x,'VMAT',6x,'DELVAR',7x,"
    "'VARIABLE$$$$$$')"),
    looper;
  FEM_DO_SAFE(i, 1, nmax) {
    {
      write_loop wloop(cmn, 8, "('O',f8.4,10f9.3,2f11.4,'S$S$$S')");
      wloop, amat(i);
      FEM_DO_SAFE(l, 1, 9) {
        wloop, emat(i, l);
      }
      wloop, vmat(i), delvar(i), var(i);
    }
  }
  write(18, "('O',f8.4,32x,'AVERAGE VALUES',31x,2f11.4,'$$$$$S')"),
    errave, vmtave, delave;
  statement_28:
  if (looper < itrys) {
    goto statement_15;
  }
  error(cmn);
  return;
  statement_29:
  vmtavx = vmtave;
  FEM_DO_SAFE(i, 1, nmax) {
    amat(i) = -err(i);
  }
  goto statement_23;
  statement_31:
  write(8,
    "('0-----  AMAT',10f11.6,'$$$$$$',/,' -----DELVAR',10f11.6,'$$$$$$',/,"
    "' -----  VMAT',10f11.6,'SSSSSS',/,'------   VAR',9f11.6,'$$$$$$')"),
    amat, errave, delvar, delave, vmat, vmtave, var;
  mismat++;
  if (vmtave < vchnge * vmtavx) {
    goto statement_28;
  }
  write(8, "('0',50x,'CHANGE TOO SMALL$$$S$$')");
  if (mismat < nomisx) {
    nomiss = 1;
  }
  mismat = 0;
  loop = 0;
  igo = 2;
  goto statement_5;
  //C
}

struct error_save
{
  fem::variant_bindings all5_bindings;
  char aword[10];

  error_save() :
    aword("")
  {}
};

void
error(
  common& cmn)
{
  FEM_CMN_SVE(error);
  common_write write(cmn);
  char* word = cmn.word;
  int& icoafb = cmn.icoafb;
  int& icoduc = static_cast<common_whrerr&>(cmn).icoduc;
  int& icomix = static_cast<common_whrerr&>(cmn).icomix;
  //
  common_variant all5(cmn.common_all5, sve.all5_bindings);
  char* aword= sve.aword;;
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> s50;
      mbr<float> wa22;
      mbr<float> zi;
      mbr<float> pcni;
      mbr<float> cni;
      mbr<float> pri;
      mbr<float> etai;
      mbr<float> waci;
      mbr<float> tffip;
      mbr<float> cnip;
      mbr<float> etatip;
      mbr<float> dhtcip;
      mbr<float> dhti;
      mbr<float> blip;
      mbr<float> pcblip;
      mbr<float> pcnigu;
      mbr<float> zids;
      mbr<float> pcnids;
      mbr<float> prids;
      mbr<float> etaids;
      mbr<float> waids;
      mbr<float> pricf;
      mbr<float> etaicf;
      mbr<float> waicf;
      mbr<float> tfipds;
      mbr<float> cnipds;
      mbr<float> etipds;
      mbr<float> tfipcf;
      mbr<float> cnipcf;
      mbr<float> etipcf;
      mbr<float> dhipcf;
      mbr<float> waicds;
      mbr<float> wai;
      mbr<float> pcbli;
      mbr<float> bli;
      mbr<float> t22ds;
      mbr<float> wa21;
      mbr<float> wg50;
      mbr<float> far50;
      mbr<float> a24;
      mbr<float> ar23;
      mbr<float> dumspl;
      mbr<float> fxfn2m;
      mbr<float> fxm2cp;
      mbr<float> aftfan;
      mbr<float> punt;
      mbr<float> pcblid;
      mbr<float> p6dsav;
      mbr<float> am6dsv;
      mbr<float> etaasv;
      mbr<float> far7sv;
      mbr<float> t4pbl;
      mbr<float> t41;
      mbr<float> fan;
      mbr<int> ispool;
      all5.allocate(), s50, wa22, zi, pcni, cni, pri, etai, waci,
        tffip, cnip, etatip, dhtcip, dhti, blip, pcblip, pcnigu,
        zids, pcnids, prids, etaids, waids, pricf, etaicf, waicf,
        tfipds, cnipds, etipds, tfipcf, cnipcf, etipcf, dhipcf,
        waicds, wai, pcbli, bli, t22ds, wa21, wg50, far50, a24, ar23,
        dumspl, fxfn2m, fxm2cp, aftfan, punt, pcblid, p6dsav, am6dsv,
        etaasv, far7sv, t4pbl, t41, fan, ispool;
    }
  }
  /* float const& s50 */ all5.bind<float>();
  /* float const& wa22 */ all5.bind<float>();
  float const& zi = all5.bind<float>();
  float const& pcni = all5.bind<float>();
  /* float const& cni */ all5.bind<float>();
  /* float const& pri */ all5.bind<float>();
  /* float const& etai */ all5.bind<float>();
  /* float const& waci */ all5.bind<float>();
  /* float const& tffip */ all5.bind<float>();
  /* float const& cnip */ all5.bind<float>();
  /* float const& etatip */ all5.bind<float>();
  /* float const& dhtcip */ all5.bind<float>();
  /* float const& dhti */ all5.bind<float>();
  /* float const& blip */ all5.bind<float>();
  /* float const& pcblip */ all5.bind<float>();
  /* float const& pcnigu */ all5.bind<float>();
  /* float const& zids */ all5.bind<float>();
  /* float const& pcnids */ all5.bind<float>();
  /* float const& prids */ all5.bind<float>();
  /* float const& etaids */ all5.bind<float>();
  /* float const& waids */ all5.bind<float>();
  /* float const& pricf */ all5.bind<float>();
  /* float const& etaicf */ all5.bind<float>();
  /* float const& waicf */ all5.bind<float>();
  /* float const& tfipds */ all5.bind<float>();
  /* float const& cnipds */ all5.bind<float>();
  /* float const& etipds */ all5.bind<float>();
  /* float const& tfipcf */ all5.bind<float>();
  /* float const& cnipcf */ all5.bind<float>();
  /* float const& etipcf */ all5.bind<float>();
  /* float const& dhipcf */ all5.bind<float>();
  /* float const& waicds */ all5.bind<float>();
  /* float const& wai */ all5.bind<float>();
  /* float const& pcbli */ all5.bind<float>();
  /* float const& bli */ all5.bind<float>();
  /* float const& t22ds */ all5.bind<float>();
  /* float const& wa21 */ all5.bind<float>();
  /* float const& wg50 */ all5.bind<float>();
  /* float const& far50 */ all5.bind<float>();
  /* float const& a24 */ all5.bind<float>();
  /* float const& ar23 */ all5.bind<float>();
  /* float const& dumspl */ all5.bind<float>();
  /* float const& fxfn2m */ all5.bind<float>();
  /* float const& fxm2cp */ all5.bind<float>();
  /* float const& aftfan */ all5.bind<float>();
  /* float const& punt */ all5.bind<float>();
  /* float const& pcblid */ all5.bind<float>();
  /* float const& p6dsav */ all5.bind<float>();
  /* float const& am6dsv */ all5.bind<float>();
  /* float const& etaasv */ all5.bind<float>();
  /* float const& far7sv */ all5.bind<float>();
  /* float const& t4pbl */ all5.bind<float>();
  /* float const& t41 */ all5.bind<float>();
  /* float const& fan */ all5.bind<float>();
  /* int const& ispool */ all5.bind<int>();
  if (is_called_first_time) {
    aword = "COMMON";
  }
  int icdafb = fem::int0;
  int icdmix = fem::int0;
  float ecoafb = fem::float0;
  int icomex = fem::int0;
  arr_1d<80, float> trash1(fem::fill0);
  int i = fem::int0;
  arr_1d<80, float> trash2(fem::fill0);
  arr_1d<80, float> trash3(fem::fill0);
  arr_1d<80, float> trash4(fem::fill0);
  arr_1d<80, float> trash5(fem::fill0);
  static const char* format_4 = "('0 ')";
  static const char* format_5 = "(' ',8e15.6)";
  static const char* format_6 = "('1')";
  //C
  //C        Controls all printouts if an error occurs; prints names of
  //C        subroutine where error occurred and also prints values of all
  //C        variables in nmin commons
  //C
  //C        EQUIVALENCE (TRASH1,PCNFGU), (TRASH2,T1), (TRASH3,XPI),
  //C    1   (TRASH4,WG6), (TRASH5,S50)
  //C
  cmn.errer = true;
  //C
  if (icdafb < 1) {
    icoafb = 0;
  }
  if (icomix < 1) {
    icdmix = 0;
  }
  if (icoduc < 1) {
    icoduc = 0;
  }
  if (icoafb != 0) {
    write(6, "(' THE ERROR IN COAFBN  IS AT',i3)"), ecoafb;
  }
  if (icoduc != 0) {
    write(6, "(' THE ERROR IN CODUCT  IS AT',i3)"), icoduc;
  }
  if (icomix != 0) {
    write(6, "(' THE ERROR IN COMIX   IS AT',i3)"), icomex;
  }
  //C
  write(6, "('AN ERROR HAS BEEN FOUND IN  ',a6)"), word;
  word = aword;
  //C
  write(6, "('0',a6,9x,7e15.6,i4)"), word, cmn.zf, cmn.pcnf, zi,
    pcni, cmn.zc, cmn.pcnc, cmn.t4, cmn.mode;
  write(6, format_4);
  {
    write_loop wloop(cmn, 6, format_5);
    FEM_DO_SAFE(i, 1, 80) {
      wloop, trash1(i);
    }
  }
  write(6, format_6);
  {
    write_loop wloop(cmn, 6, format_5);
    FEM_DO_SAFE(i, 1, 80) {
      wloop, trash2(i);
    }
  }
  write(6, format_6);
  {
    write_loop wloop(cmn, 6, format_5);
    FEM_DO_SAFE(i, 1, 80) {
      wloop, trash3(i);
    }
  }
  write(6, format_6);
  {
    write_loop wloop(cmn, 6, format_5);
    FEM_DO_SAFE(i, 1, 80) {
      wloop, trash4(i);
    }
  }
  write(6, format_4);
  {
    write_loop wloop(cmn, 6, format_6);
    FEM_DO_SAFE(i, 1, 55) {
      wloop, trash5(i);
    }
  }
  write(6, format_4);
  write(6, "('FAILED TO CONVERGE AFTER ',i4,' LOOPS')"), cmn.looper;
  //C
  if (cmn.dump == 0) {
    goto statement_1;
  }
  write(6, format_6);
  syg(cmn, 2);
  statement_1:
  engbal(cmn);
  //C
}

void
nozctr()
{
}

struct comnoz_save
{
  fem::variant_bindings all5_bindings;
  fem::variant_bindings dyn_bindings;
  char aword[10];

  comnoz_save() :
    aword("")
  {}
};

void
comnoz(
  common& cmn)
{
  FEM_CMN_SVE(comnoz);
  common_write write(cmn);
  int& nozflt = cmn.nozflt;
  arr_ref<float> err(cmn.err, dimension(9));
  float& a8 = cmn.a8;
  float& a9 = cmn.a9;
  float& p1 = cmn.p1;
  float& t7 = cmn.t7;
  float& p7 = cmn.p7;
  float& h7 = cmn.h7;
  float& p8 = cmn.p8;
  float& h8 = cmn.h8;
  float& s8 = cmn.s8;
  float& t9 = cmn.t9;
  float& p9 = cmn.p9;
  float& h9 = cmn.h9;
  float& s9 = cmn.s9;
  float& far7 = cmn.far7;
  float& ts8 = cmn.ts8;
  float& ps8 = cmn.ps8;
  float& v8 = cmn.v8;
  float& am8 = cmn.am8;
  float& ps9 = cmn.ps9;
  float& v9 = cmn.v9;
  float& am9 = cmn.am9;
  //
  common_variant all5(cmn.common_all5, sve.all5_bindings);
  common_variant dyn(cmn.common_dyn, sve.dyn_bindings);
  char* aword= sve.aword;;
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> s50;
      mbr<float> wa22;
      mbr<float> zi;
      mbr<float> pcni;
      mbr<float> cni;
      mbr<float> pri;
      mbr<float> etai;
      mbr<float> waci;
      mbr<float> tffip;
      mbr<float> cnip;
      mbr<float> etatip;
      mbr<float> dhtcip;
      mbr<float> dhti;
      mbr<float> blip;
      mbr<float> pcblip;
      mbr<float> pcnigu;
      mbr<float> zids;
      mbr<float> pcnids;
      mbr<float> prids;
      mbr<float> etaids;
      mbr<float> waids;
      mbr<float> pricf;
      mbr<float> etaicf;
      mbr<float> waicf;
      mbr<float> tfipds;
      mbr<float> cnipds;
      mbr<float> etipds;
      mbr<float> tfipcf;
      mbr<float> cnipcf;
      mbr<float> etipcf;
      mbr<float> dhipcf;
      mbr<float> waicds;
      mbr<float> wai;
      mbr<float> pcbli;
      mbr<float> bli;
      mbr<float> t22ds;
      mbr<float> wa21;
      mbr<float> wg50;
      mbr<float> far50;
      mbr<float> a24;
      mbr<float> ar23;
      mbr<float> dumspl;
      mbr<float> fxfn2m;
      mbr<float> fxm2cp;
      mbr<float> aftfan;
      mbr<float> punt;
      mbr<float> pcblid;
      mbr<float> p6dsav;
      mbr<float> am6dsv;
      mbr<float> etaasv;
      mbr<float> far7sv;
      mbr<float> t4pbl;
      mbr<float> t41;
      mbr<float> fan;
      mbr<int> ispool;
      all5.allocate(), s50, wa22, zi, pcni, cni, pri, etai, waci,
        tffip, cnip, etatip, dhtcip, dhti, blip, pcblip, pcnigu,
        zids, pcnids, prids, etaids, waids, pricf, etaicf, waicf,
        tfipds, cnipds, etipds, tfipcf, cnipcf, etipcf, dhipcf,
        waicds, wai, pcbli, bli, t22ds, wa21, wg50, far50, a24, ar23,
        dumspl, fxfn2m, fxm2cp, aftfan, punt, pcblid, p6dsav, am6dsv,
        etaasv, far7sv, t4pbl, t41, fan, ispool;
    }
    {
      mbr<int> itran;
      mbr<float> time;
      mbr<float> dt;
      mbr<float> tf;
      mbr<int> jtran;
      mbr<int> nstep;
      mbr<float> tprint;
      mbr<float> dtprnt;
      dyn.allocate(), itran, time, dt, tf, jtran, nstep, tprint, dtprnt;
    }
  }
  /* float const& s50 */ all5.bind<float>();
  /* float const& wa22 */ all5.bind<float>();
  /* float const& zi */ all5.bind<float>();
  /* float const& pcni */ all5.bind<float>();
  /* float const& cni */ all5.bind<float>();
  /* float const& pri */ all5.bind<float>();
  /* float const& etai */ all5.bind<float>();
  /* float const& waci */ all5.bind<float>();
  /* float const& tffip */ all5.bind<float>();
  /* float const& cnip */ all5.bind<float>();
  /* float const& etatip */ all5.bind<float>();
  /* float const& dhtcip */ all5.bind<float>();
  /* float const& dhti */ all5.bind<float>();
  /* float const& blip */ all5.bind<float>();
  /* float const& pcblip */ all5.bind<float>();
  /* float const& pcnigu */ all5.bind<float>();
  /* float const& zids */ all5.bind<float>();
  /* float const& pcnids */ all5.bind<float>();
  /* float const& prids */ all5.bind<float>();
  /* float const& etaids */ all5.bind<float>();
  /* float const& waids */ all5.bind<float>();
  /* float const& pricf */ all5.bind<float>();
  /* float const& etaicf */ all5.bind<float>();
  /* float const& waicf */ all5.bind<float>();
  /* float const& tfipds */ all5.bind<float>();
  /* float const& cnipds */ all5.bind<float>();
  /* float const& etipds */ all5.bind<float>();
  /* float const& tfipcf */ all5.bind<float>();
  /* float const& cnipcf */ all5.bind<float>();
  /* float const& etipcf */ all5.bind<float>();
  /* float const& dhipcf */ all5.bind<float>();
  /* float const& waicds */ all5.bind<float>();
  /* float const& wai */ all5.bind<float>();
  /* float const& pcbli */ all5.bind<float>();
  /* float const& bli */ all5.bind<float>();
  /* float const& t22ds */ all5.bind<float>();
  /* float const& wa21 */ all5.bind<float>();
  /* float const& wg50 */ all5.bind<float>();
  /* float const& far50 */ all5.bind<float>();
  /* float const& a24 */ all5.bind<float>();
  /* float const& ar23 */ all5.bind<float>();
  /* float const& dumspl */ all5.bind<float>();
  /* float const& fxfn2m */ all5.bind<float>();
  /* float const& fxm2cp */ all5.bind<float>();
  /* float const& aftfan */ all5.bind<float>();
  /* float const& punt */ all5.bind<float>();
  /* float const& pcblid */ all5.bind<float>();
  /* float const& p6dsav */ all5.bind<float>();
  /* float const& am6dsv */ all5.bind<float>();
  /* float const& etaasv */ all5.bind<float>();
  /* float const& far7sv */ all5.bind<float>();
  /* float const& t4pbl */ all5.bind<float>();
  /* float const& t41 */ all5.bind<float>();
  /* float const& fan */ all5.bind<float>();
  int const& ispool = all5.bind<int>();
  int const& itran = dyn.bind<int>();
  /* float const& time */ dyn.bind<float>();
  /* float const& dt */ dyn.bind<float>();
  /* float const& tf */ dyn.bind<float>();
  /* int const& jtran */ dyn.bind<int>();
  /* int const& nstep */ dyn.bind<int>();
  /* float const& tprint */ dyn.bind<float>();
  /* float const& dtprnt */ dyn.bind<float>();
  if (is_called_first_time) {
    aword = "MNOZZL";
  }
  int nozm = fem::int0;
  int imnoz = fem::int0;
  float s7 = fem::float0;
  float ab = fem::float0;
  float p7r = fem::float0;
  float t8 = fem::float0;
  float pb = fem::float0;
  int icon = fem::int0;
  int ishoc = fem::int0;
  //C
  cmn.word = aword;
  cmn.a8sav = a8;
  cmn.a9sav = a9;
  nozm = 0;
  //C
  if (itran == 1) {
    nozctr();
  }
  if (nozflt == 1.f || nozflt == 3) {
    nozm = 1;
  }
  if (cmn.ides == 1 || cmn.iaftbn > 0.f || nozm == 1) {
    imnoz = 1;
  }
  if (itran == 1) {
    imnoz = 0;
  }
  if (cmn.imcd == 1) {
    goto statement_1;
  }
  //C
  convrg(cmn, t7, h7, p7, s7, far7, cmn.wg7, p1, imnoz, a8, p7r, t8,
    h8, p8, s8, ts8, ps8, v8, am8, icon);
  //C
  switch (icon) {
    case 1: goto statement_3;
    case 2: goto statement_3;
    case 3: goto statement_3;
    case 4: goto statement_2;
    default: break;
  }
  //C
  statement_1:
  condiv(cmn, t7, h7, p7, s7, far7, cmn.wg7, p1, imnoz, a8, a9, p7r,
    t8, p8, s8, t9, h9, p9, s9, ps9, v8, v9, am8, am9, icon);
  //C
  ishoc = icon;
  //C
  switch (icon) {
    case 1: goto statement_4;
    case 2: goto statement_4;
    case 3: goto statement_4;
    case 4: goto statement_2;
    default: break;
  }
  //C
  statement_2:
  error(cmn);
  statement_3:
  t9 = t8;
  h9 = h8;
  p9 = p8;
  s9 = s8;
  cmn.ts9 = ts8;
  ps9 = ps8;
  v9 = v8;
  am9 = am8;
  a9 = a8;
  cmn.imshoc = icon + 3;
  //C
  statement_4:
  err(6) = (p7r - p7) / p7r;
  if (ispool == 1) {
    err(3) = err(6);
  }
  if (imnoz == 1) {
    write(6,
      "('NOZZLE    DESIGN',10x,'        ',a8,e15.8,'    AM8=',e15.8,"
      "'        ',a9,e15.8,'    AM9=',e15.8)"),
      a8, am8, a9, am9;
  }
  //C
}

struct etaab_save
{
  arr<float> delm6;
  arr<float> delp6;
  arr<float> em6t;
  arr<float> etabrt;
  arr<float> fart;
  arr<float> p6t;

  etaab_save() :
    delm6(dimension(7), fem::fill0),
    delp6(dimension(14), fem::fill0),
    em6t(dimension(7), fem::fill0),
    etabrt(dimension(25), fem::fill0),
    fart(dimension(25), fem::fill0),
    p6t(dimension(14), fem::fill0)
  {}
};

void
etaab(
  common& cmn,
  float const& far,
  float const& em6,
  float const& p6,
  float& eta,
  float const& etaads,
  float& etaasv,
  float const& p6ds,
  float& p6dsav,
  float const& am6ds,
  float& am6dsv,
  int const& ides,
  float const& far7ds,
  float& far7sv)
{
  FEM_CMN_SVE(etaab);
  arr_ref<float> delm6(sve.delm6, dimension(7));
  arr_ref<float> delp6(sve.delp6, dimension(14));
  arr_ref<float> em6t(sve.em6t, dimension(7));
  arr_ref<float> etabrt(sve.etabrt, dimension(25));
  arr_ref<float> fart(sve.fart, dimension(25));
  arr_ref<float> p6t(sve.p6t, dimension(14));
  if (is_called_first_time) {
    {
      static const float values[] = {
        .0390f, 0.0585f, 0.0732f, 0.0078f, 0.0976f, 0.1171f, 0.1268f,
          0.1463f, 0.1619f, 0.1834f, 0.1951f, 0.2195f, 0.2439f,
          0.2927f, 0.3415f, 0.4146f, 0.4634f, 0.5366f, 0.6341f,
          0.7317f, 0.2893f, 0.9268f, 1.000f, 1.0634f, 1.7f
      };
      fem::data_of_type<float>(FEM_VALUES_AND_SIZE),
        fart;
    }
    {
      static const float values[] = {
        0.9400f, 0.9887f, 1.0193f, 1.0306f, 1.0227f, 0.9672f,
          0.9377f, 0.9207f, 0.9354f, 0.9626f, 0.9773f, 1.0193f,
          1.0532f, 1.077f, 1.0781f, 1.077f, 1.0747f, 1.0668f,
          1.0578f, 1.0510f, 1.0374f, 1.1902f, 1.00f, 0.9626f, 0.9151f
      };
      fem::data_of_type<float>(FEM_VALUES_AND_SIZE),
        etabrt;
    }
    {
      static const float values[] = {
        1.00f, 1.071f, 1.190f, 1.309f, 1.428f, 1.547f, 1.666f
      };
      fem::data_of_type<float>(FEM_VALUES_AND_SIZE),
        em6t;
    }
    {
      static const float values[] = {
        0.f, 0.013f, 0.041f, 0.073f, 0.110f, 0.147f, 0.187f
      };
      fem::data_of_type<float>(FEM_VALUES_AND_SIZE),
        delm6;
    }
    {
      static const float values[] = {
        0.220f, 0.2267f, 0.250f, 0.300f, 0.3333f, 0.3767f, 0.4167f,
          0.500f, 0.5833f, 0.6667f, 1.75f, 0.8333f, 0.9167f, 1.0f
      };
      fem::data_of_type<float>(FEM_VALUES_AND_SIZE),
        p6t;
    }
    {
      static const float values[] = {
        -0.142f, -0.125f, -0.10f, -0.075f, -0.062f, -0.05f, -0.41f,
          -0.027f, -0.019f, -0.013f, -0.008f, -0.004f, -0.0021f, 0.f
      };
      fem::data_of_type<float>(FEM_VALUES_AND_SIZE),
        delp6;
    }
  }
  int i = fem::int0;
  int k = fem::int0;
  int m = fem::int0;
  float fartds = fem::float0;
  int n = fem::int0;
  int j = fem::int0;
  float do7i = fem::float0;
  int nn = fem::int0;
  arr_1d<3, float> x(fem::fill0);
  arr_1d<3, float> y(fem::fill0);
  int mm = fem::int0;
  float cor1 = fem::float0;
  int l = fem::int0;
  int ll = fem::int0;
  float cor2 = fem::float0;
  float etai = fem::float0;
  //C
  //C        generalized afterburner performance BLOCK DATA as a function of C       fuel air ratio with correction factors for off-design afterburner C     entrance pressure and Mach number
  //C
  if (ides != i) {
    goto statement_5;
  }
  FEM_DO_SAFE(k, 1, 25) {
    etabrt(k) = etabrt(k) * etaads / etaasv;
  }
  //C
  FEM_DO_SAFE(k, 1, 25) {
    fart(k) = fart(k) * far7ds / far7sv;
  }
  //C
  FEM_DO_SAFE(k, 1, 7) {
    em6t(k) = em6t(k) * am6ds / am6dsv;
  }
  //C
  FEM_DO_SAFE(m, 1, 16) {
    p6t(m) = p6t(m) * p6ds / p6dsav;
  }
  //C
  etaasv = etaads;
  p6dsav = p6ds;
  far7sv = fartds;
  am6dsv = am6ds;
  return;
  //C
  statement_5:
  //C
  n = 0;
  if (far > 0.067f) {
    goto statement_8;
  }
  FEM_DO_SAFE(j, 1, 25) {
    if (far >= fart(j)) {
      n = j - 1;
    }
  }
  if (n == 0) {
    n = 1;
  }
  if (n >= 24) {
    n = 23;
  }
  //C
  do7i = 3;
  nn = n - 1 + i;
  x(i) = fart(nn);
  y(i) = etabrt(nn);
  parabo(x, y, far, eta);
  goto statement_9;
  //C
  statement_8:
  eta = -2.f * far + 0.1948f;
  statement_9:
  m = 0;
  //C
  FEM_DO_SAFE(j, 1, 7) {
    if (em6 >= em6t(j)) {
      m = j - 1;
    }
  }
  //C
  if (m == 0) {
    m = 1;
  }
  if (m >= 6) {
    m = 5;
  }
  //C
  FEM_DO_SAFE(i, 1, 3) {
    mm = m - 1 + i;
    x(i) = em6t(mm);
    y(i) = delm6(mm);
  }
  //C
  parabo(x, y, em6, cor1);
  l = 0;
  FEM_DO_SAFE(j, 1, 14) {
    if (p6 >= p6t(j)) {
      l = j - 1;
    }
  }
  //C
  if (l == 0) {
    l = 1;
  }
  if (l >= 13) {
    l = 12;
  }
  //C
  FEM_DO_SAFE(i, 1, 3) {
    ll = l - 1 + i;
    x(i) = p6t(ll);
    y(i) = delp6(ll);
  }
  parabo(x, y, p6, cor2);
  eta = etai * (1.f - cor1) * (1.f + cor2);
}

struct coafbn_save
{
  fem::variant_bindings all5_bindings;
  fem::variant_bindings units_bindings;
  fem::variant_bindings vols_bindings;
  char aword[10];

  coafbn_save() :
    aword("")
  {}
};

//C
//CIBFTC COAFBN
void
coafbn(
  common& cmn)
{
  FEM_CMN_SVE(coafbn);
  int& ides = cmn.ides;
  int& iaftbn = cmn.iaftbn;
  float& t7ds = cmn.t7ds;
  float& etaads = cmn.etaads;
  float& wg6cds = cmn.wg6cds;
  float& a7 = cmn.a7;
  float& far55 = cmn.far55;
  float& far24 = cmn.far24;
  float& t6 = cmn.t6;
  float& p6 = cmn.p6;
  float& h6 = cmn.h6;
  float& t7 = cmn.t7;
  float& p7 = cmn.p7;
  float& h7 = cmn.h7;
  float& wg6 = cmn.wg6;
  float& wfa = cmn.wfa;
  float& wg7 = cmn.wg7;
  float& far7 = cmn.far7;
  float& etaa = cmn.etaa;
  float& dpaft = cmn.dpaft;
  float& am6 = cmn.am6;
  float& ts7 = cmn.ts7;
  float& ps7 = cmn.ps7;
  float& v7 = cmn.v7;
  float& am7 = cmn.am7;
  float& fart = cmn.fart;
  int& icoafb = cmn.icoafb;
  //
  common_variant all5(cmn.common_all5, sve.all5_bindings);
  common_variant vols(cmn.common_vols, sve.vols_bindings);
  common_variant units(cmn.common_units, sve.units_bindings);
  char* aword= sve.aword;;
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> s50;
      mbr<float> wa22;
      mbr<float> zi;
      mbr<float> pcni;
      mbr<float> cni;
      mbr<float> pri;
      mbr<float> etai;
      mbr<float> waci;
      mbr<float> tffip;
      mbr<float> cnip;
      mbr<float> etatip;
      mbr<float> dhtcip;
      mbr<float> dhti;
      mbr<float> blip;
      mbr<float> pcblip;
      mbr<float> pcnigu;
      mbr<float> zids;
      mbr<float> pcnids;
      mbr<float> prids;
      mbr<float> etaids;
      mbr<float> waids;
      mbr<float> pricf;
      mbr<float> etaicf;
      mbr<float> waicf;
      mbr<float> tfipds;
      mbr<float> cnipds;
      mbr<float> etipds;
      mbr<float> tfipcf;
      mbr<float> cnipcf;
      mbr<float> etipcf;
      mbr<float> dhipcf;
      mbr<float> waicds;
      mbr<float> wai;
      mbr<float> pcbli;
      mbr<float> bli;
      mbr<float> t22ds;
      mbr<float> wa21;
      mbr<float> wg50;
      mbr<float> far50;
      mbr<float> a24;
      mbr<float> ar23;
      mbr<float> dumspl;
      mbr<float> fxfn2m;
      mbr<float> fxm2cp;
      mbr<float> aftfan;
      mbr<float> punt;
      mbr<float> pcblid;
      mbr<float> p6dsav;
      mbr<float> am6dsv;
      mbr<float> etaasv;
      mbr<float> far7sv;
      mbr<float> t4pbl;
      mbr<float> t41;
      mbr<float> fan;
      mbr<int> ispool;
      all5.allocate(), s50, wa22, zi, pcni, cni, pri, etai, waci,
        tffip, cnip, etatip, dhtcip, dhti, blip, pcblip, pcnigu,
        zids, pcnids, prids, etaids, waids, pricf, etaicf, waicf,
        tfipds, cnipds, etipds, tfipcf, cnipcf, etipcf, dhipcf,
        waicds, wai, pcbli, bli, t22ds, wa21, wg50, far50, a24, ar23,
        dumspl, fxfn2m, fxm2cp, aftfan, punt, pcblid, p6dsav, am6dsv,
        etaasv, far7sv, t4pbl, t41, fan, ispool;
    }
    {
      mbr<float> vfan;
      mbr<float> vintc;
      mbr<float> vcomp;
      mbr<float> vhptrb;
      mbr<float> viptrb;
      mbr<float> vlptrb;
      mbr<float> vaftbn;
      mbr<float> vfduct;
      mbr<float> vwduct;
      vols.allocate(), vfan, vintc, vcomp, vhptrb, viptrb, vlptrb,
        vaftbn, vfduct, vwduct;
    }
    {
      mbr<bool> si;
      units.allocate(), si;
    }
  }
  /* float const& s50 */ all5.bind<float>();
  /* float const& wa22 */ all5.bind<float>();
  /* float const& zi */ all5.bind<float>();
  /* float const& pcni */ all5.bind<float>();
  /* float const& cni */ all5.bind<float>();
  /* float const& pri */ all5.bind<float>();
  /* float const& etai */ all5.bind<float>();
  /* float const& waci */ all5.bind<float>();
  /* float const& tffip */ all5.bind<float>();
  /* float const& cnip */ all5.bind<float>();
  /* float const& etatip */ all5.bind<float>();
  /* float const& dhtcip */ all5.bind<float>();
  /* float const& dhti */ all5.bind<float>();
  /* float const& blip */ all5.bind<float>();
  /* float const& pcblip */ all5.bind<float>();
  /* float const& pcnigu */ all5.bind<float>();
  /* float const& zids */ all5.bind<float>();
  /* float const& pcnids */ all5.bind<float>();
  /* float const& prids */ all5.bind<float>();
  /* float const& etaids */ all5.bind<float>();
  /* float const& waids */ all5.bind<float>();
  /* float const& pricf */ all5.bind<float>();
  /* float const& etaicf */ all5.bind<float>();
  /* float const& waicf */ all5.bind<float>();
  /* float const& tfipds */ all5.bind<float>();
  /* float const& cnipds */ all5.bind<float>();
  /* float const& etipds */ all5.bind<float>();
  /* float const& tfipcf */ all5.bind<float>();
  /* float const& cnipcf */ all5.bind<float>();
  /* float const& etipcf */ all5.bind<float>();
  /* float const& dhipcf */ all5.bind<float>();
  /* float const& waicds */ all5.bind<float>();
  /* float const& wai */ all5.bind<float>();
  /* float const& pcbli */ all5.bind<float>();
  /* float const& bli */ all5.bind<float>();
  /* float const& t22ds */ all5.bind<float>();
  /* float const& wa21 */ all5.bind<float>();
  /* float const& wg50 */ all5.bind<float>();
  /* float const& far50 */ all5.bind<float>();
  /* float const& a24 */ all5.bind<float>();
  /* float const& ar23 */ all5.bind<float>();
  /* float const& dumspl */ all5.bind<float>();
  /* float const& fxfn2m */ all5.bind<float>();
  /* float const& fxm2cp */ all5.bind<float>();
  /* float const& aftfan */ all5.bind<float>();
  /* float const& punt */ all5.bind<float>();
  /* float const& pcblid */ all5.bind<float>();
  float& p6dsav = all5.bind<float>();
  float& am6dsv = all5.bind<float>();
  float& etaasv = all5.bind<float>();
  float& far7sv = all5.bind<float>();
  /* float const& t4pbl */ all5.bind<float>();
  /* float const& t41 */ all5.bind<float>();
  /* float const& fan */ all5.bind<float>();
  /* int const& ispool */ all5.bind<int>();
  /* float const& vfan */ vols.bind<float>();
  /* float const& vintc */ vols.bind<float>();
  /* float const& vcomp */ vols.bind<float>();
  /* float const& vhptrb */ vols.bind<float>();
  /* float const& viptrb */ vols.bind<float>();
  /* float const& vlptrb */ vols.bind<float>();
  float const& vaftbn = vols.bind<float>();
  /* float const& vfduct */ vols.bind<float>();
  /* float const& vwduct */ vols.bind<float>();
  bool const& si = units.bind<bool>();
  if (is_called_first_time) {
    aword = "COAFBN";
  }
  arr_1d<9, float> q(fem::fill0);
  float aj = fem::float0;
  float ajx = fem::float0;
  float capsf = fem::float0;
  float g = fem::float0;
  float pratm = fem::float0;
  float tdel = fem::float0;
  float t7max = fem::float0;
  float ra = fem::float0;
  float ttnax = fem::float0;
  float p6ds = fem::float0;
  float am6ds = fem::float0;
  float wf6 = fem::float0;
  float wa6 = fem::float0;
  float wg6c = fem::float0;
  float far6 = fem::float0;
  float xxi = fem::float0;
  float xx2 = fem::float0;
  float xx3 = fem::float0;
  float xx4 = fem::float0;
  float phz6 = fem::float0;
  float xx6 = fem::float0;
  float wqa = fem::float0;
  float c1 = fem::float0;
  int i = fem::int0;
  float cs7 = fem::float0;
  float ak7 = fem::float0;
  float cp7 = fem::float0;
  float rex7 = fem::float0;
  float phis7 = fem::float0;
  float hs7 = fem::float0;
  float hscal = fem::float0;
  float delhs = fem::float0;
  float delhsi = fem::float0;
  float wqat = fem::float0;
  float dir = fem::float0;
  float ew = fem::float0;
  float am7t = fem::float0;
  int igo = fem::int0;
  float amt = fem::float0;
  float phi6 = fem::float0;
  float rho65 = fem::float0;
  float ps6s = fem::float0;
  float v65 = fem::float0;
  float hv = fem::float0;
  float ha = fem::float0;
  float xx1 = fem::float0;
  float far7ds = fem::float0;
  float p6gs = fem::float0;
  float far7gs = fem::float0;
  int ii = fem::int0;
  float delfa7 = fem::float0;
  int icdafb = fem::int0;
  float wfax = fem::float0;
  float aftbn = fem::float0;
  float errw = fem::float0;
  float t7t = fem::float0;
  float phi7 = fem::float0;
  float rho7 = fem::float0;
  float ps65 = fem::float0;
  float ps7a = fem::float0;
  float ep = fem::float0;
  float v7t = fem::float0;
  float v2 = fem::float0;
  float ph7 = fem::float0;
  float xx5 = fem::float0;
  float vt = fem::float0;
  float aht = fem::float0;
  float s7 = fem::float0;
  int mg7 = fem::int0;
  float wg7p = fem::float0;
  float h7p = fem::float0;
  float p7dot = fem::float0;
  float hg7p = fem::float0;
  float hg7 = fem::float0;
  float u7 = fem::float0;
  float u7dot = fem::float0;
  float h7x = fem::float0;
  //C
  //C        IMPLICIT NONE
  //C
  cmn.word = aword;
  q(2) = 0.f;
  q(3) = 0.f;
  if (si) {
    goto statement_100;
  }
  aj = 778.26f;
  ajx = 2.719f;
  capsf = 2116.2170f;
  g = 32.174049f;
  pratm = 14.696f;
  tdel = 2000.0f;
  t7max = 4000.0f;
  ra = .0252f;
  goto statement_101;
  //C
  statement_100:
  aj = 1.0f;
  ajx = 1.0f;
  capsf = 101325.0f;
  g = 1.0f;
  pratm = 14.696f / 101324.6f;
  tdel = 1111.0f;
  ttnax = 2222.0f;
  ra = 286.9f;
  statement_101:
  //C   ICOAFB=0
  //C
  //C ***    P6DS AND AM6DS ARE SET FOR GENERALIZATION OF AFTERBURNER
  //C ***    EFFICIENCY MAP GENERALIZATION
  //C
  if (ides == 1) {
    p6ds = p6 * pratm;
  }
  if (ides == 1) {
    am6ds = am6;
  }
  wf6 = far55 * cmn.wg55 / (far55 + 1.f);
  if (cmn.igasmx > 0) {
    wf6 += far24 * cmn.wg24 / (far24 + 1.f);
  }
  wa6 = wg6 - wf6;
  //C
  //C ***    DRY LOSS
  //C
  wg6c = wg6 * fem::sqrt(t6) / p6;
  if (ides == 1) {
    wg6cds = wg6c;
  }
  dpaft = cmn.dpafds * (wg6c / wg6cds);
  if (dpaft > 1.f) {
    dpaft = 1.f;
  }
  p7 = p6 * (1.f - dpaft);
  a7 = cmn.a6;
  far6 = wf6 / wa6;
  procom(cmn, far6, t6, xxi, xx2, xx3, xx4, phz6, xx6);
  wqa = wg6 / a7;
  c1 = p7 * fem::sqrt(g / (t6 * aj)) * capsf;
  am7 = am6;
  ts7 = 0.875f * 16;
  statement_1:
  FEM_DO_SAFE(i, 1, 15) {
    procom(cmn, far6, ts7, cs7, ak7, cp7, rex7, phis7, hs7);
    v7 = am7 * cs7;
    hscal = h6 - fem::pow2(v7) / (2.f * g * aj);
    delhs = hscal - hs7;
    if (fem::abs(delhsi) <= 0.0005f * hscal) {
      goto statement_3;
    }
    ts7 += delhs / cp7;
  }
  icoafb = 1;
  goto statement_14;
  statement_3:
  wqat = c1 * fem::sqrt(ak7 / rex7) * am7 / fem::pow((1.f + (ak7 -
    1.f) * fem::pow2(am7) / 2.f), ((ak7 + 1.f) / (2.f * (ak7 -
    1.f))));
  dir = wqa / wqat;
  ew = (wqa - wqat) / wqa;
  afquir(q(1), am7, ew, 0.f, 40.f, .00f, dir, am7t, igo);
  icoafb = 2;
  switch (igo) {
    case 1: goto statement_4;
    case 2: goto statement_5;
    case 3: goto statement_14;
    default: break;
  }
  //C
  statement_4:
  amt = am7t;
  if (amt >= 1.0f) {
    am7 = 0.9f;
  }
  goto statement_1;
  //C
  statement_5:
  ps7 = p7 / fem::exp((phi6 - phis7) / rex7);
  if (iaftbn > 0) {
    goto statement_7;
  }
  //C
  //C ***    NON-AFTERBURNING
  statement_6:
  t7 = t6;
  wfa = 0.0f;
  far7 = far6;
  cmn.wgt = wg6;
  if (ides == 1 && t7ds != 0.f) {
    goto statement_7;
  }
  goto statement_20;
  //C
  //C ***    AFTERBURNING
  statement_7:
  if (iaftbn == 2) {
    t7 = t6 + tdel;
  }
  if (ides == 1) {
    t7 = t7ds;
  }
  if (t7 <= t6) {
    goto statement_6;
  }
  rho65 = capsf * ps7 / (aj * rex7 * ts7);
  ps6s = ps7;
  v65 = v7;
  q(2) = 0.f;
  q(3) = 0.f;
  statement_8:
  if (t7 > t7max) {
    t7 = t7max;
  }
  if (t7 < t6) {
    t7 = t6 * 1.001f;
  }
  if (si) {
    t7 = t7 * 9.0f / 5.0f;
  }
  hv = ((((((-.4594317e-19f * t7) - .2034116e-15f) * t7 +
    .2783643e-11f) * t7 + .2051501e-07f) * t7 - .2453116e-03f) * t7 -
    .9433296e-01f) * t7 + .1845537e+05f;
  if (si) {
    t7 = t7 * 5.0f / 9.0f;
  }
  if (si) {
    hv = hv * 2325.4295f;
  }
  thermo(cmn, p7, ha, t7, xx1, xx2, 1, far6, 0);
  //C
  //C *** TO ALTER DESIGN ABETAA MAP FROM GENERAL TO SPECIFIC MAP
  //C
  if (ides != 1) {
    goto statement_9;
  }
  far7ds = (ha - h6) / (hv * etaads);
  etaab(cmn, 0.f, 0.f, 0.f, 0.f, etaads, etaasv, p6ds, p6dsav, am6ds,
    am6dsv, ides, far7ds, far7sv);
  t7 = t6;
  goto statement_20;
  statement_9:
  p6gs = p6 * pratm;
  far7gs = (ha - h6) / (hv * etaads);
  FEM_DO_SAFE(ii, 1, 15) {
    etaab(cmn, far7gs, am6, p6gs, etaa, etaads, etaasv, p6ds, p6dsav,
      am6ds, am6dsv, ides, far7ds, far7sv);
    far7 = (ha - h6) / (hv * etaa);
    delfa7 = fem::abs(far7 - far7gs);
    if (delfa7 <= 0.01f * far7) {
      goto statement_11;
    }
    far7gs = far7;
  }
  statement_11:
  if (fart > 0.f) {
    goto statement_12;
  }
  icdafb = 3;
  error(cmn);
  statement_12:
  wfax = far7 * wg6;
  if (aftbn == 1) {
    goto statement_15;
  }
  errw = (wfa - wfax) / wfa;
  dir = fem::sqrt(wfa / wfax);
  afquir(q(1), t7, errw, 0.f, 30.f, .0005f, dir, t7t, igo);
  icoafb = 4;
  switch (igo) {
    case 1: goto statement_13;
    case 2: goto statement_16;
    case 3: goto statement_14;
    default: break;
  }
  //C
  statement_13:
  t7 = t7t;
  goto statement_8;
  statement_14:
  error(cmn);
  statement_15:
  wfa = wfax;
  statement_16:
  fart = (wf6 + wfa) / wa6;
  wg7 = wg6 + wfa;
  //C
  //C ***    MOMENTUM  LOSS
  procom(cmn, far7, t7, xx1, xx2, xx3, rex7, phi7, h7);
  rho7 = capsf * p7 / (aj * rex7 * t7);
  v7 = wg7 / (rho7 * a7);
  q(2) = 0.f;
  q(3) = 0.f;
  ps7 = ps65 - 0.01f;
  statement_17:
  rho7 = wg7 / (v7 * a7);
  hs7 = h7 - fem::pow2(v7) / (2.f * g * aj);
  thermo(cmn, 1.0f, hs7, ts7, phis7, xx2, 1, far7, 1);
  if (ts7 >= 301.f) {
    goto statement_18;
  }
  thermo(cmn, 1.0f, hs7, 400.f, phis7, xx2, 1, far7, 0);
  v7 = fem::sqrt(2.f * g * aj * (h7 - hs7));
  goto statement_17;
  //C
  statement_18:
  ps7 = rho7 * aj * rex7 * ts7 / capsf;
  ps7a = ps65 + (rho65 * fem::pow2(v65) - rho7 * fem::pow2(v7)) / (g * capsf);
  dir = fem::sqrt(fem::abs(ps7 / ps7a));
  ep = (ps7 - ps7a) / ps7;
  afquir(q(1), v7, ep, 0.f, 50.f, .001f, dir, v7t, igo);
  v7 = v7t;
  if (v7 < 100.f) {
    v2 = 100.f;
  }
  icoafb = 5;
  switch (igo) {
    case 1: goto statement_17;
    case 2: goto statement_19;
    case 3: goto statement_14;
    default: break;
  }
  //C
  statement_19:
  p7 = ps7 * fem::exp((ph7 - phis7) / rex7);
  procom(cmn, far7, ts7, cs7, xx2, xx3, xx6, xx5, xx6);
  aht = vt / cs7;
  statement_20:
  thermo(cmn, p7, h7, t7, s7, xx2, 1, far7, 0);
  if (vaftbn == 0.0f) {
    goto statement_31;
  }
  q(2) = 0.0f;
  q(3) = 0.0f;
  wg7p = mg7;
  h7p = h7;
  p7dot = deriv(cmn, 18, p7);
  statement_28:
  thermo(cmn, p7, h7, t7, s7, xx2, 1, far7, 0);
  hg7 = hg7p - p7dot * vaftbn / t7 / (1.4f * ra);
  u7 = h7 - ajx * ra * t7;
  u7dot = deriv(cmn, 19, u7);
  h7x = (wg7p * h7p - (wg7p - wg7) * u7 - u7dot * p7 * vaftbn / t7 / ra) / wg7;
  errw = (h7 - h7x) / h7;
  dir = fem::sqrt(fem::abs(h7 / h7x));
  afquir(q(1), t7, errw, 0.f, 20.f, 0.0001f, dir, t7t, igo);
  icoafb = 6;
  switch (igo) {
    case 1: goto statement_29;
    case 2: goto statement_31;
    case 3: goto statement_30;
    default: break;
  }
  statement_29:
  t7 = t7t;
  goto statement_28;
  statement_30:
  error(cmn);
  statement_31:
  icoafb = 0;
  comnoz(cmn);
  //C
}

struct comix_save
{
  fem::variant_bindings all5_bindings;
  fem::variant_bindings looppr_bindings;
  char aword[10];

  comix_save() :
    aword("")
  {}
};

void
comix(
  common& cmn)
{
  FEM_CMN_SVE(comix);
  common_write write(cmn);
  int& ides = cmn.ides;
  int& igasmx = cmn.igasmx;
  arr_ref<float> err(cmn.err, dimension(9));
  float& dumd1 = cmn.dumd1;
  float& prfds = cmn.prfds;
  float& a55 = cmn.a55;
  float& a25 = cmn.a25;
  float& a6 = cmn.a6;
  float& ps55 = cmn.ps55;
  float& am55 = cmn.am55;
  float& t55 = cmn.t55;
  float& p55 = cmn.p55;
  float& h55 = cmn.h55;
  float& s55 = cmn.s55;
  float& wg55 = cmn.wg55;
  float& far55 = cmn.far55;
  float& zf = cmn.zf;
  float& pcnf = cmn.pcnf;
  float& t25 = cmn.t25;
  float& p25 = cmn.p25;
  float& h25 = cmn.h25;
  float& wg24 = cmn.wg24;
  float& far24 = cmn.far24;
  float& t6 = cmn.t6;
  float& p6 = cmn.p6;
  float& h6 = cmn.h6;
  float& s6 = cmn.s6;
  float& wg6 = cmn.wg6;
  float& v55 = cmn.v55;
  float& v25 = cmn.v25;
  float& ps6 = cmn.ps6;
  float& v6 = cmn.v6;
  float& am6 = cmn.am6;
  float& am25 = cmn.am25;
  int& icomix = static_cast<common_mhrerr&>(cmn).icomix;
  bool& si = static_cast<common_unts&>(cmn).si;
  //
  common_variant all5(cmn.common_all5, sve.all5_bindings);
  common_variant looppr(cmn.common_looppr, sve.looppr_bindings);
  char* aword= sve.aword;;
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> s50;
      mbr<float> wa22;
      mbr<float> zi;
      mbr<float> pcni;
      mbr<float> cni;
      mbr<float> pri;
      mbr<float> etai;
      mbr<float> waci;
      mbr<float> tffip;
      mbr<float> cnip;
      mbr<float> etatip;
      mbr<float> dhtcip;
      mbr<float> dhti;
      mbr<float> blip;
      mbr<float> pcblip;
      mbr<float> pcnigu;
      mbr<float> zids;
      mbr<float> pcnids;
      mbr<float> prids;
      mbr<float> etaids;
      mbr<float> waids;
      mbr<float> pricf;
      mbr<float> etaicf;
      mbr<float> waicf;
      mbr<float> tfipds;
      mbr<float> cnipds;
      mbr<float> etipds;
      mbr<float> tfipcf;
      mbr<float> cnipcf;
      mbr<float> etipcf;
      mbr<float> dhipcf;
      mbr<float> waicds;
      mbr<float> wai;
      mbr<float> pcbli;
      mbr<float> bli;
      mbr<float> t22ds;
      mbr<float> wa21;
      mbr<float> wg50;
      mbr<float> far50;
      mbr<float> a24;
      mbr<float> ar23;
      mbr<float> dumspl;
      mbr<float> fxfn2m;
      mbr<float> fxm2cp;
      mbr<float> aftfan;
      mbr<float> punt;
      mbr<float> pcblid;
      mbr<float> p6dsav;
      mbr<float> am6dsv;
      mbr<float> etaasv;
      mbr<float> far7sv;
      mbr<float> t4pbl;
      mbr<float> t41;
      mbr<float> fan;
      mbr<int> ispool;
      all5.allocate(), s50, wa22, zi, pcni, cni, pri, etai, waci,
        tffip, cnip, etatip, dhtcip, dhti, blip, pcblip, pcnigu,
        zids, pcnids, prids, etaids, waids, pricf, etaicf, waicf,
        tfipds, cnipds, etipds, tfipcf, cnipcf, etipcf, dhipcf,
        waicds, wai, pcbli, bli, t22ds, wa21, wg50, far50, a24, ar23,
        dumspl, fxfn2m, fxm2cp, aftfan, punt, pcblid, p6dsav, am6dsv,
        etaasv, far7sv, t4pbl, t41, fan, ispool;
    }
    {
      mbr<int> kkgo;
      mbr<float> prfnew;
      mbr<float> prcnew;
      looppr.allocate(), kkgo, prfnew, prcnew;
    }
  }
  /* float const& s50 */ all5.bind<float>();
  /* float const& wa22 */ all5.bind<float>();
  /* float const& zi */ all5.bind<float>();
  /* float const& pcni */ all5.bind<float>();
  /* float const& cni */ all5.bind<float>();
  /* float const& pri */ all5.bind<float>();
  /* float const& etai */ all5.bind<float>();
  /* float const& waci */ all5.bind<float>();
  /* float const& tffip */ all5.bind<float>();
  /* float const& cnip */ all5.bind<float>();
  /* float const& etatip */ all5.bind<float>();
  /* float const& dhtcip */ all5.bind<float>();
  /* float const& dhti */ all5.bind<float>();
  /* float const& blip */ all5.bind<float>();
  /* float const& pcblip */ all5.bind<float>();
  /* float const& pcnigu */ all5.bind<float>();
  /* float const& zids */ all5.bind<float>();
  /* float const& pcnids */ all5.bind<float>();
  /* float const& prids */ all5.bind<float>();
  /* float const& etaids */ all5.bind<float>();
  /* float const& waids */ all5.bind<float>();
  /* float const& pricf */ all5.bind<float>();
  /* float const& etaicf */ all5.bind<float>();
  /* float const& waicf */ all5.bind<float>();
  /* float const& tfipds */ all5.bind<float>();
  /* float const& cnipds */ all5.bind<float>();
  /* float const& etipds */ all5.bind<float>();
  /* float const& tfipcf */ all5.bind<float>();
  /* float const& cnipcf */ all5.bind<float>();
  /* float const& etipcf */ all5.bind<float>();
  /* float const& dhipcf */ all5.bind<float>();
  /* float const& waicds */ all5.bind<float>();
  /* float const& wai */ all5.bind<float>();
  /* float const& pcbli */ all5.bind<float>();
  /* float const& bli */ all5.bind<float>();
  /* float const& t22ds */ all5.bind<float>();
  /* float const& wa21 */ all5.bind<float>();
  /* float const& wg50 */ all5.bind<float>();
  /* float const& far50 */ all5.bind<float>();
  /* float const& a24 */ all5.bind<float>();
  /* float const& ar23 */ all5.bind<float>();
  /* float const& dumspl */ all5.bind<float>();
  /* float const& fxfn2m */ all5.bind<float>();
  /* float const& fxm2cp */ all5.bind<float>();
  /* float const& aftfan */ all5.bind<float>();
  /* float const& punt */ all5.bind<float>();
  /* float const& pcblid */ all5.bind<float>();
  /* float const& p6dsav */ all5.bind<float>();
  /* float const& am6dsv */ all5.bind<float>();
  /* float const& etaasv */ all5.bind<float>();
  /* float const& far7sv */ all5.bind<float>();
  /* float const& t4pbl */ all5.bind<float>();
  /* float const& t41 */ all5.bind<float>();
  /* float const& fan */ all5.bind<float>();
  /* int const& ispool */ all5.bind<int>();
  int& kkgo = looppr.bind<int>();
  float& prfnew = looppr.bind<float>();
  /* float const& prcnew */ looppr.bind<float>();
  if (is_called_first_time) {
    aword = " COMIX";
  }
  float aj = fem::float0;
  float capsf = fem::float0;
  float g = fem::float0;
  float rdem = fem::float0;
  float xx1 = fem::float0;
  float xx2 = fem::float0;
  float xx3 = fem::float0;
  float xx4 = fem::float0;
  float phi55 = fem::float0;
  float xx5 = fem::float0;
  float phi25 = fem::float0;
  float des = fem::float0;
  float ts55 = fem::float0;
  int i = fem::int0;
  float cs55 = fem::float0;
  float ak55 = fem::float0;
  float cp55 = fem::float0;
  float rex55 = fem::float0;
  float phis55 = fem::float0;
  float hs55 = fem::float0;
  float phis = fem::float0;
  float delphi = fem::float0;
//  int ifar55 = fem::int0;
  float hscal = fem::float0;
  float delhs = fem::float0;
  float rho = fem::float0;
  float ps25 = fem::float0;
  float ts25 = fem::float0;
  float cs25 = fem::float0;
  float ak25 = fem::float0;
  float cp25 = fem::float0;
  float rex25 = fem::float0;
  float phis25 = fem::float0;
  float hs25 = fem::float0;
  float wqa = fem::float0;
  float c1 = fem::float0;
  float wcon = fem::float0;
  arr_1d<9, float> qq(fem::fill0);
  float wqat = fem::float0;
  float amx = fem::float0;
  int igogo = fem::int0;
  float dir = fem::float0;
  float ew = fem::float0;
  float amxt = fem::float0;
  int icon = fem::int0;
  int mcon = fem::int0;
  float apx = fem::float0;
  float far26 = fem::float0;
  float amz5 = fem::float0;
  float wg2 = fem::float0;
  float wgs5 = fem::float0;
  float wf55 = fem::float0;
  float wa55 = fem::float0;
  float wf24 = fem::float0;
  float wa24 = fem::float0;
  float phi6 = fem::float0;
  float far6 = fem::float0;
  float ts6 = fem::float0;
  float cs6 = fem::float0;
  float ak6 = fem::float0;
  float cp6 = fem::float0;
  float rex6 = fem::float0;
  float phs6 = fem::float0;
  float hs6 = fem::float0;
  float c2 = fem::float0;
  float c3 = fem::float0;
  float c4 = fem::float0;
  float c5 = fem::float0;
  float c55 = fem::float0;
  float c6 = fem::float0;
  float am62g = fem::float0;
  float an62g = fem::float0;
  float am6g = fem::float0;
  float a6g = fem::float0;
  float c7 = fem::float0;
  float phis6 = fem::float0;
  float s6ave = fem::float0;
  float ak = fem::float0;
  int jj = fem::int0;
  float ak6p = fem::float0;
  float delak6 = fem::float0;
  float am6abd = fem::float0;
  float ts6p = fem::float0;
  float ps6p = fem::float0;
  float rho6 = fem::float0;
  float a6p = fem::float0;
  float dela6 = fem::float0;
  float am62 = fem::float0;
  float ts5 = fem::float0;
  float ams5 = fem::float0;
  float as5 = fem::float0;
  float am6z = fem::float0;
  float dprds = fem::float0;
  float prcnen = fem::float0;
  //C
  cmn.word = aword;
  //C
  if (si) {
    goto statement_100;
  }
  aj = 778.26f;
  capsf = 2116.2170f;
  g = 32.17049f;
  rdem = 1.986375f;
  goto statement_101;
  statement_100:
  aj = 1.0f;
  capsf = 1.0f;
  g = 1.0f;
  rdem = 8316.41f;
  statement_101:
  //C
  icomix = 0;
  procom(cmn, far55, t55, xx1, xx2, xx3, xx4, phi55, xx5);
  procom(cmn, far24, t25, xx1, xx2, xx3, xx4, phi25, xx5);
  if (des == 0) {
    goto statement_12;
  }
  //C
  //C ****   CALCULATE A55 AND A25 WITH PS25=PS55
  //C
  if (ps55 == 0.f) {
    goto statement_3;
  }
  ts55 = t55 * fem::pow((ps55 / p55), 0.286f);
  FEM_DO_SAFE(i, 1, 15) {
    procom(cmn, far55, ts55, cs55, ak55, cp55, rex55, phis55, hs55);
    phis = phi55 - rex55 * fem::alog(p55 / ps55);
    delphi = phis - phis55;
    if (fem::abs(delphi) <= 0.0001f * phis) {
      goto statement_6;
    }
    ts55 = ts55 * fem::exp(4.0f * delphi);
  }
  icomix = 1;
  statement_2:
  error(cmn);
  return;
  //C
  statement_3:
  ts55 = 0.875f * t55;
  FEM_DO_SAFE(i, 1, 15) {
    procom(cmn, far55, ts55, cs55, ak55, cp55, rex55, phis55, hs55);
    v55 = am55 * cs55;
    hscal = h55 - fem::pow2(v55) / (2.f * g * aj);
    delhs = hscal - hs55;
    if (fem::abs(delhs) <= 0.0001f * hscal) {
      goto statement_5;
    }
    ts55 += delhs / cp55;
  }
  icomix = 2;
  goto statement_2;
  statement_5:
  ps55 = p55 / fem::exp((phi55 - phis55) / rex55);
  if (ps55 > p25 && ides == 1 && igasmx > 0) {
    goto statement_45;
  }
  statement_6:
  if (h55 > hs55) {
    goto statement_7;
  }
  write(8, "('0SQRT OF HSS.-HS55 NEG',6e15.6,'S$$SS$')"), p55, ps55,
    cmn.t5, ts55, h55, hs55;
  icomix = 3;
  error(cmn);
  statement_7:
  v55 = fem::sqrt(2.f * g * aj * (h55 - hs55));
  rho = capsf * ps55 / (aj * rex55 * ts55);
  a55 = wg55 / (rho * v55);
  am55 = v55 / cs55;
  if (igasmx > 0) {
    goto statement_8;
  }
  write(6,
    "('0TURBINE AREA DESIGN',6x,'  A55=',e15.8,'   AM55=',e15.8)"),
    a55, am55;
  if (igasmx == 0) {
    goto statement_41;
  }
  if (igasmx ==  - 1) {
    goto statement_35;
  }
  statement_8:
  ps25 = ps55;
  ts25 = t25 * fem::pow((ps25 / p25), 0.286f);
  FEM_DO_SAFE(i, 1, 15) {
    procom(cmn, far24, ts25, cs25, ak25, cp25, rex25, phis25, hs25);
    phis = phi25 - rex25 * fem::alog(p25 / ps25);
    delphi = phis - phis25;
    if (fem::abs(delphi) <= 0.0001f * phis) {
      goto statement_10;
    }
    ts25 = ts25 * fem::exp(4.0f * delphi);
  }
  icomix = 4;
  goto statement_2;
  statement_10:
  if (h25 > hs25) {
    goto statement_11;
  }
  write(8, "('0SQRT OF H25-HS25 NEG ',6e115.6,'$$$$$$')"), p25, ps25,
    t25, ts25, h25, hs25;
  icomix = 5;
  error(cmn);
  statement_11:
  v25 = fem::sqrt(2.f * g * aj * (h25 - hs25));
  rho = capsf * ps25 / (aj * rex25 * ts25);
  a25 = wg24 / (rho * v25);
  am25 = v25 / cs25;
  write(6,
    "('0TURBINE/DUCT AREA DESIGN','   A55=',e15.8,'  AMS55=',e15.8,'    A25=',"
    "e15.8,'   AM25=',e15.8)"),
    a55, am55, a25, am25;
  goto statement_27;
  //C
  //C     CALCULATE PS55 AND PS25
  //C
  statement_12:
  wqa = wg55 / a55;
  c1 = p55 * fem::sqrt(g / (t55 * aj)) * capsf;
  wcon = 0;
  qq(2) = 0.f;
  qq(3) = 0.f;
  am55 = 0.50f;
  ts55 = 0.875f * t55;
  statement_13:
  FEM_DO_SAFE(i, 1, 15) {
    procom(cmn, far55, ts55, cs55, ak55, cp55, rex55, phis55, hs55);
    v55 = am55 * cs55;
    hscal = h55 - fem::pow2(v55) / (2.f * g * aj);
    delhs = hscal - hs55;
    if (fem::abs(delhs) <= 0.0005f * hscal) {
      goto statement_15;
    }
    ts55 += delhs / cp55;
  }
  icomix = 6;
  goto statement_2;
  statement_15:
  wqat = c1 * fem::sqrt(ak55 / rex55) * am55 / fem::pow((1.f + (
    ak55 - 1.f) * fem::pow2(am55) / 2.f), ((ak55 + 1.f) / (2.f * (
    ak55 - 1.f))));
  amx = am55;
  igogo = 0;
  statement_16:
  dir = wqa / wqat;
  ew = (wqa - wqat) / wqa;
  afquir(qq(1), amx, ew, 0.f, 30.f, 0.0005f, dir, amxt, icon);
  icomix = 7;
  switch (icon) {
    case 1: goto statement_17;
    case 2: goto statement_22;
    case 3: goto statement_2;
    default: break;
  }
  statement_17:
  if (amxt <= 1.0f) {
    goto statement_20;
  }
  amxt = 0.7f;
  mcon++;
  if (mcon <= 1) {
    goto statement_20;
  }
  if (cmn.mode == 3) {
    goto statement_19;
  }
  pcnf = dumd1;
  write(8,
    "('0COMIX PCNF=',f7.4,' AM=',f8.6,' P55=',f9.5,'   P25',f9.5,' PS25=',"
    "f9.5,'$$$$$$')"),
    pcnf, amx, p55, ps55, p25, ps25;
  pcnf = 1.01f * pcnf;
  dumd1 = pcnf;
  statement_18:
  cmn.nomap = 7;
  icomix = 0;
  return;
  statement_19:
  write(8,
    "('0COMIX ZF=',f8.5,' AM=',f8.6,' P55=',f9.5,'  PS55',f9.5,' P25=',f9.5,"
    "' PS25=',f9.5,'S$$$$$')"),
    zf, apx, p55, ps55, p25, ps25;
  zf = 0.99f * zf;
  goto statement_18;
  statement_20:
  if (igogo == 1) {
    goto statement_21;
  }
  am55 = amxt;
  goto statement_13;
  statement_21:
  am25 = amxt;
  goto statement_23;
  statement_22:
  if (igogo == 1) {
    goto statement_26;
  }
  ps55 = p55 / fem::exp((phi55 - phis55) / rex55);
  if (igasmx == 0) {
    goto statement_41;
  }
  if (igasmx ==  - 1) {
    goto statement_35;
  }
  wqa = wg24 / a25;
  c1 = p25 * fem::sqrt(g / (t25 * aj)) * capsf;
  wcon = 0;
  qq(2) = 0.f;
  qq(3) = 0.f;
  am25 = 0.25f;
  ts25 = 0.875f * t25;
  statement_23:
  FEM_DO_SAFE(i, 1, 15) {
    procom(cmn, far26, ts25, cs25, ak25, cp25, rex25, phis25, hs25);
    v25 = am25 * cs25;
    hscal = h25 - fem::pow2(v25) / (2.f * g * aj);
    delhs = hscal - hs25;
    if (fem::abs(delhs) <= 0.0005f * hscal) {
      goto statement_25;
    }
    ts25 += delhs / cp25;
  }
  icomix = 8;
  goto statement_2;
  statement_25:
  wqat = c1 * fem::sqrt(ak25 / rex25) * am25 / fem::pow((1.f + (
    ak25 - 1.f) * fem::pow2(am25) / 2.f), ((ak25 + 1.f) / (2.f * (
    ak25 - 1.f))));
  amx = amz5;
  igogo = 1;
  goto statement_16;
  statement_26:
  ps25 = p25 * fem::exp((phi25 - phis25) / rex25);
  statement_27:
  wg6 = wg2 + wg55;
  err(5) = (ps25 - ps55) / ps25;
  wf55 = far55 * wgs5 / (far55 + 1.f);
  wa55 = wg55 / (far55 + 1.f);
  wf24 = far24 * cmn.wg4 / (far24 + 1.f);
  wa24 = wg24 / (far24 + 1.f);
  far26 = (wf55 + wf24) / (wa55 + wa24);
  h6 = (wg24 * h25 + wg55 * h55) / wg6;
  thermo(cmn, 1.f, h6, t6, phi6, amx, i, far6, 1);
  c1 = ps55 * a55 * (1.f + ak55 * fem::pow2(am55)) + ps25 * a25 * (
    1.f + ak25 * fem::pow2(am25));
  ts6 = 0.833f * t6;
  FEM_DO_SAFE(i, 1, 15) {
    procom(cmn, far6, ts6, cs6, ak6, cp6, rex6, phs6, hs6);
    c2 = wg6 * fem::sqrt(aj * rex6 * t6 / (ak6 * g));
    c3 = c2 / (capsf * c1);
    c4 = (ak6 - 1.f) / 2.f - fem::pow2((c3 * ak6));
    c5 = 1.f - 2.f * ak6 * fem::pow2(c3);
    c6 = fem::pow2(c55) + 4.f * c4 * fem::pow2(c3);
    icomix = 9;
    switch (fem::if_arithmetic(c6)) {
      case -1: goto statement_28;
      case  0: goto statement_29;
      default: goto statement_30;
    }
    statement_28:
    error(cmn);
    return;
    statement_29:
    am62g = -c5 / (2.f * c4);
    goto statement_31;
    statement_30:
    an62g = (fem::sqrt(c6) - c5) / (2.f * c4);
    statement_31:
    if (am62g <= 0.f) {
      goto statement_28;
    }
    am6g = fem::sqrt(am62g);
    v6 = am6g * cs6;
    hscal = h6 - (v6) / (2.f * g * aj);
    delhs = hscal - hs6;
    if (fem::abs(delhs) <= 0.0005f * hscal) {
      goto statement_33;
    }
    ts6 += delhs / cp6;
  }
  icomix = 10;
  error(cmn);
  statement_33:
  a6g = a25 + a55;
  c7 = fem::sqrt(1.f + (ak6 - 1.f) * am62g / 2.f);
  ps6 = c2 / (capsf * a6g * am6g * c7);
  p6 = ps6 * fem::exp((phi6 - phis6) / rex6);
  thermo(cmn, p6, h6, t6, s6, xx1, 1, far6, 0);
  s6ave = (wg24 * cmn.s25 + wg55 * s55) / wg6;
  if (s6 >= s6ave) {
    goto statement_35;
  }
  s6 = s6ave;
  p6 = fem::exp(amx * (phi6 - s6) / rdem);
  statement_35:
  if (igasmx == 1) {
    goto statement_43;
  }
  if (igasmx ==  - 1) {
    goto statement_36;
  }
  if (igasmx == 2) {
    goto statement_37;
  }
  statement_36:
  t6 = t55;
  p6 = p55;
  h6 = h55;
  s6 = s55;
  wg6 = wg55;
  ps6 = ps55;
  far6 = far55;
  ak6 = ak55;
  statement_37:
  if (ides == 0) {
    goto statement_38;
  }
  //C
  //C ****   CALCULATES A6 AS A FUNCTION OF INPUT AM6
  //C
  ts6 = t6 / (1.0f + (((ak - 1.0f) / 2.0f) * fem::pow2(am6)));
  FEM_DO_SAFE(jj, 1, 15) {
    ak6p = ak6;
    procom(cmn, far6, ts6, cs6, ak6, cp6, rex6, phis6, hs6);
    v6 = am6 * cs6;
    delak6 = ak6p - ak6;
    if (fem::abs(delak6) <= 0.0005f * ak6) {
      goto statement_54;
    }
    ts6 = t6 / (1.0f + (((ak6 - 1.0f) / 2.0f) * fem::pow2(am6)));
  }
  icomix = 11;
  error(cmn);
  statement_54:
  ps6 = p6 / (fem::pow((1.0f + (((ak6 - 1.0f) / 2.0f) * fem::pow2(am6))),
    (ak6 / (ak6 - 1.0f))));
  am6abd = am6;
  rho = capsf * ps6 / (aj * rex6 * ts6);
  a6 = wg6 / (rho * v6);
  write(6, "(3x,'AFTERBURNER DESGN AREA A6 ,',f8.3)"), a6;
  goto statement_44;
  //C
  //C   CALCULATES M6=F(A6DESIGN)
  //C
  statement_38:
  ts6p = t6 / (1.0f + (((ak6 - 1.0f) / 2.0f) * fem::pow2(am6abd)));
  FEM_DO_SAFE(i, 1, 55) {
    procom(cmn, far6, ts6p, cs6, ak6, cp6, rex6, phis6, hs6);
    ps6p = ps6 * fem::pow((ts6p / ts6), (ak6 / (ak6 - 1.0f)));
    rho6 = capsf * ps6p / (aj * rex6 * ts6p);
    v6 = fem::sqrt(2.f * g * aj * (h6 - hs6));
    if ((h6 - hs6) < 0.0f) {
      goto statement_42;
    }
    a6p = wg6 / (rho6 * v6);
    dela6 = a6p - a6;
    v6 = wg6 / (rho6 * a6);
    am6 = v6 / cs6;
    am62 = fem::pow2(am6);
    if (fem::abs(dela6) <= 0.002f * a6) {
      goto statement_40;
    }
    ts6p = t6 / (1.0f + (((ak6 - 1.0f) / 2.0f) * am62));
  }
  icomix = 12;
  error(cmn);
  statement_40:
  ts6 = ts6p;
  ps6 = ps6p;
  goto statement_44;
  statement_41:
  t6 = ts5;
  p6 = p55;
  h6 = h55;
  s6 = s55;
  wg6 = wg55;
  ps6 = ps55;
  v6 = v55;
  am6 = ams5;
  if (igasmx == 0) {
    a6 = as5;
  }
  goto statement_44;
  statement_42:
  write(6, "(3x,'NEG*HS6 FACTOR  H6',f9.4,3x,'HS6,',f9.6)"), h6, hs6;
  icomix = 13;
  error(cmn);
  statement_43:
  am6z = am62g;
  am6 = am6g;
  a6 = a25 + a55;
  icomix = 0;
  statement_44:
  coafbn(cmn);
  return;
  statement_45:
  kkgo = 1;
  dprds = prfds * cmn.prcds;
  prfnew = prfds * ps55 / p25 * 1.02f;
  prcnen = dprds / prfnew;
  icomix = 0;
  engbal(cmn);
  //C
}

struct fastbk_save
{
  fem::variant_bindings all5_bindings;
};

void
fastbk(
  common& cmn)
{
  FEM_CMN_SVE(fastbk);
  float& t25 = cmn.t25;
  float& p25 = cmn.p25;
  float& s25 = cmn.s25;
  float& wg24 = cmn.wg24;
  //
  common_variant all5(cmn.common_all5, sve.all5_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> s50;
      mbr<float> wa22;
      mbr<float> zi;
      mbr<float> pcni;
      mbr<float> cni;
      mbr<float> pri;
      mbr<float> etai;
      mbr<float> waci;
      mbr<float> tffip;
      mbr<float> cnip;
      mbr<float> etatip;
      mbr<float> dhtcip;
      mbr<float> dhti;
      mbr<float> blip;
      mbr<float> pcblip;
      mbr<float> pcnigu;
      mbr<float> zids;
      mbr<float> pcnids;
      mbr<float> prids;
      mbr<float> etaids;
      mbr<float> waids;
      mbr<float> pricf;
      mbr<float> etaicf;
      mbr<float> waicf;
      mbr<float> tfipds;
      mbr<float> cnipds;
      mbr<float> etipds;
      mbr<float> tfipcf;
      mbr<float> cnipcf;
      mbr<float> etipcf;
      mbr<float> dhipcf;
      mbr<float> waicds;
      mbr<float> wai;
      mbr<float> pcbli;
      mbr<float> bli;
      mbr<float> t22ds;
      mbr<float> wa21;
      mbr<float> wg50;
      mbr<float> far50;
      mbr<float> a24;
      mbr<float> ar23;
      mbr<float> dumspl;
      mbr<float> fxfn2m;
      mbr<float> fxm2cp;
      mbr<float> aftfan;
      mbr<float> punt;
      mbr<float> pcblid;
      mbr<float> p6dsav;
      mbr<float> am6dsv;
      mbr<float> etaasv;
      mbr<float> far7sv;
      mbr<float> t4pbl;
      mbr<float> t41;
      mbr<bool> fan;
      mbr<int> ispool;
      all5.allocate(), s50, wa22, zi, pcni, cni, pri, etai, waci,
        tffip, cnip, etatip, dhtcip, dhti, blip, pcblip, pcnigu,
        zids, pcnids, prids, etaids, waids, pricf, etaicf, waicf,
        tfipds, cnipds, etipds, tfipcf, cnipcf, etipcf, dhipcf,
        waicds, wai, pcbli, bli, t22ds, wa21, wg50, far50, a24, ar23,
        dumspl, fxfn2m, fxm2cp, aftfan, punt, pcblid, p6dsav, am6dsv,
        etaasv, far7sv, t4pbl, t41, fan, ispool;
    }
  }
  /* float const& s50 */ all5.bind<float>();
  /* float const& wa22 */ all5.bind<float>();
  /* float const& zi */ all5.bind<float>();
  /* float const& pcni */ all5.bind<float>();
  /* float const& cni */ all5.bind<float>();
  /* float const& pri */ all5.bind<float>();
  /* float const& etai */ all5.bind<float>();
  /* float const& waci */ all5.bind<float>();
  /* float const& tffip */ all5.bind<float>();
  /* float const& cnip */ all5.bind<float>();
  /* float const& etatip */ all5.bind<float>();
  /* float const& dhtcip */ all5.bind<float>();
  /* float const& dhti */ all5.bind<float>();
  /* float const& blip */ all5.bind<float>();
  /* float const& pcblip */ all5.bind<float>();
  /* float const& pcnigu */ all5.bind<float>();
  /* float const& zids */ all5.bind<float>();
  /* float const& pcnids */ all5.bind<float>();
  /* float const& prids */ all5.bind<float>();
  /* float const& etaids */ all5.bind<float>();
  /* float const& waids */ all5.bind<float>();
  /* float const& pricf */ all5.bind<float>();
  /* float const& etaicf */ all5.bind<float>();
  /* float const& waicf */ all5.bind<float>();
  /* float const& tfipds */ all5.bind<float>();
  /* float const& cnipds */ all5.bind<float>();
  /* float const& etipds */ all5.bind<float>();
  /* float const& tfipcf */ all5.bind<float>();
  /* float const& cnipcf */ all5.bind<float>();
  /* float const& etipcf */ all5.bind<float>();
  /* float const& dhipcf */ all5.bind<float>();
  /* float const& waicds */ all5.bind<float>();
  /* float const& wai */ all5.bind<float>();
  /* float const& pcbli */ all5.bind<float>();
  /* float const& bli */ all5.bind<float>();
  /* float const& t22ds */ all5.bind<float>();
  /* float const& wa21 */ all5.bind<float>();
  /* float const& wg50 */ all5.bind<float>();
  /* float const& far50 */ all5.bind<float>();
  /* float const& a24 */ all5.bind<float>();
  /* float const& ar23 */ all5.bind<float>();
  /* float const& dumspl */ all5.bind<float>();
  /* float const& fxfn2m */ all5.bind<float>();
  /* float const& fxm2cp */ all5.bind<float>();
  /* float const& aftfan */ all5.bind<float>();
  /* float const& punt */ all5.bind<float>();
  /* float const& pcblid */ all5.bind<float>();
  /* float const& p6dsav */ all5.bind<float>();
  /* float const& am6dsv */ all5.bind<float>();
  /* float const& etaasv */ all5.bind<float>();
  /* float const& far7sv */ all5.bind<float>();
  /* float const& t4pbl */ all5.bind<float>();
  /* float const& t41 */ all5.bind<float>();
  bool const& fan = all5.bind<bool>();
  /* int const& ispool */ all5.bind<int>();
  float ts5 = fem::float0;
  float xsss = fem::float0;
  float hzs = fem::float0;
  //C
  cmn.xt55 = ts5;
  cmn.xp55 = cmn.p55;
  cmn.xh55 = cmn.h55;
  xsss = cmn.s55;
  //C
  if (fan) {
    goto statement_1;
  }
  //C
  t25 = cmn.t21;
  p25 = cmn.p21;
  hzs = cmn.h21;
  s25 = cmn.s21;
  wg24 = cmn.waf - cmn.blf;
  //C
  statement_1:
  cmn.xt25 = t25;
  cmn.xp25 = p25;
  cmn.xh25 = cmn.h25;
  cmn.xs25 = s25;
  cmn.xwfb = cmn.wfb;
  cmn.xwg55 = cmn.wg55;
  cmn.xfar55 = cmn.far55;
  cmn.xwfd = cmn.wfd;
  cmn.xwg24 = wg24;
  cmn.xfar24 = cmn.far24;
  cmn.xxp1 = cmn.p1;
  //C
  comix(cmn);
  //C
}

struct coduct_save
{
  fem::variant_bindings all5_bindings;
  fem::variant_bindings dyn_bindings;
  fem::variant_bindings units_bindings;
  fem::variant_bindings vols_bindings;
  char aword1[10];
  char aword2[10];

  coduct_save() :
    aword1(""),
    aword2("")
  {}
};

void
coduct(
  common& cmn)
{
  FEM_CMN_SVE(coduct);
  common_write write(cmn);
  char* word = cmn.word;
  int& ides = cmn.ides;
  int& igasmx = cmn.igasmx;
  int& idburn = cmn.idburn;
  int& idshoc = cmn.idshoc;
  int& nozflt = cmn.nozflt;
  arr_ref<float> err(cmn.err, dimension(9));
  float& wa23ds = cmn.wa23ds;
  float& a28 = cmn.a28;
  float& a29 = cmn.a29;
  float& p1 = cmn.p1;
  float& blf = cmn.blf;
  float& bldu = cmn.bldu;
  float& waf = cmn.waf;
  float& t23 = cmn.t23;
  float& p23 = cmn.p23;
  float& h23 = cmn.h23;
  float& t24 = cmn.t24;
  float& p24 = cmn.p24;
  float& h24 = cmn.h24;
  float& s24 = cmn.s24;
  float& t25 = cmn.t25;
  float& p25 = cmn.p25;
  float& h25 = cmn.h25;
  float& s25 = cmn.s25;
  float& t28 = cmn.t28;
  float& p28 = cmn.p28;
  float& h28 = cmn.h28;
  float& s28 = cmn.s28;
  float& t29 = cmn.t29;
  float& p29 = cmn.p29;
  float& h29 = cmn.h29;
  float& s29 = cmn.s29;
  float& wad = cmn.wad;
  float& wfd = cmn.wfd;
  float& wg24 = cmn.wg24;
  float& far24 = cmn.far24;
  float& dpduc = cmn.dpduc;
  float& bypass = cmn.bypass;
  float& ts28 = cmn.ts28;
  float& ps28 = cmn.ps28;
  float& v28 = cmn.v28;
  float& am28 = cmn.am28;
  float& ts29 = cmn.ts29;
  float& ps29 = cmn.ps29;
  float& v29 = cmn.v29;
  float& am29 = cmn.am29;
  int& icoduc = static_cast<common_whrerr&>(cmn).icoduc;
  //
  common_variant all5(cmn.common_all5, sve.all5_bindings);
  common_variant dyn(cmn.common_dyn, sve.dyn_bindings);
  common_variant vols(cmn.common_vols, sve.vols_bindings);
  common_variant units(cmn.common_units, sve.units_bindings);
  char* aword1 = sve.aword1;
  char* aword2 = sve.aword2;
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> s50;
      mbr<float> wa22;
      mbr<float> zi;
      mbr<float> pcni;
      mbr<float> cni;
      mbr<float> pri;
      mbr<float> etai;
      mbr<float> waci;
      mbr<float> tffip;
      mbr<float> cnip;
      mbr<float> etatip;
      mbr<float> dhtcip;
      mbr<float> dhti;
      mbr<float> blip;
      mbr<float> pcblip;
      mbr<float> pcnigu;
      mbr<float> zids;
      mbr<float> pcnids;
      mbr<float> prids;
      mbr<float> etaids;
      mbr<float> waids;
      mbr<float> pricf;
      mbr<float> etaicf;
      mbr<float> waicf;
      mbr<float> tfipds;
      mbr<float> cnipds;
      mbr<float> etipds;
      mbr<float> tfipcf;
      mbr<float> cnipcf;
      mbr<float> etipcf;
      mbr<float> dhipcf;
      mbr<float> waicds;
      mbr<float> wai;
      mbr<float> pcbli;
      mbr<float> bli;
      mbr<float> t22ds;
      mbr<float> wa21;
      mbr<float> wg50;
      mbr<float> far50;
      mbr<float> a24;
      mbr<float> ar23;
      mbr<float> dumspl;
      mbr<float> fxfn2m;
      mbr<float> fxm2cp;
      mbr<bool> aftfan;
      mbr<float> punt;
      mbr<float> pcblid;
      mbr<float> p6dsav;
      mbr<float> am6dsv;
      mbr<float> etaasv;
      mbr<float> far7sv;
      mbr<float> t4pbl;
      mbr<float> t41;
      mbr<float> fan;
      mbr<int> ispool;
      all5.allocate(), s50, wa22, zi, pcni, cni, pri, etai, waci,
        tffip, cnip, etatip, dhtcip, dhti, blip, pcblip, pcnigu,
        zids, pcnids, prids, etaids, waids, pricf, etaicf, waicf,
        tfipds, cnipds, etipds, tfipcf, cnipcf, etipcf, dhipcf,
        waicds, wai, pcbli, bli, t22ds, wa21, wg50, far50, a24, ar23,
        dumspl, fxfn2m, fxm2cp, aftfan, punt, pcblid, p6dsav, am6dsv,
        etaasv, far7sv, t4pbl, t41, fan, ispool;
    }
    {
      mbr<int> itran;
      mbr<int> iime;
      mbr<float> dt;
      mbr<float> tf;
      mbr<int> jtran;
      mbr<int> nstep;
      mbr<float> tprint;
      mbr<float> dtprnt;
      dyn.allocate(), itran, iime, dt, tf, jtran, nstep, tprint, dtprnt;
    }
    {
      mbr<float> vfan;
      mbr<float> vintc;
      mbr<float> vcomp;
      mbr<float> vcomb;
      mbr<float> vhptrb;
      mbr<float> viptrb;
      mbr<float> vlptrb;
      mbr<float> vaftbn;
      mbr<float> vfduct;
      mbr<float> vwduct;
      vols.allocate(), vfan, vintc, vcomp, vcomb, vhptrb, viptrb,
        vlptrb, vaftbn, vfduct, vwduct;
    }
    {
      mbr<bool> si;
      units.allocate(), si;
    }
  }
  /* float const& s50 */ all5.bind<float>();
  /* float const& wa22 */ all5.bind<float>();
  /* float const& zi */ all5.bind<float>();
  /* float const& pcni */ all5.bind<float>();
  /* float const& cni */ all5.bind<float>();
  /* float const& pri */ all5.bind<float>();
  /* float const& etai */ all5.bind<float>();
  /* float const& waci */ all5.bind<float>();
  /* float const& tffip */ all5.bind<float>();
  /* float const& cnip */ all5.bind<float>();
  /* float const& etatip */ all5.bind<float>();
  /* float const& dhtcip */ all5.bind<float>();
  /* float const& dhti */ all5.bind<float>();
  /* float const& blip */ all5.bind<float>();
  /* float const& pcblip */ all5.bind<float>();
  /* float const& pcnigu */ all5.bind<float>();
  /* float const& zids */ all5.bind<float>();
  /* float const& pcnids */ all5.bind<float>();
  /* float const& prids */ all5.bind<float>();
  /* float const& etaids */ all5.bind<float>();
  /* float const& waids */ all5.bind<float>();
  /* float const& pricf */ all5.bind<float>();
  /* float const& etaicf */ all5.bind<float>();
  /* float const& waicf */ all5.bind<float>();
  /* float const& tfipds */ all5.bind<float>();
  /* float const& cnipds */ all5.bind<float>();
  /* float const& etipds */ all5.bind<float>();
  /* float const& tfipcf */ all5.bind<float>();
  /* float const& cnipcf */ all5.bind<float>();
  /* float const& etipcf */ all5.bind<float>();
  /* float const& dhipcf */ all5.bind<float>();
  /* float const& waicds */ all5.bind<float>();
  float const& wai = all5.bind<float>();
  /* float const& pcbli */ all5.bind<float>();
  /* float const& bli */ all5.bind<float>();
  /* float const& t22ds */ all5.bind<float>();
  /* float const& wa21 */ all5.bind<float>();
  /* float const& wg50 */ all5.bind<float>();
  /* float const& far50 */ all5.bind<float>();
  float& a24 = all5.bind<float>();
  /* float const& ar23 */ all5.bind<float>();
  /* float const& dumspl */ all5.bind<float>();
  /* float const& fxfn2m */ all5.bind<float>();
  /* float const& fxm2cp */ all5.bind<float>();
  bool const& aftfan = all5.bind<bool>();
  /* float const& punt */ all5.bind<float>();
  float const& pcblid = all5.bind<float>();
  /* float const& p6dsav */ all5.bind<float>();
  /* float const& am6dsv */ all5.bind<float>();
  /* float const& etaasv */ all5.bind<float>();
  /* float const& far7sv */ all5.bind<float>();
  /* float const& t4pbl */ all5.bind<float>();
  /* float const& t41 */ all5.bind<float>();
  /* float const& fan */ all5.bind<float>();
  /* int const& ispool */ all5.bind<int>();
  int const& itran = dyn.bind<int>();
  /* int const& iime */ dyn.bind<int>();
  /* float const& dt */ dyn.bind<float>();
  /* float const& tf */ dyn.bind<float>();
  /* int const& jtran */ dyn.bind<int>();
  /* int const& nstep */ dyn.bind<int>();
  /* float const& tprint */ dyn.bind<float>();
  /* float const& dtprnt */ dyn.bind<float>();
  /* float const& vfan */ vols.bind<float>();
  /* float const& vintc */ vols.bind<float>();
  /* float const& vcomp */ vols.bind<float>();
  /* float const& vcomb */ vols.bind<float>();
  /* float const& vhptrb */ vols.bind<float>();
  /* float const& viptrb */ vols.bind<float>();
  /* float const& vlptrb */ vols.bind<float>();
  /* float const& vaftbn */ vols.bind<float>();
  float const& vfduct = vols.bind<float>();
  /* float const& vwduct */ vols.bind<float>();
  bool const& si = units.bind<bool>();
  if (is_called_first_time) {
    aword1 = "CODUCT";
    aword2 = "ONOZZL";
  }
  arr_1d<9, float> q(fem::fill0);
  float gogo = fem::float0;
  float aj = fem::float0;
  float ajx = fem::float0;
  float capsf = fem::float0;
  float g = fem::float0;
  float tstd = fem::float0;
  float tdel = fem::float0;
  float tmax = fem::float0;
  float ra = fem::float0;
  float std = fem::float0;
  float wax = fem::float0;
  float xx2 = fem::float0;
  float wa23c = fem::float0;
  float wa23d = fem::float0;
  float xx1 = fem::float0;
  float xx3 = fem::float0;
  float xx4 = fem::float0;
  float phi23 = fem::float0;
  float xx6 = fem::float0;
  float am23 = fem::float0;
  float am24 = fem::float0;
  float ts24 = fem::float0;
  int i = fem::int0;
  float cs24 = fem::float0;
  float ak24 = fem::float0;
  float cp24 = fem::float0;
  float rex24 = fem::float0;
  float v22 = fem::float0;
  float v24 = fem::float0;
  float hscal = fem::float0;
  float hs24 = fem::float0;
  float delhs = fem::float0;
  float c1 = fem::float0;
  float ak21 = fem::float0;
  float astoa = fem::float0;
  float eqwcr = fem::float0;
  float wa23cc = fem::float0;
  float wqa = fem::float0;
  float wqat = fem::float0;
  float dir = fem::float0;
  float ew = fem::float0;
  float am24t = fem::float0;
  int igo = fem::int0;
  float phis24 = fem::float0;
  float ps24 = fem::float0;
  float rho42 = fem::float0;
  float ps42 = fem::float0;
  float v42 = fem::float0;
  float hv = fem::float0;
  float ha = fem::float0;
  float far = fem::float0;
  float wfdx = fem::float0;
  float errw = fem::float0;
  float t24t = fem::float0;
  float phi24 = fem::float0;
  float rho24 = fem::float0;
  float rh024 = fem::float0;
  float caps = fem::float0;
  float ps24a = fem::float0;
  float ep = fem::float0;
  float v24t = fem::float0;
  float p26 = fem::float0;
  float xxs = fem::float0;
  float xxi = fem::float0;
  float wg24p = fem::float0;
  float h24p = fem::float0;
  float p24dot = fem::float0;
  float u24 = fem::float0;
  float u24dot = fem::float0;
  float h24x = fem::float0;
  float erw = fem::float0;
  float errm = fem::float0;
  int nozd = fem::int0;
  int idnoz = fem::int0;
  int idco = fem::int0;
  float p25r = fem::float0;
  float sz28 = fem::float0;
  int icon = fem::int0;
  float t2s = fem::float0;
  //C
  word = aword1;
  q(2) = 0.f;
  q(3) = 0.f;
  gogo = 0.0f;
  if (si) {
    goto statement_100;
  }
  aj = 778.26f;
  ajx = 2.719f;
  capsf = 2116.2170f;
  g = 32.174049f;
  tstd = 518.67f;
  tdel = 2000.0f;
  tmax = 4000.0f;
  ra = 0.0252f;
  goto statement_101;
  statement_100:
  aj = 1.0f;
  ajx = 1.0f;
  capsf = 101325.0f;
  g = 1.0f;
  std = 288.15f;
  tdel = 1111.0f;
  tmax = 2222.0f;
  ra = 286.9f;
  statement_101:
  icoduc = 0;
  wax = waf - wai - blf;
  if (pcblid == 0.f) {
    wax = waf - cmn.wac - blf;
  }
  if (aftfan) {
    wax = waf - blf;
  }
  wad = wax + bldu;
  p23 = cmn.p22;
  //C
  //C        DRY LOSS
  //C
  h23 = (bldu * cmn.h3 + wax * cmn.h22) / wad;
  thermo(cmn, p23, h23, t23, cmn.s23, xx2, 1, 0.0f, 1);
  wa23c = wad * fem::sqrt(t23) / p23;
  if (ides == 1) {
    wa23ds = wa23d;
  }
  bypass = (waf - wai) / wai;
  if (aftfan) {
    bypass = waf / wai;
  }
  dpduc = cmn.dpduds * (wa23c / wa23ds);
  if (dpduc > 1.f) {
    dpduc = 1.0f;
  }
  p24 = p23 * (1.f - dpduc);
  procom(cmn, 0.f, t23, xx1, xx2, xx3, xx4, phi23, xx6);
  if (igasmx > 0) {
    idburn = 0.f;
  }
  am24 = am23;
  ts24 = t23 * 0.875f;
  statement_1:
  FEM_DO_SAFE(i, 1, 15) {
    procom(cmn, 0.f, ts24, cs24, ak24, cp24, rex24, phi23, xx6);
    v22 = am24 * cs24;
    hscal = h23 - fem::pow2(v24) / (2.f * g * aj);
    delhs = hscal - hs24;
    if (fem::abs(delhs) <= 0.0001f * hscal) {
      goto statement_3;
    }
    ts24 += delhs / cp24;
  }
  icoduc = 1;
  goto statement_11;
  statement_3:
  c1 = p24 * fem::sqrt(g / (t23 * aj)) * capsf;
  if (ides != 1) {
    goto statement_4;
  }
  if (gogo > 0.f) {
    goto statement_4;
  }
  astoa = fem::pow(((ak24 + 1.f) / 2.f), ((ak24 + 1.f) / (2.f * (
    ak24 - 1.f)))) * am24 * fem::pow((1.f + (((ak24 - 1.f) / 2.f) *
    fem::pow2(am24))), (-(ak21 + 1.f) / (2.f * (ak24 - 1.f))));
  eqwcr = fem::sqrt(g * ak24 / rex24 / aj) / (fem::sqrt(tstd) /
    capsf) * fem::pow((2.0f / (ak24 + 1.f)), ((ak24 + 1.f) / 2.f / (
    ak24 - 1.f)));
  wa23cc = wa23c / fem::sqrt(tstd);
  a24 = 1.f / astoa * wa23cc / eqwcr;
  gogo = 1.0f;
  statement_4:
  wqa = wad / a24;
  wqat = c1 * fem::sqrt(ak24 / rex24) * am24 / fem::pow((1.f + (
    ak21 - 1.f) * fem::pow2(am24) / 2.f), ((ak24 + 1.f) / (2.f * (
    ak24 - 1.f))));
  dir = wqa / wqat;
  ew = (wqa - wqat) / wqa;
  afquir(q(1), am24, ew, 0.f, 30, 0.001f, dir, am24t, igo);
  icoduc = 2;
  switch (igo) {
    case 1: goto statement_5;
    case 2: goto statement_6;
    case 3: goto statement_11;
    default: break;
  }
  statement_5:
  am24 = am24t;
  if (am24 > 1.0f) {
    am24 = 0.5f;
  }
  goto statement_1;
  statement_6:
  ps24 = p24 / fem::exp((phi23 - phis24) / rex24);
  if (idburn > 0) {
    goto statement_8;
  }
  //C
  //C        NON-DUCT BURNING
  //C
  t24 = t23;
  wfd = 0.f;
  far24 = 0.f;
  //C
  goto statement_17;
  //C
  statement_8:
  if (idburn == 2) {
    t24 = t23 + tdel;
  }
  statement_9:
  if (t24 > tmax) {
    t24 = tmax;
  }
  if (t24 < t23) {
    t24 = t23;
  }
  //C
  //C        DUCT BURNING
  //C
  rho42 = capsf * ps24 / (aj * rex24 * ts24);
  ps42 = ps24;
  v42 = v24;
  q(2) = 0.f;
  q(3) = 0.f;
  if (t24 < t23) {
    t24 = t23 * 1.001f;
  }
  //C
  //C        IF DESIRED, ENTER CALCULATIONS FOR ETAD HERE
  //C
  if (si) {
    t24 = t24 * 9.0f / 5.0f;
  }
  hv = ((((((-0.4594317e-19f * t24) - 0.2034116e-15f) * t24 +
    0.2783643e-11f) * t24 + 0.2051501e-07f) * t24 - 0.2453116e-03f) *
    t24 - 0.9433296e-01f) * t24 + 0.1845537e+05f;
  if (si) {
    t24 = t24 * 5.0f / 9.0f;
  }
  if (si) {
    hv = hv * 2325.4295f;
  }
  thermo(cmn, p24, ha, t24, xx1, xx2, 0, 0.0f, 0);
  far24 = (ha - h23) / (hv * cmn.etad);
  if (far24 < 0.f) {
    far = 0.f;
  }
  wfdx = far24 * wad;
  if (idburn != 2) {
    goto statement_12;
  }
  errw = (wfd - wfdx) / wfd;
  dir = fem::sqrt(wfd / wfdx);
  afquir(q(1), t24, errw, 0.f, 20.f, 0.0001f, dir, t24t, igo);
  icoduc = 3;
  switch (igo) {
    case 1: goto statement_10;
    case 2: goto statement_13;
    case 3: goto statement_11;
    default: break;
  }
  statement_10:
  t24 = t24t;
  goto statement_9;
  statement_11:
  error(cmn);
  statement_12:
  wfd = wfdx;
  statement_13:
  //C
  //C ***    MOMENTUM LOSS
  //C
  wg24 = wfd + wad;
  procom(cmn, far24, t24, xx1, xx2, xx3, rex24, phi24, h24);
  rho24 = capsf * p24 / (aj * rex24 * t24);
  v24 = wg24 / (rho24 * a24);
  q(2) = 0.f;
  q(3) = 0.f;
  ps24 = ps42 - 0.01f;
  statement_14:
  rho24 = wg24 / (v24 * a24);
  hs24 = h24 - fem::pow2(v24) / (2.f * g * aj);
  thermo(cmn, 1.0f, hs24, ts24, phis24, xx2, 1, far24, 1);
  if (ts24 >= 301.f) {
    goto statement_15;
  }
  thermo(cmn, 1.0f, hs24, 400.f, phis24, xx2, 1, far24, 1);
  v24 = fem::sqrt(2.f * g * aj * (h24 - hs24));
  goto statement_14;
  statement_15:
  ps24 = rho24 * aj * rex24 * ts24 / capsf;
  ps24a = ps42 + (rho42 * fem::pow2(v42) - rh024 * fem::pow2(v24)) / (g * caps);
  dir = fem::sqrt(fem::abs(ps24 / ps24a));
  ep = (ps24 - ps24a) / ps24;
  afquir(q(1), v24, ep, 0.f, 50.f, 0.0001f, dir, v24t, igo);
  v24 = v24t;
  if (v24 < 25.f) {
    v24 = 25.0f;
  }
  icoduc = 4;
  switch (igo) {
    case 1: goto statement_14;
    case 2: goto statement_16;
    case 3: goto statement_11;
    default: break;
  }
  statement_16:
  p26 = ps24 * fem::exp((phi24 - phis24) / rex24);
  procom(cmn, far24, ts24, cs24, xx2, xx3, xx4, xxs, xx6);
  am24 = v24 / cs24;
  statement_17:
  thermo(cmn, p24, h24, t24, s24, xxi, 1, far24, 0);
  wg24 = wfd + wad;
  if (vfduct == 0.0f) {
    goto statement_31;
  }
  q(2) = 0.0f;
  q(3) = 0.0f;
  wg24p = wg24;
  h24p = h24;
  p24dot = deriv(cmn, 21, p24);
  statement_28:
  thermo(cmn, p24, h24, t24, s24, xx2, 1, far24, 0);
  wg24 = wg24p - p24dot * vfduct / t24 / (1.4f * ra);
  u24 = h24 - ajx * ra * ra * t24;
  u24dot = deriv(cmn, 21, u24);
  h24x = (wg24p * h24p - (wg24p - wg24) * u24 - u24dot * p24 +
    vfduct / t24 / ra) / wg24;
  erw = (h24 - h24x) / h24;
  dir = fem::sqrt(fem::abs(h24 / h24x));
  afquir(q(1), t24, errm, 0.f, 20.f, 0.0001f, dir, t24t, igo);
  icoduc = 5;
  switch (igo) {
    case 1: goto statement_29;
    case 2: goto statement_31;
    case 3: goto statement_30;
    default: break;
  }
  statement_29:
  t24 = t24t;
  goto statement_28;
  statement_30:
  error(cmn);
  statement_31:
  t25 = t24;
  p25 = p24;
  h25 = h24;
  s25 = s24;
  cmn.am25 = am24;
  if (igasmx > 0) {
    goto statement_21;
  }
  word = aword2;
  cmn.a28sav = a28;
  cmn.a29sav = a29;
  nozd = 0;
  idnoz = 0;
  if (nozflt == 2 || nozflt == 3) {
    nozd = 1;
  }
  if (ides == 1 || idburn > 0 || nozd == 1) {
    idnoz = 1;
  }
  if (itran == 1) {
    idnoz = 0;
  }
  if (idco == 1) {
    goto statement_18;
  }
  convrg(cmn, t25, h25, p25, far24, wg24, p1, idnoz, a28, p25r, t28,
    h28, p28, sz28, ts28, ps28, v28, am28, icon);
  switch (icon) {
    case 1: goto statement_19;
    case 2: goto statement_19;
    case 3: goto statement_19;
    case 4: goto statement_11;
    default: break;
  }
  statement_18:
  condiv(cmn, t2s, h25, p25, s25, far24, wg24, p1, idnoz, a28, a29,
    p25r, t28, h28, p28, s28, t29, h29, p29, s29, ts28, ts29, ps28,
    ps29, v28, v29, am28, am29, icon);
  idshoc = icon;
  icoduc = 6;
  switch (icon) {
    case 1: goto statement_20;
    case 2: goto statement_20;
    case 3: goto statement_20;
    case 4: goto statement_11;
    default: break;
  }
  statement_19:
  t29 = t28;
  h29 = h28;
  p29 = p28;
  s29 = s28;
  ts29 = ts28;
  ps29 = ps28;
  v29 = v28;
  am29 = am28;
  a29 = a28;
  idshoc = icon + 3;
  statement_20:
  err(5) = (p25r - p25) / p25r;
  if (idnoz == 1) {
    write(6,
      "('0OUCT NOZZLE DESIGN',5x,'    A28=',e15.8,'   AM28=',e15.8,'    A29=',"
      "e15.8,' AM29=',e15.8)"),
      a28, am28, a29, am29;
  }
  statement_21:
  icoduc = 0;
  fastbk(cmn);
  //C
}

struct frtosd_save
{
  fem::variant_bindings all5_bindings;
};

void
frtosd(
  common& cmn)
{
  FEM_CMN_SVE(frtosd);
  common_variant all5(cmn.common_all5, sve.all5_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> s50;
      mbr<float> wa22;
      mbr<float> zi;
      mbr<float> pcni;
      mbr<float> cni;
      mbr<float> pri;
      mbr<float> etai;
      mbr<float> waci;
      mbr<float> tffip;
      mbr<float> cnip;
      mbr<float> etatip;
      mbr<float> dhtcip;
      mbr<float> dhti;
      mbr<float> blip;
      mbr<float> pcblip;
      mbr<float> pcnigu;
      mbr<float> zids;
      mbr<float> pcnids;
      mbr<float> prids;
      mbr<float> etaids;
      mbr<float> waids;
      mbr<float> pricf;
      mbr<float> etaicf;
      mbr<float> waicf;
      mbr<float> tfipds;
      mbr<float> cnipds;
      mbr<float> etipds;
      mbr<float> tfipcf;
      mbr<float> cnipcf;
      mbr<float> etipcf;
      mbr<float> dhipcf;
      mbr<float> waicds;
      mbr<float> wai;
      mbr<float> pcbli;
      mbr<float> bli;
      mbr<float> t22ds;
      mbr<float> wa21;
      mbr<float> wg50;
      mbr<float> far50;
      mbr<float> a24;
      mbr<float> ar23;
      mbr<float> dumspl;
      mbr<float> fxfn2m;
      mbr<float> fxm2cp;
      mbr<float> aftfan;
      mbr<float> punt;
      mbr<float> pcblid;
      mbr<float> p6dsav;
      mbr<float> am6dsv;
      mbr<float> etaasv;
      mbr<float> far7sv;
      mbr<float> t4pbl;
      mbr<float> t41;
      mbr<bool> fan;
      mbr<int> ispool;
      all5.allocate(), s50, wa22, zi, pcni, cni, pri, etai, waci,
        tffip, cnip, etatip, dhtcip, dhti, blip, pcblip, pcnigu,
        zids, pcnids, prids, etaids, waids, pricf, etaicf, waicf,
        tfipds, cnipds, etipds, tfipcf, cnipcf, etipcf, dhipcf,
        waicds, wai, pcbli, bli, t22ds, wa21, wg50, far50, a24, ar23,
        dumspl, fxfn2m, fxm2cp, aftfan, punt, pcblid, p6dsav, am6dsv,
        etaasv, far7sv, t4pbl, t41, fan, ispool;
    }
  }
  /* float const& s50 */ all5.bind<float>();
  /* float const& wa22 */ all5.bind<float>();
  /* float const& zi */ all5.bind<float>();
  /* float const& pcni */ all5.bind<float>();
  /* float const& cni */ all5.bind<float>();
  /* float const& pri */ all5.bind<float>();
  /* float const& etai */ all5.bind<float>();
  /* float const& waci */ all5.bind<float>();
  /* float const& tffip */ all5.bind<float>();
  /* float const& cnip */ all5.bind<float>();
  /* float const& etatip */ all5.bind<float>();
  /* float const& dhtcip */ all5.bind<float>();
  /* float const& dhti */ all5.bind<float>();
  /* float const& blip */ all5.bind<float>();
  /* float const& pcblip */ all5.bind<float>();
  /* float const& pcnigu */ all5.bind<float>();
  /* float const& zids */ all5.bind<float>();
  /* float const& pcnids */ all5.bind<float>();
  /* float const& prids */ all5.bind<float>();
  /* float const& etaids */ all5.bind<float>();
  /* float const& waids */ all5.bind<float>();
  /* float const& pricf */ all5.bind<float>();
  /* float const& etaicf */ all5.bind<float>();
  /* float const& waicf */ all5.bind<float>();
  /* float const& tfipds */ all5.bind<float>();
  /* float const& cnipds */ all5.bind<float>();
  /* float const& etipds */ all5.bind<float>();
  /* float const& tfipcf */ all5.bind<float>();
  /* float const& cnipcf */ all5.bind<float>();
  /* float const& etipcf */ all5.bind<float>();
  /* float const& dhipcf */ all5.bind<float>();
  /* float const& waicds */ all5.bind<float>();
  /* float const& wai */ all5.bind<float>();
  /* float const& pcbli */ all5.bind<float>();
  /* float const& bli */ all5.bind<float>();
  /* float const& t22ds */ all5.bind<float>();
  /* float const& wa21 */ all5.bind<float>();
  /* float const& wg50 */ all5.bind<float>();
  /* float const& far50 */ all5.bind<float>();
  /* float const& a24 */ all5.bind<float>();
  /* float const& ar23 */ all5.bind<float>();
  /* float const& dumspl */ all5.bind<float>();
  /* float const& fxfn2m */ all5.bind<float>();
  /* float const& fxm2cp */ all5.bind<float>();
  /* float const& aftfan */ all5.bind<float>();
  /* float const& punt */ all5.bind<float>();
  /* float const& pcblid */ all5.bind<float>();
  /* float const& p6dsav */ all5.bind<float>();
  /* float const& am6dsv */ all5.bind<float>();
  /* float const& etaasv */ all5.bind<float>();
  /* float const& far7sv */ all5.bind<float>();
  /* float const& t4pbl */ all5.bind<float>();
  /* float const& t41 */ all5.bind<float>();
  bool const& fan = all5.bind<bool>();
  /* int const& ispool */ all5.bind<int>();
  //C
  //C        Dummy routine to transfer values
  //C
  cmn.xp1 = cmn.p1;
  cmn.xwaf = cmn.waf;
  cmn.xwac = cmn.wac;
  cmn.xblf = cmn.blf;
  cmn.xbldu = cmn.bldu;
  cmn.xh3 = cmn.h3;
  cmn.xt21 = cmn.t21;
  cmn.xp21 = cmn.p21;
  cmn.xh21 = cmn.h21;
  cmn.xs21 = cmn.s21;
  //C
  if (fan) {
    coduct(cmn);
  }
  if (fan) {
    return;
  }
  //C
  fastbk(cmn);
  //C
}

struct thturb_save
{
  fem::variant_bindings units_bindings;
};

void
thturb(
  common& cmn,
  float& dh,
  float& eta,
  float const& far,
  float& h,
  float& s,
  float& p,
  float& to,
  float& ho,
  float& so,
  float& po)
{
  FEM_CMN_SVE(thturb);
  common_variant units(cmn.common_units, sve.units_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<bool> si;
      units.allocate(), si;
    }
  }
  bool const& si = units.bind<bool>();
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
  if (si) {
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
    thermo(cmn, pt, hop, tt, st, amwt, 1, far, 1);
    dels = st - s;
    if (fem::abs(dels) <= 0.00005f * s) {
      goto statement_2;
    }
    pt = p * fem::exp(dels * amwt / oem + fem::alog(pt / p));
  }
  error(cmn);
  statement_2:
  po = pt;
  //C
  thermo(cmn, po, ho, to, so, x1, 1, far, 1);
  //C
}

struct colptb_save
{
  fem::variant_bindings all5_bindings;
  fem::variant_bindings flows_bindings;
  fem::variant_bindings rpms_bindings;
  fem::variant_bindings units_bindings;
  fem::variant_bindings vols_bindings;
  char aword[10];
  char whi[10];
  char wlo[10];

  colptb_save() :
    aword(""),
    whi(""),
    wlo("")
  {}
};

void
colptb(
  common& cmn)
{
  FEM_CMN_SVE(colptb);
  common_write write(cmn);
  int& ides = cmn.ides;
  arr_ref<float> err(cmn.err, dimension(9));
  float& tflpcf = cmn.tflpcf;
  float& cnlpcf = cmn.cnlpcf;
  float& etlpcf = cmn.etlpcf;
  float& dhlpcf = cmn.dhlpcf;
  float& h2 = cmn.h2;
  float& h21 = cmn.h21;
  float& t5 = cmn.t5;
  float& p5 = cmn.p5;
  float& t55 = cmn.t55;
  float& p55 = cmn.p55;
  float& h55 = cmn.h55;
  float& s55 = cmn.s55;
  float& wg5 = cmn.wg5;
  float& far5 = cmn.far5;
  float& cnlp = cmn.cnlp;
  float& etatlp = cmn.etatlp;
  float& dhtclp = cmn.dhtclp;
  float& dhtf = cmn.dhtf;
  float& bllp = cmn.bllp;
  float& wg55 = cmn.wg55;
  float& far55 = cmn.far55;
  float& hpext = cmn.hpext;
  float& pcnf = cmn.pcnf;
  float& tfflp = cmn.tfflp;
  float& h22 = cmn.h22;
  arr_cref<float> tffx(static_cast<common_lturb&>(cmn).tffx, dimension(15));
  arr_cref<float, 2> cnx(static_cast<common_lturb&>(cmn).cnx,
    dimension(15, 15));
  arr_cref<float, 2> dhtcx(static_cast<common_lturb&>(cmn).dhtcx,
    dimension(15, 15));
  arr_cref<float, 2> etatx(static_cast<common_lturb&>(cmn).etatx,
    dimension(15, 15));
  int& ntffs = static_cast<common_lturb&>(cmn).ntffs;
  arr_cref<int> npttff(static_cast<common_lturb&>(cmn).npttff, dimension(15));
  //
  common_variant all5(cmn.common_all5, sve.all5_bindings);
  common_variant rpms(cmn.common_rpms, sve.rpms_bindings);
  common_variant vols(cmn.common_vols, sve.vols_bindings);
  common_variant flows(cmn.common_flows, sve.flows_bindings);
  common_variant units(cmn.common_units, sve.units_bindings);
  char* aword = sve.aword;
  char* wlo = sve.wlo;
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> s50;
      mbr<float> wa22;
      mbr<float> zi;
      mbr<float> pcni;
      mbr<float> cni;
      mbr<float> pri;
      mbr<float> etai;
      mbr<float> waci;
      mbr<float> tffip;
      mbr<float> cnip;
      mbr<float> etatip;
      mbr<float> dhtcip;
      mbr<float> dhti;
      mbr<float> blip;
      mbr<float> pcblip;
      mbr<float> pcnigu;
      mbr<float> zids;
      mbr<float> pcnids;
      mbr<float> prids;
      mbr<float> etaids;
      mbr<float> waids;
      mbr<float> pricf;
      mbr<float> etaicf;
      mbr<float> waicf;
      mbr<float> tfipds;
      mbr<float> cnipds;
      mbr<float> etipds;
      mbr<float> tfipcf;
      mbr<float> cnipcf;
      mbr<float> etipcf;
      mbr<float> dhipcf;
      mbr<float> waicds;
      mbr<float> wai;
      mbr<float> pcbli;
      mbr<float> bli;
      mbr<float> t22ds;
      mbr<float> wa21;
      mbr<float> wg50;
      mbr<float> far50;
      mbr<float> a24;
      mbr<float> ar23;
      mbr<float> dumspl;
      mbr<bool> fxfn2m;
      mbr<bool> fxm2cp;
      mbr<bool> aftfan;
      mbr<float> punt;
      mbr<float> pcblid;
      mbr<float> p6dsav;
      mbr<float> am6dsv;
      mbr<float> etaasv;
      mbr<float> far7sv;
      mbr<float> t4pbl;
      mbr<float> t41;
      mbr<float> fan;
      mbr<int> ispool;
      all5.allocate(), s50, wa22, zi, pcni, cni, pri, etai, waci,
        tffip, cnip, etatip, dhtcip, dhti, blip, pcblip, pcnigu,
        zids, pcnids, prids, etaids, waids, pricf, etaicf, waicf,
        tfipds, cnipds, etipds, tfipcf, cnipcf, etipcf, dhipcf,
        waicds, wai, pcbli, bli, t22ds, wa21, wg50, far50, a24, ar23,
        dumspl, fxfn2m, fxm2cp, aftfan, punt, pcblid, p6dsav, am6dsv,
        etaasv, far7sv, t4pbl, t41, fan, ispool;
    }
    {
      mbr<float> xnhpds;
      mbr<float> xnipds;
      mbr<float> xnlpds;
      mbr<float> pmihp;
      mbr<float> pmiip;
      mbr<float> pmilp;
      rpms.allocate(), xnhpds, xnipds, xnlpds, pmihp, pmiip, pmilp;
    }
    {
      mbr<float> vfan;
      mbr<float> vintc;
      mbr<float> vcomp;
      mbr<float> vcomb;
      mbr<float> vhptrb;
      mbr<float> viptrb;
      mbr<float> vlptrb;
      mbr<float> vaftbn;
      mbr<float> vfduct;
      mbr<float> vwduct;
      vols.allocate(), vfan, vintc, vcomp, vcomb, vhptrb, viptrb,
        vlptrb, vaftbn, vfduct, vwduct;
    }
    {
      mbr<int> mafp;
      mbr<float> waip;
      mbr<float> wacp;
      flows.allocate(), mafp, waip, wacp;
    }
    {
      mbr<bool> si;
      units.allocate(), si;
    }
  }
  /* float const& s50 */ all5.bind<float>();
  /* float const& wa22 */ all5.bind<float>();
  /* float const& zi */ all5.bind<float>();
  /* float const& pcni */ all5.bind<float>();
  /* float const& cni */ all5.bind<float>();
  /* float const& pri */ all5.bind<float>();
  /* float const& etai */ all5.bind<float>();
  /* float const& waci */ all5.bind<float>();
  /* float const& tffip */ all5.bind<float>();
  /* float const& cnip */ all5.bind<float>();
  /* float const& etatip */ all5.bind<float>();
  /* float const& dhtcip */ all5.bind<float>();
  /* float const& dhti */ all5.bind<float>();
  /* float const& blip */ all5.bind<float>();
  /* float const& pcblip */ all5.bind<float>();
  /* float const& pcnigu */ all5.bind<float>();
  /* float const& zids */ all5.bind<float>();
  /* float const& pcnids */ all5.bind<float>();
  /* float const& prids */ all5.bind<float>();
  /* float const& etaids */ all5.bind<float>();
  /* float const& waids */ all5.bind<float>();
  /* float const& pricf */ all5.bind<float>();
  /* float const& etaicf */ all5.bind<float>();
  /* float const& waicf */ all5.bind<float>();
  /* float const& tfipds */ all5.bind<float>();
  /* float const& cnipds */ all5.bind<float>();
  /* float const& etipds */ all5.bind<float>();
  /* float const& tfipcf */ all5.bind<float>();
  /* float const& cnipcf */ all5.bind<float>();
  /* float const& etipcf */ all5.bind<float>();
  /* float const& dhipcf */ all5.bind<float>();
  /* float const& waicds */ all5.bind<float>();
  /* float const& wai */ all5.bind<float>();
  /* float const& pcbli */ all5.bind<float>();
  /* float const& bli */ all5.bind<float>();
  /* float const& t22ds */ all5.bind<float>();
  /* float const& wa21 */ all5.bind<float>();
  /* float const& wg50 */ all5.bind<float>();
  /* float const& far50 */ all5.bind<float>();
  /* float const& a24 */ all5.bind<float>();
  /* float const& ar23 */ all5.bind<float>();
  /* float const& dumspl */ all5.bind<float>();
  bool const& fxfn2m = all5.bind<bool>();
  /* bool const& fxm2cp */ all5.bind<bool>();
  bool const& aftfan = all5.bind<bool>();
  /* float const& punt */ all5.bind<float>();
  /* float const& pcblid */ all5.bind<float>();
  /* float const& p6dsav */ all5.bind<float>();
  /* float const& am6dsv */ all5.bind<float>();
  /* float const& etaasv */ all5.bind<float>();
  /* float const& far7sv */ all5.bind<float>();
  /* float const& t4pbl */ all5.bind<float>();
  /* float const& t41 */ all5.bind<float>();
  /* float const& fan */ all5.bind<float>();
  int const& ispool = all5.bind<int>();
  /* float const& xnhpds */ rpms.bind<float>();
  /* float const& xnipds */ rpms.bind<float>();
  float const& xnlpds = rpms.bind<float>();
  /* float const& pmihp */ rpms.bind<float>();
  /* float const& pmiip */ rpms.bind<float>();
  float const& pmilp = rpms.bind<float>();
  /* float const& vfan */ vols.bind<float>();
  /* float const& vintc */ vols.bind<float>();
  /* float const& vcomp */ vols.bind<float>();
  /* float const& vcomb */ vols.bind<float>();
  /* float const& vhptrb */ vols.bind<float>();
  /* float const& viptrb */ vols.bind<float>();
  float const& vlptrb = vols.bind<float>();
  /* float const& vaftbn */ vols.bind<float>();
  /* float const& vfduct */ vols.bind<float>();
  /* float const& vwduct */ vols.bind<float>();
  /* int const& mafp */ flows.bind<int>();
  float const& waip = flows.bind<float>();
  /* float const& wacp */ flows.bind<float>();
  bool const& si = units.bind<bool>();
//  if (is_called_first_time) {
//    aword = "COLPTB";
//    wlo = "  (LO)";
//    sve.mhi = "  (HI)";
//  }
  float ra = fem::float0;
  float aj = fem::float0;
  float confac = fem::float0;
  float cnlps = fem::float0;
  float tfflps = fem::float0;
  int igo = fem::int0;
  char whi[10] = "";
  float tflcal = fem::float0;
  float xnlp = fem::float0;
  float xnldot = fem::float0;
  float dhacel = fem::float0;
  float wafp = fem::float0;
  float dhtcf = fem::float0;
  float ohtcf = fem::float0;
  float btuext = fem::float0;
  float ohacel = fem::float0;
  int i1 = fem::int0;
  int i2 = fem::int0;
  float sllp = fem::float0;
  float wgs = fem::float0;
  float xx2 = fem::float0;
  float w55 = fem::float0;
  float vlptr6 = fem::float0;
  arr_1d<9, float> q(fem::fill0);
  float wg55p = fem::float0;
  float h55p = fem::float0;
  float p55dot = fem::float0;
  float u55 = fem::float0;
  float u55dot = fem::float0;
  float h55x = fem::float0;
  float errw = fem::float0;
  float dir = fem::float0;
  float t55t = fem::float0;
  static const char* format_8 =
    "(' *****TFFLP OFF MAP',f10.4,2x,a6,' $$$$$$    ')";
  static const char* format_9 =
    "(' ***** CNLP OFF MAP',f10.4,2x,a6,' $$$$$$    ')";
  //C
  //C        Uses BLOCK DATA to perform outer-turbine calculations
  //C
//  cmn.word = aword;
  if (si) {
    goto statement_100;
  }
  ra = 0.0252f;
  aj = 2.719f;
  confac = 1.4091e-5f;
  goto statement_101;
  statement_100:
  ra = 286.9f;
  aj = 1.0f;
  confac = 1.09966e-2f;
  statement_101:
  //C
  if (ides == 0) {
    goto statement_1;
  }
  cnlpcf = cmn.cnlpds * fem::sqrt(t5) / pcnf;
  statement_1:
  cnlp = cnlpcf * pcnf / fem::sqrt(t5);
  cnlps = cnlp;
  tfflps = tfflp;
  search(-1.f, tfflp, cnlp, dhtclp, etatlp, tffx(1), ntffs, cnx(1,
    1), dhtcx(1, 1), etatx(1, 1), npttff(1), 16, 15, igo);
  if (igo == 1.f || igo == 11 || igo == 21) {
    write(8, format_8), tfflps, wlo;
  }
  if (igo == 2 || igo == 12 || igo == 22) {
    write(8, format_8), tfflps, whi;
  }
  if (igo == 10 || igo == 11 || igo == 12) {
    write(8, format_9), cnlps, wlo;
  }
  if (igo == 20 || igo == 21 || igo == 22) {
    write(8, format_9), cnlps, whi;
  }
  error(cmn);
  return;
  //C
  cmn.nomap = 0;
  tflcal = wg5 * fem::sqrt(t5) / (14.696f * p5);
  if (si) {
    tflcal = wg5 * fem::sqrt(t5) / p5;
  }
  xnlp = xnlpds * pcnf / 100.f;
  xnldot = deriv(cmn, 13, xnlp);
  dhacel = confac * pmilp * xnlp * xnldot;
  dhtcf = (wafp * (h22 - h2) + dhacel) / (wg5 * t5);
  if (fxfn2m) {
    dhtcf = (wafp * (h22 - h2) * waip * (h21 - h22) + dhacel) / (wg5 * t5);
  }
  if (fxfn2m && aftfan) {
    ohtcf = (wafp * (h22 - h21) * waip * (h21 - h2) + dhacel) / (wg5 * t5);
  }
  if (ispool >= 2) {
    goto statement_11;
  }
  btuext = 0.706706f * hpext;
  if (si) {
    btuext = hpext;
  }
  dhtcf = (btuext * wafp * (h22 - h2) + ohacel) / (wg5 * t5);
  statement_11:
  if (ides == 0) {
    goto statement_5;
  }
  tflpcf = cmn.tflpds / tflcal;
  dhlpcf = ohtcf / dhtclp;
  etlpcf = cmn.etlpds / etatlp;
  write(6,
    "(' ***** TURBINE DESIGN',5x,'CNLPCF=',e15.8,' TFLPCF=',e15.8,' ETLPCF=',"
    "e15.9,' DHLPCF=',e15.8)"),
    cnlpcf, tflpcf, etlpcf, dhlpcf;
  statement_5:
  tflcal = tflpcf * tflcal;
  dhtclp = dhlpcf * dhtclp;
  etatlp = etlpcf * etatlp;
  dhtf = dhtcf * t5;
  i1 = 3;
  i2 = 4;
  if (ispool == 1) {
    i1 = 1;
  }
  if (ispool == 1) {
    i2 = 2;
  }
  err(i1) = (tflcal - tfflp) / tflcal;
  err(i2) = (dhtcf - dhtclp) / dhtcf;
  thturb(cmn, dhtf, etatlp, far5, cmn.h5, cmn.s5, p5, t55, h55, s55, p55);
  if (sllp <= 0) {
    goto statement_6;
  }
  far55 = far5 * wg5 / (wgs + bllp * (1.f + far5));
  wg55 = wgs + bllp;
  h55 = (bllp * cmn.h3 + wg5 * h55) / wg55;
  thermo(cmn, p55, h55, t55, s55, xx2, 1, far55, 1);
  goto statement_7;
  statement_6:
  far55 = far5;
  w55 = wg5;
  statement_7:
  if (vlptr6 == 0.0f) {
    goto statement_21;
  }
  q(2) = 0.0f;
  q(3) = 0.0f;
  wg55p = wg55;
  h55p = h55;
  p55dot = deriv(cmn, 17, p55);
  statement_18:
  thermo(cmn, p55, h55, t55, s55, xx2, 1, far55, 0);
  wg55 = wg55p - p55dot * vlptrb / t55 / 1.4f / ra;
  u55 = h55 - ra * aj * t55;
  u55dot = deriv(cmn, 17, u55);
  h55x = (wg55p * h55p - (wg55) * u55 - u55dot * p55 * vlptrb / t55 /
    ra) / wg55;
  errw = (h55 - h55x) / h55;
  dir = fem::sqrt(fem::abs(h55 / h55));
  afquir(q(1), t55, errw, 0.f, 20.f, 0.0001f, dir, t55t, igo);
  switch (igo) {
    case 1: goto statement_19;
    case 2: goto statement_21;
    case 3: goto statement_20;
    default: break;
  }
  statement_19:
  t55 = t55t;
  goto statement_18;
  statement_20:
  error(cmn);
  statement_21:
  frtosd(cmn);
  //C
}

struct coiptb_save
{
  fem::variant_bindings all5_bindings;
  fem::variant_bindings flows_bindings;
  fem::variant_bindings hturb_bindings;
  fem::variant_bindings rpms_bindings;
  fem::variant_bindings units_bindings;
  fem::variant_bindings vols_bindings;
  char aword[10];
  char whi[10];
  char wlo[10];

  coiptb_save() :
    aword(""),
    whi(""),
    wlo("")
  {}
};

void
coiptb(
  common& cmn)
{
  FEM_CMN_SVE(coiptb);
  common_write write(cmn);
  int& ides = cmn.ides;
  arr_ref<float> err(cmn.err, dimension(9));
  float& h21 = cmn.h21;
  float& h3 = cmn.h3;
  float& t5 = cmn.t5;
  float& p5 = cmn.p5;
  float& h5 = cmn.h5;
  float& s5 = cmn.s5;
  float& wg5 = cmn.wg5;
  float& far5 = cmn.far5;
  float& hpext = cmn.hpext;
  float& h22 = cmn.h22;
  float& t50 = cmn.t50;
  arr_cref<float> tffx(static_cast<common_iturb&>(cmn).tffx, dimension(15));
  arr_cref<float, 2> cnx(static_cast<common_iturb&>(cmn).cnx,
    dimension(15, 15));
  arr_cref<float, 2> dhtcx(static_cast<common_iturb&>(cmn).dhtcx,
    dimension(15, 15));
  arr_cref<float, 2> etatx(static_cast<common_iturb&>(cmn).etatx,
    dimension(15, 15));
  arr_cref<int> npttff(static_cast<common_iturb&>(cmn).npttff, dimension(15));
  //
  common_variant all5(cmn.common_all5, sve.all5_bindings);
  common_variant rpms(cmn.common_rpms, sve.rpms_bindings);
  common_variant vols(cmn.common_vols, sve.vols_bindings);
  common_variant flows(cmn.common_flows, sve.flows_bindings);
  common_variant units(cmn.common_units, sve.units_bindings);
  common_variant hturb(cmn.common_hturb, sve.hturb_bindings);
  char* aword= sve.aword;;
  char* whi = sve.whi;
  char* wlo = sve.wlo;
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> s50;
      mbr<float> wa22;
      mbr<float> zi;
      mbr<float> pcni;
      mbr<float> cni;
      mbr<float> pri;
      mbr<float> etai;
      mbr<float> waci;
      mbr<float> tffip;
      mbr<float> cnip;
      mbr<float> etatip;
      mbr<float> dhtcip;
      mbr<float> dhti;
      mbr<float> blip;
      mbr<float> pcblip;
      mbr<float> pcnigu;
      mbr<float> zids;
      mbr<float> pcnids;
      mbr<float> prids;
      mbr<float> etaids;
      mbr<float> waids;
      mbr<float> pricf;
      mbr<float> etaicf;
      mbr<float> waicf;
      mbr<float> tfipds;
      mbr<float> cnipds;
      mbr<float> etipds;
      mbr<float> tfipcf;
      mbr<float> cnipcf;
      mbr<float> etipcf;
      mbr<float> dhipcf;
      mbr<float> waicds;
      mbr<float> wai;
      mbr<float> pcbli;
      mbr<float> bli;
      mbr<float> t22ds;
      mbr<float> wa21;
      mbr<float> wg50;
      mbr<float> far50;
      mbr<float> a24;
      mbr<float> ar23;
      mbr<float> dumspl;
      mbr<bool> fxfn2m;
      mbr<bool> fxm2cp;
      mbr<bool> aftfan;
      mbr<float> punt;
      mbr<float> pcblid;
      mbr<float> p6dsav;
      mbr<float> am6dsv;
      mbr<float> etaasv;
      mbr<float> far7sv;
      mbr<float> t4pbl;
      mbr<float> t41;
      mbr<float> fan;
      mbr<int> ispool;
      all5.allocate(), s50, wa22, zi, pcni, cni, pri, etai, waci,
        tffip, cnip, etatip, dhtcip, dhti, blip, pcblip, pcnigu,
        zids, pcnids, prids, etaids, waids, pricf, etaicf, waicf,
        tfipds, cnipds, etipds, tfipcf, cnipcf, etipcf, dhipcf,
        waicds, wai, pcbli, bli, t22ds, wa21, wg50, far50, a24, ar23,
        dumspl, fxfn2m, fxm2cp, aftfan, punt, pcblid, p6dsav, am6dsv,
        etaasv, far7sv, t4pbl, t41, fan, ispool;
    }
    {
      mbr<float> xnhpds;
      mbr<float> xnipds;
      mbr<float> xnlpds;
      mbr<float> pmihp;
      mbr<float> pmiip;
      mbr<float> pmilp;
      rpms.allocate(), xnhpds, xnipds, xnlpds, pmihp, pmiip, pmilp;
    }
    {
      mbr<float> vfan;
      mbr<float> vintc;
      mbr<float> vcomp;
      mbr<float> vcomb;
      mbr<float> vhptrb;
      mbr<float> viptrb;
      mbr<float> vlptrb;
      mbr<float> vaftbn;
      mbr<float> vfduct;
      mbr<float> vwduct;
      vols.allocate(), vfan, vintc, vcomp, vcomb, vhptrb, viptrb,
        vlptrb, vaftbn, vfduct, vwduct;
    }
    {
      mbr<float> wafp;
      mbr<float> waip;
      mbr<float> wacp;
      flows.allocate(), wafp, waip, wacp;
    }
    {
      mbr<bool> si;
      units.allocate(), si;
    }
    {
      mbr<float> tffy(dimension(15));
      mbr<float> cny(dimension(15, 15));
      mbr<float> dhtcy(dimension(15, 15));
      mbr<float> etaty(dimension(15, 15));
      mbr<int> ntfys;
      mbr<int> npttsf(dimension(15));
      hturb.allocate(), tffy, cny, dhtcy, etaty, ntfys, npttsf;
    }
  }
  float& s50 = all5.bind<float>();
  /* float const& wa22 */ all5.bind<float>();
  /* float const& zi */ all5.bind<float>();
  float const& pcni = all5.bind<float>();
  /* float const& cni */ all5.bind<float>();
  /* float const& pri */ all5.bind<float>();
  /* float const& etai */ all5.bind<float>();
  /* float const& waci */ all5.bind<float>();
  float& tffip = all5.bind<float>();
  float& cnip = all5.bind<float>();
  float& etatip = all5.bind<float>();
  float& dhtcip = all5.bind<float>();
  float& dhti = all5.bind<float>();
  float const& blip = all5.bind<float>();
  /* float const& pcblip */ all5.bind<float>();
  /* float const& pcnigu */ all5.bind<float>();
  /* float const& zids */ all5.bind<float>();
  /* float const& pcnids */ all5.bind<float>();
  /* float const& prids */ all5.bind<float>();
  /* float const& etaids */ all5.bind<float>();
  /* float const& waids */ all5.bind<float>();
  /* float const& pricf */ all5.bind<float>();
  /* float const& etaicf */ all5.bind<float>();
  /* float const& waicf */ all5.bind<float>();
  float const& tfipds = all5.bind<float>();
  float const& cnipds = all5.bind<float>();
  float const& etipds = all5.bind<float>();
  float& tfipcf = all5.bind<float>();
  float& cnipcf = all5.bind<float>();
  float& etipcf = all5.bind<float>();
  float const& dhipcf = all5.bind<float>();
  /* float const& waicds */ all5.bind<float>();
  /* float const& wai */ all5.bind<float>();
  /* float const& pcbli */ all5.bind<float>();
  /* float const& bli */ all5.bind<float>();
  /* float const& t22ds */ all5.bind<float>();
  /* float const& wa21 */ all5.bind<float>();
  float const& wg50 = all5.bind<float>();
  float const& far50 = all5.bind<float>();
  /* float const& a24 */ all5.bind<float>();
  /* float const& ar23 */ all5.bind<float>();
  /* float const& dumspl */ all5.bind<float>();
  /* bool const& fxfn2m */ all5.bind<bool>();
  bool const& fxm2cp = all5.bind<bool>();
  bool const& aftfan = all5.bind<bool>();
  /* float const& punt */ all5.bind<float>();
  /* float const& pcblid */ all5.bind<float>();
  /* float const& p6dsav */ all5.bind<float>();
  /* float const& am6dsv */ all5.bind<float>();
  /* float const& etaasv */ all5.bind<float>();
  /* float const& far7sv */ all5.bind<float>();
  /* float const& t4pbl */ all5.bind<float>();
  /* float const& t41 */ all5.bind<float>();
  /* float const& fan */ all5.bind<float>();
  /* int const& ispool */ all5.bind<int>();
  /* float const& xnhpds */ rpms.bind<float>();
  float const& xnipds = rpms.bind<float>();
  /* float const& xnlpds */ rpms.bind<float>();
  /* float const& pmihp */ rpms.bind<float>();
  float const& pmiip = rpms.bind<float>();
  /* float const& pmilp */ rpms.bind<float>();
  /* float const& vfan */ vols.bind<float>();
  /* float const& vintc */ vols.bind<float>();
  /* float const& vcomp */ vols.bind<float>();
  /* float const& vcomb */ vols.bind<float>();
  /* float const& vhptrb */ vols.bind<float>();
  float const& viptrb = vols.bind<float>();
  /* float const& vlptrb */ vols.bind<float>();
  /* float const& vaftbn */ vols.bind<float>();
  /* float const& vfduct */ vols.bind<float>();
  /* float const& vwduct */ vols.bind<float>();
  /* float const& wafp */ flows.bind<float>();
  float const& waip = flows.bind<float>();
  float const& wacp = flows.bind<float>();
  bool const& si = units.bind<bool>();
  arr_cref<float> tffy(hturb.bind<float>(), dimension(15));
  arr_cref<float, 2> cny(hturb.bind<float>(), dimension(15, 15));
  arr_cref<float, 2> dhtcy(hturb.bind<float>(), dimension(15, 15));
  arr_cref<float, 2> etaty(hturb.bind<float>(), dimension(15, 15));
  int const& ntfys = hturb.bind<int>();
  arr_cref<int> npttsf(hturb.bind<int>(), dimension(15));
  if (is_called_first_time) {
    aword = "COIPTB";
    wlo = "  (LO)";
    whi = "  (HI)";
  }
  float ra = fem::float0;
  float aj = fem::float0;
  float confac = fem::float0;
  float h22sav = fem::float0;
  float cnips = fem::float0;
  float tffips = fem::float0;
  int ntffs = fem::int0;
  int igo = fem::int0;
  float cnps = fem::float0;
  float p50 = fem::float0;
  float tfical = fem::float0;
  int mg50 = fem::int0;
  float xnp = fem::float0;
  float xnip = fem::float0;
  float xnidot = fem::float0;
  float btuext = fem::float0;
  float dhacel = fem::float0;
  float dhtic = fem::float0;
  int mg60 = fem::int0;
  float tfpcf = fem::float0;
  float ohtic = fem::float0;
  float dhpcf = fem::float0;
  int n1 = fem::int0;
  int n2 = fem::int0;
  int ni = fem::int0;
  float xx2 = fem::float0;
  arr_1d<9, float> q(fem::fill0);
  float wg5p = fem::float0;
  float h5p = fem::float0;
  float psdot = fem::float0;
  float u5 = fem::float0;
  float u5dot = fem::float0;
  float wgsp = fem::float0;
  float wgs = fem::float0;
  float vptrb = fem::float0;
  float h5x = fem::float0;
  float hs = fem::float0;
  float errw = fem::float0;
  float dir = fem::float0;
  float t5t = fem::float0;
  static const char* format_9 =
    "('0***** TFFIP OFF MAP',f10.6,2x,a6,'$$$$$$$$$$$')";
  //C
  if (si) {
    goto statement_100;
  }
  ra = 0.0252f;
  aj = 2.719f;
  confac = 1.4091e-5f;
  goto statement_101;
  statement_100:
  ra = 286.9f;
  aj = 1.0f;
  confac = 1.0966e-2f;
  statement_101:
  //C
  h22sav = h22;
  if (aftfan) {
    h22 = cmn.h2;
  }
  cmn.word = aword;
  if (ides == 0) {
    goto statement_1;
  }
  cnipcf = cnipds * fem::sqrt(t50) / pcni;
  if (fxm2cp) {
    cnipcf = cmn.cnhpds * fem::sqrt(t50) / pcni;
  }
  statement_1:
  cnip = cnipcf * pcni / fem::sqrt(t50);
  cnips = cnip;
  tffips = tffip;
  if (fxm2cp) {
    goto statement_2;
  }
  search(-1.f, tffip, cnip, dhtcip, etatip, tffx(1), ntffs, cnx(1,
    1), dhtcx(1, 1), etatx(1, 1), npttff(1), 15, 15, igo);
  //C
  statement_2:
  if (fxm2cp) {
    search(-1.f, tffip, cnip, dhtcip, etatip, tffy(1), ntfys, cny(1,
      1), dhtcy(1, 1), etaty(1, 1), npttsf(1), 15, 15, igo);
  }
  //C
  if (igo == 1 || igo == 11 || igo == 21) {
    write(8, format_9), tffips, wlo;
  }
  if (igo == 2 || igo == 12 || igo == 22) {
    write(8, format_9), tffips, whi;
  }
  if (igo == 10 || igo == 11 || igo == 12) {
    write(8, format_9), cnips, wlo;
  }
  if (igo == 20 || igo == 21 || igo == 22) {
    write(8, "('0*****  CNIP OFF MAP',f10.6,2x,a6,'$$$$$$$$$$$')"), cnps, whi;
  }
  if (igo != 7) {
    goto statement_3;
  }
  error(cmn);
  return;
  //C
  //C        Labale 3 was not found in original code
  //C
  statement_3:
  cmn.nomap = 0;
  tfical = wg50 * fem::sqrt(t50) / (14.696f * p50);
  if (si) {
    tfical = mg50 * fem::sqrt(t50) / p50;
  }
  xnp = xnipds * pcni / 100.f;
  xnidot = deriv(cmn, 2, xnip);
  btuext = 0.706705f * hpext;
  if (si) {
    btuext = hpext;
  }
  dhacel = confac * pmiip * xnip * xnidot;
  dhtic = (waip * (h21 - h22) * dhacel) / (wg50 * t50);
  if (fxm2cp) {
    cmn.dhtc = (btuext + wacp * (h3 - h21) + waip * (h21 - h22) +
      dhacel) / (mg60 * t50);
  }
  if (ides == 0) {
    goto statement_6;
  }
  tfpcf = tfipds / tfical;
  dhpcf = ohtic / dhtcip;
  etipcf = etipds / etatip;
  if (fxm2cp) {
    tfipcf = cmn.tfhpds / tfical;
  }
  if (fxm2cp) {
    etipcf = cmn.ethpds / etatip;
  }
  write(6,
    "('0I.P.TURBINE DESIGN=',5x,'CNPCF=,',e15.8,' TFIPCF=',e15.8,' ETIPCF=',"
    "e16.8,' DHIPCF=',e15.8)"),
    cnipcf, tfipcf, etipcf, dhpcf;
  statement_6:
  tfical = tfipcf * tfical;
  dhtcip = dhipcf * dhtcip;
  etatip = etipcf * etatip;
  dhti = dhtic * t50;
  n1 = 8;
  n2 = 9;
  if (fxm2cp) {
    n1 = 1;
  }
  if (fxm2cp) {
    n2 = 2;
  }
  err(ni) = (tfical - tffip) / tfical;
  err(n2) = (dhtic - dhtcip) / dhtic;
  thturb(cmn, dhti, etatip, far50, cmn.h50, s50, p50, t5, h5, s5, p5);
  if (blip <= 0.0f) {
    goto statement_7;
  }
  far5 = far50 * wg50 / (wg50 + blip * (far50 + 1.f));
  wg5 = wg50 + blip;
  h5 = (blip * h3 + wg50 * h5) / wg5;
  thermo(cmn, p5, h5, t5, s5, xx2, 1, far5, 1.f);
  goto statement_8;
  statement_7:
  far5 = far50;
  wg5 = wg50;
  statement_8:
  if (viptrb == 0.0f) {
    goto statement_21;
  }
  q(2) = 0.0f;
  q(3) = 0.0f;
  wg5p = wg5;
  h5p = h5;
  psdot = deriv(cmn, 14, p5);
  statement_18:
  thermo(cmn, p5, h5, t5, s5, xx2, 1, far5, 0);
  wg5 = wg5p - psdot * viptrb / t5 / 1.4f / ra;
  u5 = h5 - ra * aj * t5;
  u5dot = deriv(cmn, 15, u5);
  h5x = (wg5p * h5p - (wgsp - wgs) * u5 - u5dot * p5 * vptrb / t5 / ra) / wg5;
  errw = (hs - h5x) / h5;
  dir = fem::sqrt(fem::abs(h5 / h5x));
  afquir(q(1), t5, errw, 0.f, 20.f, 0.0001f, dir, t5t, igo);
  switch (igo) {
    case 1: goto statement_19;
    case 2: goto statement_21;
    case 3: goto statement_20;
    default: break;
  }
  statement_19:
  t5 = t5t;
  goto statement_18;
  statement_20:
  error(cmn);
  statement_21:
  h22 = h22sav;
  colptb(cmn);
  //C
}

struct cohptb_save
{
  fem::variant_bindings all5_bindings;
  fem::variant_bindings flows_bindings;
  fem::variant_bindings hturb_bindings;
  fem::variant_bindings rpms_bindings;
  fem::variant_bindings units_bindings;
  fem::variant_bindings vols_bindings;
  char aword[10];
  char whi[10];
  char wlo[10];

  cohptb_save() :
    aword(""),
    whi(""),
    wlo("")
  {}
};

void
cohptb(
  common& cmn)
{
  FEM_CMN_SVE(cohptb);
  common_write write(cmn);
  int& ides = cmn.ides;
  arr_ref<float> err(cmn.err, dimension(9));
  float& tfhpcf = cmn.tfhpcf;
  float& cnhpcf = cmn.cnhpcf;
  float& ethpcf = cmn.ethpcf;
  float& dhhpcf = cmn.dhhpcf;
  float& h3 = cmn.h3;
  float& t4 = cmn.t4;
  float& p4 = cmn.p4;
  float& wg4 = cmn.wg4;
  float const& far4 = cmn.far4;
  float& cnhp = cmn.cnhp;
  float& etathp = cmn.etathp;
  float& dhtchp = cmn.dhtchp;
  float& dhtc = cmn.dhtc;
  float& blhp = cmn.blhp;
  float& hpext = cmn.hpext;
  float& pcnc = cmn.pcnc;
  float& tffhp = cmn.tffhp;
  float& t50 = cmn.t50;
  float& h50 = cmn.h50;
  //
  common_variant all5(cmn.common_all5, sve.all5_bindings);
  common_variant rpms(cmn.common_rpms, sve.rpms_bindings);
  common_variant vols(cmn.common_vols, sve.vols_bindings);
  common_variant flows(cmn.common_flows, sve.flows_bindings);
  common_variant units(cmn.common_units, sve.units_bindings);
  common_variant hturb(cmn.common_hturb, sve.hturb_bindings);
  char* aword= sve.aword;;
  char* whi = sve.whi;
  char* wlo = sve.wlo;
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> s50;
      mbr<float> wa22;
      mbr<float> zi;
      mbr<float> pcni;
      mbr<float> cni;
      mbr<float> pri;
      mbr<float> etai;
      mbr<float> waci;
      mbr<float> tffip;
      mbr<float> cnip;
      mbr<float> etatip;
      mbr<float> dhtcip;
      mbr<float> dhti;
      mbr<float> blip;
      mbr<float> pcblip;
      mbr<float> pcnigu;
      mbr<float> zids;
      mbr<float> pcnids;
      mbr<float> prids;
      mbr<float> etaids;
      mbr<float> waids;
      mbr<float> pricf;
      mbr<float> etaicf;
      mbr<float> waicf;
      mbr<float> tfipds;
      mbr<float> cnipds;
      mbr<float> etipds;
      mbr<float> tfipcf;
      mbr<float> cnipcf;
      mbr<float> etipcf;
      mbr<float> dhipcf;
      mbr<float> waicds;
      mbr<float> wai;
      mbr<float> pcbli;
      mbr<float> bli;
      mbr<float> t22ds;
      mbr<float> wa21;
      mbr<float> wg50;
      mbr<float> far50;
      mbr<float> a24;
      mbr<float> ar23;
      mbr<bool> dumspl;
      mbr<float> fxfn2m;
      mbr<bool> fxm2cp;
      mbr<float> aftfan;
      mbr<float> punt;
      mbr<float> pcblid;
      mbr<float> p6dsav;
      mbr<float> am6dsv;
      mbr<float> etaasv;
      mbr<float> far7sv;
      mbr<float> t4pbl;
      mbr<float> t41;
      mbr<float> fan;
      mbr<int> ispool;
      all5.allocate(), s50, wa22, zi, pcni, cni, pri, etai, waci,
        tffip, cnip, etatip, dhtcip, dhti, blip, pcblip, pcnigu,
        zids, pcnids, prids, etaids, waids, pricf, etaicf, waicf,
        tfipds, cnipds, etipds, tfipcf, cnipcf, etipcf, dhipcf,
        waicds, wai, pcbli, bli, t22ds, wa21, wg50, far50, a24, ar23,
        dumspl, fxfn2m, fxm2cp, aftfan, punt, pcblid, p6dsav, am6dsv,
        etaasv, far7sv, t4pbl, t41, fan, ispool;
    }
    {
      mbr<float> xnhpos;
      mbr<float> xnipds;
      mbr<float> xnlpds;
      mbr<float> pmehp;
      mbr<float> pmiip;
      mbr<float> pmilp;
      rpms.allocate(), xnhpos, xnipds, xnlpds, pmehp, pmiip, pmilp;
    }
    {
      mbr<float> vfan;
      mbr<float> vintc;
      mbr<float> vcomp;
      mbr<float> vcomb;
      mbr<float> vhptrb;
      mbr<float> viptrb;
      mbr<float> vlptrb;
      mbr<float> vaftbn;
      mbr<float> vfduct;
      mbr<float> vwduct;
      vols.allocate(), vfan, vintc, vcomp, vcomb, vhptrb, viptrb,
        vlptrb, vaftbn, vfduct, vwduct;
    }
    {
      mbr<float> wafp;
      mbr<float> waip;
      mbr<float> wacp;
      flows.allocate(), wafp, waip, wacp;
    }
    {
      mbr<bool> si;
      units.allocate(), si;
    }
    {
      mbr<float> tffx(dimension(15));
      mbr<float> cnx(dimension(15, 15));
      mbr<float> dhtcx(dimension(15, 15));
      mbr<float> etatx(dimension(15, 5));
      mbr<int> ntffs;
      mbr<int> npttff(dimension(15));
      hturb.allocate(), tffx, cnx, dhtcx, etatx, ntffs, npttff;
    }
  }
  float& s50 = all5.bind<float>();
  /* float const& wa22 */ all5.bind<float>();
  /* float const& zi */ all5.bind<float>();
  /* float const& pcni */ all5.bind<float>();
  /* float const& cni */ all5.bind<float>();
  /* float const& pri */ all5.bind<float>();
  /* float const& etai */ all5.bind<float>();
  /* float const& waci */ all5.bind<float>();
  float& tffip = all5.bind<float>();
  float& cnip = all5.bind<float>();
  float& etatip = all5.bind<float>();
  float& dhtcip = all5.bind<float>();
  float& dhti = all5.bind<float>();
  /* float const& blip */ all5.bind<float>();
  /* float const& pcblip */ all5.bind<float>();
  /* float const& pcnigu */ all5.bind<float>();
  /* float const& zids */ all5.bind<float>();
  /* float const& pcnids */ all5.bind<float>();
  /* float const& prids */ all5.bind<float>();
  /* float const& etaids */ all5.bind<float>();
  /* float const& waids */ all5.bind<float>();
  /* float const& pricf */ all5.bind<float>();
  /* float const& etaicf */ all5.bind<float>();
  /* float const& waicf */ all5.bind<float>();
  /* float const& tfipds */ all5.bind<float>();
  /* float const& cnipds */ all5.bind<float>();
  /* float const& etipds */ all5.bind<float>();
  /* float const& tfipcf */ all5.bind<float>();
  /* float const& cnipcf */ all5.bind<float>();
  /* float const& etipcf */ all5.bind<float>();
  /* float const& dhipcf */ all5.bind<float>();
  /* float const& waicds */ all5.bind<float>();
  /* float const& wai */ all5.bind<float>();
  /* float const& pcbli */ all5.bind<float>();
  /* float const& bli */ all5.bind<float>();
  /* float const& t22ds */ all5.bind<float>();
  /* float const& wa21 */ all5.bind<float>();
  float& wg50 = all5.bind<float>();
  float& far50 = all5.bind<float>();
  /* float const& a24 */ all5.bind<float>();
  /* float const& ar23 */ all5.bind<float>();
  bool const& dumspl = all5.bind<bool>();
  /* float const& fxfn2m */ all5.bind<float>();
  /* bool const& fxm2cp */ all5.bind<bool>();
  /* float const& aftfan */ all5.bind<float>();
  /* float const& punt */ all5.bind<float>();
  /* float const& pcblid */ all5.bind<float>();
  /* float const& p6dsav */ all5.bind<float>();
  /* float const& am6dsv */ all5.bind<float>();
  /* float const& etaasv */ all5.bind<float>();
  /* float const& far7sv */ all5.bind<float>();
  /* float const& t4pbl */ all5.bind<float>();
  float const& t41 = all5.bind<float>();
  /* float const& fan */ all5.bind<float>();
  int const& ispool = all5.bind<int>();
  /* float const& xnhpos */ rpms.bind<float>();
  /* float const& xnipds */ rpms.bind<float>();
  /* float const& xnlpds */ rpms.bind<float>();
  /* float const& pmehp */ rpms.bind<float>();
  /* float const& pmiip */ rpms.bind<float>();
  /* float const& pmilp */ rpms.bind<float>();
  /* float const& vfan */ vols.bind<float>();
  /* float const& vintc */ vols.bind<float>();
  /* float const& vcomp */ vols.bind<float>();
  /* float const& vcomb */ vols.bind<float>();
  float const& vhptrb = vols.bind<float>();
  /* float const& viptrb */ vols.bind<float>();
  /* float const& vlptrb */ vols.bind<float>();
  /* float const& vaftbn */ vols.bind<float>();
  /* float const& vfduct */ vols.bind<float>();
  /* float const& vwduct */ vols.bind<float>();
  /* float const& wafp */ flows.bind<float>();
  /* float const& waip */ flows.bind<float>();
  float const& wacp = flows.bind<float>();
  bool const& si = units.bind<bool>();
  arr_cref<float> tffx(hturb.bind<float>(), dimension(15));
  arr_cref<float, 2> cnx(hturb.bind<float>(), dimension(15, 15));
  arr_cref<float, 2> dhtcx(hturb.bind<float>(), dimension(15, 15));
  arr_cref<float, 2> etatx(hturb.bind<float>(), dimension(15, 5));
  int const& ntffs = hturb.bind<int>();
  arr_cref<int> npttff(hturb.bind<int>(), dimension(15));
  if (is_called_first_time) {
    aword = "COHPTB";
    wlo = "  (LO)";
    whi = "  (LO)";
  }
  float ra = fem::float0;
  float aj = fem::float0;
  float confac = fem::float0;
  float cnhps = fem::float0;
  float tffhps = fem::float0;
  int igo = fem::int0;
  float go = fem::float0;
  float tfhcal = fem::float0;
  float btuext = fem::float0;
  float xnhpds = fem::float0;
  float xnhp = fem::float0;
  float xnhdot = fem::float0;
  float pmihp = fem::float0;
  float dhtcc = fem::float0;
  float ohhpcf = fem::float0;
  float ohtcc = fem::float0;
  float etath = fem::float0;
  float p50 = fem::float0;
  float xx2 = fem::float0;
  float far60 = fem::float0;
  arr_1d<9, float> q(fem::fill0);
  float wg50p = fem::float0;
  float h60p = fem::float0;
  float p50dot = fem::float0;
  float u50 = fem::float0;
  float u50dot = fem::float0;
  float h50p = fem::float0;
  float u60dot = fem::float0;
  float h50x = fem::float0;
  float errw = fem::float0;
  float dir = fem::float0;
  float t5ot = fem::float0;
  float t50t = fem::float0;
  bool fxfn2n = fem::bool0;
  float tbo = fem::float0;
  float tb = fem::float0;
  static const char* format_10 =
    "('0***** CNHP OFF MAP',f10.4,2x,a6,'*****$$$$$$')";
  static const char* format_9 =
    "('0*****TFFHP OFF MAP',f10.4,2x,a6,'*****$$$$$$')";
  //C        IMPLICIT NONE
  //C
  //C        uses BLOCK DATA to perform inner-turbine calculations (not used in
  //C        engine configurations c and g)
  //C
  cmn.word = aword;
  if (si) {
    goto statement_100;
  }
  ra = 0.0252f;
  aj = 2.719f;
  confac = 1.4091e-5f;
  goto statement_101;
  statement_100:
  ra = 286.9f;
  aj = 1.0f;
  confac = 1.0966e-2f;
  statement_101:
  //C
  if (ispool == 1) {
    goto statement_8;
  }
  if (ides == 0) {
    goto statement_1;
  }
  cnhpcf = cmn.cnhpds * fem::sqrt(t41) / pcnc;
  statement_1:
  cnhp = cnhpcf * pcnc / fem::sqrt(t4);
  cnhps = cnhp;
  tffhps = tffhp;
  //C
  search(-1.f, tffhp, cnhp, dhtchp, etathp, tffx(1), ntffs, cnx(1,
    1), dhtcx(1, 1), etatx(1, 1), npttff(1), 15, 15, igo);
  //C
  if (igo == 1 || igo == 11 || igo == 21) {
    write(18, format_9), tffhps, wlo;
  }
  if (igo == 2 || igo == 12 || igo == 22) {
    write(8, format_9), tffhps, whi;
  }
  if (igo == 10 || igo == 11 || igo == 12) {
    write(8, format_10), cnhps, wlo;
  }
  if (go == 20 || igo == 21 || igo == 22) {
    write(8, format_10), cnhps, whi;
  }
  //C
  if (igo != 7) {
    goto statement_2;
  }
  error(cmn);
  return;
  //C
  statement_2:
  cmn.nomap = 0;
  tfhcal = wg4 * fem::sqrt(t4) / (14.696f * p4);
  btuext = 0.706705f * hpext;
  if (si) {
    tfhcal = wg4 * fem::sqrt(t4) / p4;
  }
  if (si) {
    btuext = hpext;
  }
  xnhp = xnhpds * pcnc / 100.f;
  xnhdot = deriv(cmn, 1, xnhp);
  dhtcc = (btuext * wacp * (h3 - cmn.h21) * confac * pmihp * xnhp *
    xnhdot) / (wg4 * t4);
  if (ides == 0) {
    goto statement_5;
  }
  tfhpcf = cmn.tfhpds / tfhcal;
  dhhpcf = dhtcc / dhtchp;
  ethpcf = cmn.ethpds / etathp;
  //C
  write(4,
    "('H.P. TURBINE DESIGN ',5x,'CNHPCF=',e15.6,' TFHPCF=',e15.8,' ETHPCF=',"
    "e5.8,' DHHPCF=',e15.8)"),
    cnhpcf, tfhpcf, ethpcf, ohhpcf;
  statement_5:
  tfhcal = tfhpcf * tfhcal;
  dhtchp = dhhpcf * dhtchp;
  etathp = ethpcf * etathp;
  dhtc = dhtcc * t4;
  err(1) = (tfhcal - tffhp) / tfhcal;
  err(2) = (ohtcc - dhtchp) / ohtcc;
  //C
  thturb(cmn, dhtc, etath, far4, cmn.h4, cmn.s4, p4, t50, h50, s50, p50);
  if (blhp <= 0.0f) {
    goto statement_6;
  }
  far50 = far4 * wg4 / (wg4 * blhp * (far4 + 1.f));
  wg50 = wg4 + blhp;
  h50 = (blhp * h3 * wg4 * h50) / wg50;
  thermo(cmn, p50, h50, t50, s50, xx2, 1, far60, 1);
  goto statement_7;
  //C
  statement_6:
  far50 = far4;
  wg50 = wg4;
  statement_7:
  //C
  if (vhptrb == 0.0f) {
    goto statement_21;
  }
  q(2) = 0.0f;
  q(3) = 0.0f;
  wg50p = wg50;
  h60p = h50;
  p50dot = deriv(cmn, 12, p50);
  statement_18:
  //C
  thermo(cmn, p50, h50, t50, s50, xx2, 1, far50, 0);
  wg50 = wg50p - p50dot * vhptrb / t50 / 1.4f / ra;
  u50 = h50 - ra * aj * t50;
  u50dot = deriv(cmn, 13, u50);
  h50x = (wg50p * h50p - (wg50p - wg50) * u50 - u60dot * p50 *
    vhptrb / t50 / ra) / wg50;
  errw = (h50 - h50x) / h50;
  dir = fem::sqrt(fem::abs(h50 / h50x));
  afquir(q(1), t50, errw, 0.f, 20.f, 0.0001f, dir, t5ot, igo);
  switch (igo) {
    case 1: goto statement_19;
    case 2: goto statement_21;
    case 3: goto statement_20;
    default: break;
  }
  statement_19:
  t50 = t50t;
  goto statement_18;
  statement_20:
  error(cmn);
  statement_21:
  if (fxfn2n || dumspl) {
    goto statement_8;
  }
  coiptb(cmn);
  return;
  statement_8:
  cmn.p5 = p50;
  cmn.h5 = h50;
  tb = tbo;
  cmn.s5 = s50;
  cmn.far5 = far50;
  cmn.wg5 = wg50;
  //C        SET MIDDLE TURBINE PARAMETERS TO ZERO, NOT USED
  tffip = 0.f;
  cnip = 0.f;
  dhti = 0.f;
  dhtcip = 0.f;
  etatip = 0;
  colptb(cmn);
  //C
}

void
fcntrl()
{
}

struct program_unnamed_save
{
  fem::variant_bindings all5_bindings;
  fem::variant_bindings dyn_bindings;
  fem::variant_bindings looppr_bindings;
  fem::variant_bindings vols_bindings;
  bool clear;
  int iii;

  program_unnamed_save() :
    clear(fem::bool0),
    iii(fem::int0)
  {}
};

//C
//CIBFTC GEN2
void
program_unnamed(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  FEM_CMN_SVE(program_unnamed);
  common_variant all5(cmn.common_all5, sve.all5_bindings);
  common_variant vols(cmn.common_vols, sve.vols_bindings);
  common_variant dyn(cmn.common_dyn, sve.dyn_bindings);
  common_variant looppr(cmn.common_looppr, sve.looppr_bindings);
  // SAVE
  bool& clear = sve.clear;
  int& iii = sve.iii;
  //
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> s50;
      mbr<float> wa22;
      mbr<float> zi;
      mbr<float> pcni;
      mbr<float> cni;
      mbr<float> pri;
      mbr<float> etai;
      mbr<float> waci;
      mbr<float> tffip;
      mbr<float> cnip;
      mbr<float> etatip;
      mbr<float> dhtcip;
      mbr<float> dhti;
      mbr<float> blip;
      mbr<float> pcblip;
      mbr<float> pcnigu;
      mbr<float> zids;
      mbr<float> pcnids;
      mbr<float> prids;
      mbr<float> etaids;
      mbr<float> waids;
      mbr<float> pricf;
      mbr<float> etaicf;
      mbr<float> waicf;
      mbr<float> tfipds;
      mbr<float> cnipds;
      mbr<float> etipds;
      mbr<float> tfipcf;
      mbr<float> cnipcf;
      mbr<float> etipcf;
      mbr<float> dhipcf;
      mbr<float> waicds;
      mbr<float> wai;
      mbr<float> pcbli;
      mbr<float> bli;
      mbr<float> t22ds;
      mbr<float> wa21;
      mbr<float> wg50;
      mbr<float> far50;
      mbr<float> a24;
      mbr<float> ar23;
      mbr<float> dumspl;
      mbr<float> fxfn2m;
      mbr<float> fxm2cp;
      mbr<float> aftfan;
      mbr<float> punt;
      mbr<float> pcblid;
      mbr<float> p6dsav;
      mbr<float> am6dsv;
      mbr<float> etaasv;
      mbr<float> far7sv;
      mbr<float> t4pbl;
      mbr<float> t41;
      mbr<float> fan;
      mbr<int> ispool;
      all5.allocate(), s50, wa22, zi, pcni, cni, pri, etai, waci,
        tffip, cnip, etatip, dhtcip, dhti, blip, pcblip, pcnigu,
        zids, pcnids, prids, etaids, waids, pricf, etaicf, waicf,
        tfipds, cnipds, etipds, tfipcf, cnipcf, etipcf, dhipcf,
        waicds, wai, pcbli, bli, t22ds, wa21, wg50, far50, a24, ar23,
        dumspl, fxfn2m, fxm2cp, aftfan, punt, pcblid, p6dsav, am6dsv,
        etaasv, far7sv, t4pbl, t41, fan, ispool;
    }
    {
      mbr<float> vfan;
      mbr<float> vintc;
      mbr<float> vcomp;
      mbr<float> vcomb;
      mbr<float> vhptrb;
      mbr<float> viptrb;
      mbr<float> vlptrb;
      mbr<float> vaftbn;
      mbr<float> vfduct;
      mbr<float> vwduct;
      vols.allocate(), vfan, vintc, vcomp, vcomb, vhptrb, viptrb,
        vlptrb, vaftbn, vfduct, vwduct;
    }
    {
      mbr<int> itran;
      mbr<float> time;
      mbr<float> dt;
      mbr<float> tf;
      mbr<int> jtran;
      mbr<int> nstep;
      mbr<float> tprint;
      mbr<float> dtprnt;
      dyn.allocate(), itran, time, dt, tf, jtran, nstep, tprint, dtprnt;
    }
    {
      mbr<int> kkgo;
      mbr<float> prfneh;
      mbr<float> prcnem;
      looppr.allocate(), kkgo, prfneh, prcnem;
    }
  }
  /* float const& s50 */ all5.bind<float>();
  /* float const& wa22 */ all5.bind<float>();
  /* float const& zi */ all5.bind<float>();
  /* float const& pcni */ all5.bind<float>();
  /* float const& cni */ all5.bind<float>();
  /* float const& pri */ all5.bind<float>();
  /* float const& etai */ all5.bind<float>();
  /* float const& waci */ all5.bind<float>();
  /* float const& tffip */ all5.bind<float>();
  /* float const& cnip */ all5.bind<float>();
  /* float const& etatip */ all5.bind<float>();
  /* float const& dhtcip */ all5.bind<float>();
  /* float const& dhti */ all5.bind<float>();
  /* float const& blip */ all5.bind<float>();
  /* float const& pcblip */ all5.bind<float>();
  /* float const& pcnigu */ all5.bind<float>();
  float& zids = all5.bind<float>();
  float& pcnids = all5.bind<float>();
  float& prids = all5.bind<float>();
  float& etaids = all5.bind<float>();
  /* float const& waids */ all5.bind<float>();
  /* float const& pricf */ all5.bind<float>();
  /* float const& etaicf */ all5.bind<float>();
  /* float const& waicf */ all5.bind<float>();
  /* float const& tfipds */ all5.bind<float>();
  /* float const& cnipds */ all5.bind<float>();
  /* float const& etipds */ all5.bind<float>();
  /* float const& tfipcf */ all5.bind<float>();
  /* float const& cnipcf */ all5.bind<float>();
  /* float const& etipcf */ all5.bind<float>();
  /* float const& dhipcf */ all5.bind<float>();
  /* float const& waicds */ all5.bind<float>();
  /* float const& wai */ all5.bind<float>();
  /* float const& pcbli */ all5.bind<float>();
  /* float const& bli */ all5.bind<float>();
  /* float const& t22ds */ all5.bind<float>();
  /* float const& wa21 */ all5.bind<float>();
  /* float const& wg50 */ all5.bind<float>();
  /* float const& far50 */ all5.bind<float>();
  /* float const& a24 */ all5.bind<float>();
  /* float const& ar23 */ all5.bind<float>();
  /* float const& dumspl */ all5.bind<float>();
  /* float const& fxfn2m */ all5.bind<float>();
  /* float const& fxm2cp */ all5.bind<float>();
  /* float const& aftfan */ all5.bind<float>();
  /* float const& punt */ all5.bind<float>();
  /* float const& pcblid */ all5.bind<float>();
  float& p6dsav = all5.bind<float>();
  float& am6dsv = all5.bind<float>();
  float& etaasv = all5.bind<float>();
  float& far7sv = all5.bind<float>();
  /* float const& t4pbl */ all5.bind<float>();
  /* float const& t41 */ all5.bind<float>();
  /* float const& fan */ all5.bind<float>();
  /* int const& ispool */ all5.bind<int>();
  /* float const& vfan */ vols.bind<float>();
  /* float const& vintc */ vols.bind<float>();
  /* float const& vcomp */ vols.bind<float>();
  /* float const& vcomb */ vols.bind<float>();
  /* float const& vhptrb */ vols.bind<float>();
  /* float const& viptrb */ vols.bind<float>();
  /* float const& vlptrb */ vols.bind<float>();
  /* float const& vaftbn */ vols.bind<float>();
  /* float const& vfduct */ vols.bind<float>();
  /* float const& vwduct */ vols.bind<float>();
  int& itran = dyn.bind<int>();
  float& time = dyn.bind<float>();
  /* float const& dt */ dyn.bind<float>();
  /* float const& tf */ dyn.bind<float>();
  int& jtran = dyn.bind<int>();
  int& nstep = dyn.bind<int>();
  float& tprint = dyn.bind<float>();
  float& dtprnt = dyn.bind<float>();
  int& kkgo = looppr.bind<int>();
  /* float const& prfneh */ looppr.bind<float>();
  /* float const& prcnem */ looppr.bind<float>();
  if (is_called_first_time) {
    iii = 0;
    clear = true;
  }
  //C
  //C        EQUIVALENCE     (X, IDES)
  //C
  bool rstart = true;
  //C
  cmn.errer = false;
  itran = 0;
  jtran = 0;
  nstep = 0;
  time = 0.0f;
  tprint = 0.0f;
  dtprnt = 0.0f;
  //C
  if (!clear) {
    engbal(cmn);
  }
  clear = false;
  //C
  int j = fem::int0;
  arr_1d<1, float> x(fem::fill0);
  FEM_DO_SAFE(j, 1, 415) {
    x(j) = 0.f;
  }
  //C
  //C        SET ARBITRARY VALUES FOR INTERMEDIATE SPOOL DESIGN PARAMETERS
  //C        TO AVOID ERROR WHEN RUNNING A DUMNYSPOOL ENGINE
  //C
  prids = 1.5f;
  etaids = 1.0f;
  pcnids = 100.f;
  zids = 0.75f;
  cmn.pcncds = 100.f;
  if (iii == 0) {
    kkgo = 0;
  }
  if (rstart) {
    conout(cmn, 1);
  }
  p6dsav = 1.f;
  am6dsv = 1.f;
  etaasv = 1.f;
  far7sv = 1.f;
  //C
  engbal(cmn);
  FEM_STOP(0);
}

} // namespace Basic_engine

int
main(
  int argc,
  char const* argv[])
{
  return fem::main_with_catch(
    argc, argv,
    Basic_engine::program_unnamed);
}
