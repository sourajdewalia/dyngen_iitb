#include <fem.hpp> // Fortran EMulation library of fable module
#include <DERIV.cpp>
#include <AFQUIR.cpp>
#include <ERROR.cpp>
#include <THERMO.cpp>
namespace BASIC_ENG {

using namespace fem::major_types;

//void
//afquir(...)
//{
//  throw std::runtime_error(
//    "Missing function implementation: afquir");
//}

void
comnoz(...)
{
  throw std::runtime_error(
    "Missing function implementation: comnoz");
}

//void
//deriv(...)
//{
//  throw std::runtime_error(
//    "Missing function implementation: deriv");
//}

//void
//error(...)
//{
//  throw std::runtime_error(
//    "Missing function implementation: error");
//}

void
etaab(...)
{
  throw std::runtime_error(
    "Missing function implementation: etaab");
}

//void
//procom(...)
//{
//  throw std::runtime_error(
//    "Missing function implementation: procom");
//}

//void
//thermo(...)
//{
//  throw std::runtime_error(
//    "Missing function implementation: thermo");
//}

//struct common_words
//{
//  char* word;
//
//  common_words() :
//    word(NULL)
//  {}
//};

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
  float dumdl;
  float oumd2;
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
  float wa3cos;
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
  float tflpdswcnlpds;
  float etlpds;
  float tflpcf;
  float cnlpcf;
  float etlpcf;
  float dhlpcf;
  float t2ids;
  float t24ds;
  float wfdds;
  float dtduds;
  float etaods;
  float wa23ds;
  float dpduds;
  float dtducf;
  float etadcf;
  float t7ds;
  float wfads;
  float dtafds;
  float etaadsi;
  float g6cds;
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
    dumdl(fem::float0),
    oumd2(fem::float0),
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
    wa3cos(fem::float0),
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
    tflpdswcnlpds(fem::float0),
    etlpds(fem::float0),
    tflpcf(fem::float0),
    cnlpcf(fem::float0),
    etlpcf(fem::float0),
    dhlpcf(fem::float0),
    t2ids(fem::float0),
    t24ds(fem::float0),
    wfdds(fem::float0),
    dtduds(fem::float0),
    etaods(fem::float0),
    wa23ds(fem::float0),
    dpduds(fem::float0),
    dtducf(fem::float0),
    etadcf(fem::float0),
    t7ds(fem::float0),
    wfads(fem::float0),
    dtafds(fem::float0),
    etaadsi(fem::float0),
    g6cds(fem::float0),
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
  float bldb;
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
  float dpcon;
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
    bldb(fem::float0),
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
    dpcon(fem::float0),
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
  float xmfd;
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
  float s7;
  float t8;
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
    xmfd(fem::float0),
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
    s7(fem::float0),
    t8(fem::float0),
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
  float v25ps6;
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
  float p50;
  float h50;

  common_all4() :
    wg6(fem::float0),
    wfa(fem::float0),
    wg7(fem::float0),
    far7(fem::float0),
    etaa(fem::float0),
    dpaft(fem::float0),
    v55(fem::float0),
    v25ps6(fem::float0),
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
    p50(fem::float0),
    h50(fem::float0)
  {}
};

struct common_all5
{
  float s50;
  float wa22;
  float zi;
  float pcni;
  float cni;
  float pri;
  float etai;
  float waci;
  float tffip;
  float cnip;
  float etatip;
  float dhtcip;
  float dhti;
  float blip;
  float pcblip;
  float pcnigu;
  float zids;
  float pcnids;
  float prids;
  float etaids;
  float waids;
  float pricf;
  float etaicf;
  float waicf;
  float tfipds;
  float cnipds;
  float etipds;
  float tfipcf;
  float cnipcf;
  float etipcf;
  float dhipcf;
  float waicds;
  float wai;
  float pcbli;
  float bli;
  float t22ds;
  float wa21;
  float wg50;
  float far50;
  float a24;
  float am23;
  float dumspl;
  float fxfn2m;
  float fxm2cp;
  float aftfan;
  float punt;
  float pcblid;
  float p6dsav;
  float am6dsv;
  float etaasv;
  float far7sv;
  float t4pbl;
  float t41;
  float fan;
  int ispool;

  common_all5() :
    s50(fem::float0),
    wa22(fem::float0),
    zi(fem::float0),
    pcni(fem::float0),
    cni(fem::float0),
    pri(fem::float0),
    etai(fem::float0),
    waci(fem::float0),
    tffip(fem::float0),
    cnip(fem::float0),
    etatip(fem::float0),
    dhtcip(fem::float0),
    dhti(fem::float0),
    blip(fem::float0),
    pcblip(fem::float0),
    pcnigu(fem::float0),
    zids(fem::float0),
    pcnids(fem::float0),
    prids(fem::float0),
    etaids(fem::float0),
    waids(fem::float0),
    pricf(fem::float0),
    etaicf(fem::float0),
    waicf(fem::float0),
    tfipds(fem::float0),
    cnipds(fem::float0),
    etipds(fem::float0),
    tfipcf(fem::float0),
    cnipcf(fem::float0),
    etipcf(fem::float0),
    dhipcf(fem::float0),
    waicds(fem::float0),
    wai(fem::float0),
    pcbli(fem::float0),
    bli(fem::float0),
    t22ds(fem::float0),
    wa21(fem::float0),
    wg50(fem::float0),
    far50(fem::float0),
    a24(fem::float0),
    am23(fem::float0),
    dumspl(fem::float0),
    fxfn2m(fem::float0),
    fxm2cp(fem::float0),
    aftfan(fem::float0),
    punt(fem::float0),
    pcblid(fem::float0),
    p6dsav(fem::float0),
    am6dsv(fem::float0),
    etaasv(fem::float0),
    far7sv(fem::float0),
    t4pbl(fem::float0),
    t41(fem::float0),
    fan(fem::float0),
    ispool(fem::int0)
  {}
};

struct common_vols
{
  float vfan;
  float vintc;
  float vcomp;
  float vhptrb;
  float viptrb;
  float vlptrb;
  float vaftbn;
  float vfduct;
  float vwduct;

  common_vols() :
    vfan(fem::float0),
    vintc(fem::float0),
    vcomp(fem::float0),
    vhptrb(fem::float0),
    viptrb(fem::float0),
    vlptrb(fem::float0),
    vaftbn(fem::float0),
    vfduct(fem::float0),
    vwduct(fem::float0)
  {}
};

struct common_units
{
  bool si;

  common_units() :
    si(fem::bool0)
  {}
};

//struct common_whrerr
//{
//  int icoafb;
//  int icoduc;
//  int icomix;
//
//  common_whrerr() :
//    icoafb(fem::int0),
//    icoduc(fem::int0),
//    icomix(fem::int0)
//  {}
//};

struct common :
  fem::common,
  common_words,
  common_design,
  common_all1,
  common_all2,
  common_all3,
  common_all4,
  common_all5,
  common_vols,
  common_units,
  common_whrerr
{
  fem::cmn_sve coafbn_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct coafbn_save
{
  char* aword;

  coafbn_save() :
    aword(NULL)
  {}
};

void
coafbn(
  common& cmn)
{
  FEM_CMN_SVE(coafbn);
  int& ides = cmn.ides;
  int& iaftbn = cmn.iaftbn;
  float& t7ds = cmn.t7ds;
  float& a7 = cmn.a7;
  float& far55 = cmn.far55;
  float& far24 = cmn.far24;
  float& t6 = cmn.t6;
  float& p6 = cmn.p6;
  float& h6 = cmn.h6;
  float& t7 = cmn.t7;
  float& p7 = cmn.p7;
  float& h7 = cmn.h7;
  float& s7 = cmn.s7;
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
  float& p6dsav = cmn.p6dsav;
  float& am6dsv = cmn.am6dsv;
  float& etaasv = cmn.etaasv;
  float& far7sv = cmn.far7sv;
  float& vaftbn = cmn.vaftbn;
  bool& si = cmn.si;
  int& icoafb = cmn.icoafb;
  //
  char* aword = sve.aword;
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
  float o = fem::float0;
  float coafb = fem::float0;
  float p6ds = fem::float0;
  float am6ds = fem::float0;
  float wf6 = fem::float0;
  float wa6 = fem::float0;
  float wg6c = fem::float0;
  float wg6cds = fem::float0;
  float far6 = fem::float0;
  float xx2 = fem::float0;
  float xx3 = fem::float0;
  float xx4 = fem::float0;
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
  float etaads = fem::float0;
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
  int mg7 = fem::int0;
  float wg7p = fem::float0;
  float h7p = fem::float0;
  float p7dot = fem::float0;
  float hg7p = fem::float0;
  float hg7 = fem::float0;
  float u7 = fem::float0;
  float u7dot = fem::float0;
  float h7x = fem::float0;
  float dummy1 = 400.0;
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
  coafb = o;
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
  procom(cmnprocom, far6, t6, xx1, xx2, xx3, xx4, phi6, xx6);
  wqa = wg6 / a7;
  c1 = p7 * fem::sqrt(g / (t6 * aj)) * capsf;
  am7 = am6;
  ts7 = 0.875f * 16;
  statement_1:
  FEM_DO_SAFE(i, 1, 15) {
    procom(cmnprocom, far6, ts7, cs7, ak7, cp7, rex7, phis7, hs7);
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
  thermo(cmnthrmo, p7, ha, t7, xx1, xx2, 1, far6, 0);
  //C
  //C *** TO ALTER DESIGN ABETAA MAP FROM GENERAL TO SPECIFIC MAP
  //C
  if (ides != 1) {
    goto statement_9;
  }
  far7ds = (ha - h6) / (hv * etaads);
  etaab(0.f, 0.f, 0.f, 0.f, etaads, etaasv, p6ds, p6dsav, am6ds,
    am6dsv, ides, far7ds, far7sv);
  t7 = t6;
  goto statement_20;
  statement_9:
  p6gs = p6 * pratm;
  far7gs = (ha - h6) / (hv * etaads);
  FEM_DO_SAFE(ii, 1, 15) {
    etaab(far7gs, am6, p6gs, etaa, etaads, etaasv, p6ds, p6dsav,
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
  error(cmnerror);
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
  error(cmnerror);
  statement_15:
  wfa = wfax;
  statement_16:
  fart = (wf6 + wfa) / wa6;
  wg7 = wg6 + wfa;
  //C
  //C ***    MOMENTUM  LOSS
  procom(cmnprocom, far7, t7, xx1, xx2, xx3, rex7, phi7, h7);
  rho7 = capsf * p7 / (aj * rex7 * t7);
  v7 = wg7 / (rho7 * a7);
  q(2) = 0.f;
  q(3) = 0.f;
  ps7 = ps65 - 0.01f;
  statement_17:
  rho7 = wg7 / (v7 * a7);
  hs7 = h7 - fem::pow2(v7) / (2.f * g * aj);
  thermo(cmnthrmo, 1.0f, hs7, ts7, phis7, xx2, 1, far7, 1);
  if (ts7 >= 301.f) {
    goto statement_18;
  }
  thermo(cmnthrmo, 1.0f, hs7, dummy1, phis7, xx2, 1, far7, 0);
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
  procom(cmnprocom, far7, ts7, cs7, xx2, xx3, xx6, xx5, xx6);
  aht = vt / cs7;
  statement_20:
  thermo(cmnthrmo, p7, h7, t7, s7, xx2, 1, far7, 0);
  if (vaftbn == 0.0f) {
    goto statement_31;
  }
  q(2) = 0.0f;
  q(3) = 0.0f;
  wg7p = mg7;
  h7p = h7;
  p7dot = deriv(cmndrv, 18, p7);
  statement_28:
  thermo(cmnthrmo, p7, h7, t7, s7, xx2, 1, far7, 0);
  hg7 = hg7p - p7dot * vaftbn / t7 / (1.4f * ra);
  u7 = h7 - ajx * ra * t7;
  u7dot = deriv(cmndrv, 19, u7);
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
  error(cmnerror);
  statement_31:
  icoafb = o;
  comnoz();
  //C
}

} // namespace BASIC_ENG
