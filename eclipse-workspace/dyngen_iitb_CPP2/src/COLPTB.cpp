#include <fem.hpp> // Fortran EMulation library of fable module
#include <DERIV.cpp>
namespace BASIC_ENG {

using namespace fem::major_types;

//void
//afquir(...)
//{
//  throw std::runtime_error(
//    "Missing function implementation: afquir");
//}
//
//void
//deriv(...)
//{
//  throw std::runtime_error(
//    "Missing function implementation: deriv");
//}
//
//void
//error(...)
//{
//  throw std::runtime_error(
//    "Missing function implementation: error");
//}
//
//void
//frtosd(...)
//{
//  throw std::runtime_error(
//    "Missing function implementation: frtosd");
//}
//
//void
//search(...)
//{
//  throw std::runtime_error(
//    "Missing function implementation: search");
//}
//
//void
//thermo(...)
//{
//  throw std::runtime_error(
//    "Missing function implementation: thermo");
//}
//
//void
//thturb(...)
//{
//  throw std::runtime_error(
//    "Missing function implementation: thturb");
//}

struct common_words
{
  char* word;

  common_words() :
    word(NULL)
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
  float absav;
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
    absav(fem::float0),
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
  float pcblou;
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
    pcblou(fem::float0),
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
  float wg26;
  float far2;
  float etad;
  float dpduc;
  float bypass;
  float duns3;
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
    wg26(fem::float0),
    far2(fem::float0),
    etad(fem::float0),
    dpduc(fem::float0),
    bypass(fem::float0),
    duns3(fem::float0),
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
  float bprnt;
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
    bprnt(fem::float0),
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
  float dhicip;
  float dhti;
  float blip;
  float pcblip;
  float pcnigu;
  float zds;
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
  float dhpcf;
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
  bool fxfn2m;
  float fxr2cp;
  bool aftfan;
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
    dhicip(fem::float0),
    dhti(fem::float0),
    blip(fem::float0),
    pcblip(fem::float0),
    pcnigu(fem::float0),
    zds(fem::float0),
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
    dhpcf(fem::float0),
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
    fxfn2m(fem::bool0),
    fxr2cp(fem::float0),
    aftfan(fem::bool0),
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

struct common_rpms
{
  float xnhpds;
  float xnipos;
  float xnlpds;
  float phihp;
  float phiip;
  float pmilp;

  common_rpms() :
    xnhpds(fem::float0),
    xnipos(fem::float0),
    xnlpds(fem::float0),
    phihp(fem::float0),
    phiip(fem::float0),
    pmilp(fem::float0)
  {}
};

struct common_vols
{
  float vfan;
  float vintc;
  float vcomp;
  float vcomb;
  float vhptrb;
  float viptrb;
  float vlptrb;
  float vaftbn;
  float vfduct;
  float vmouct;

  common_vols() :
    vfan(fem::float0),
    vintc(fem::float0),
    vcomp(fem::float0),
    vcomb(fem::float0),
    vhptrb(fem::float0),
    viptrb(fem::float0),
    vlptrb(fem::float0),
    vaftbn(fem::float0),
    vfduct(fem::float0),
    vmouct(fem::float0)
  {}
};

struct common_flows
{
  int mafp;
  float waip;
  float wacp;

  common_flows() :
    mafp(fem::int0),
    waip(fem::float0),
    wacp(fem::float0)
  {}
};

struct common_units
{
  bool si;

  common_units() :
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

struct common :
  fem::common,
  common_words,
  common_design,
  common_all1,
  common_all2,
  common_all3,
  common_all4,
  common_all5,
  common_rpms,
  common_vols,
  common_flows,
  common_units,
  common_lturb
{
  fem::cmn_sve colptb_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct colptb_save
{
  char aword[8];
  char whi[8];
  char wlo[8];

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
  bool& fxfn2m = cmn.fxfn2m;
  int& ispool = cmn.ispool;
  float& vlptrb = cmn.vlptrb;
  float& waip = cmn.waip;
  bool& si = cmn.si;
  arr_cref<float> tffx(cmn.tffx, dimension(15));
  arr_cref<float, 2> cnx(cmn.cnx, dimension(15, 15));
  arr_cref<float, 2> dhtcx(cmn.dhtcx, dimension(15, 15));
  arr_cref<float, 2> etatx(cmn.etatx, dimension(15, 15));
  arr_cref<int> npttff(cmn.npttff, dimension(15));
  //
  //char* wlo = sve.wlo;
  //char* whi = sve.whi;
  if (is_called_first_time) {
    strcpy(sve.aword , "COLPTB");
    strcpy(sve.wlo , "  (LO)");
    strcpy(sve.whi , "  (HI)");
  }
  //float amord = fem::float0;
  float ra = fem::float0;
  float aj = fem::float0;
  float confac = fem::float0;
  float cnlps = fem::float0;
  float tfflps = fem::float0;
  int igo = fem::int0;
  //char& whi = "";
  float tflcal = fem::float0;
  float xnlp = fem::float0;
  float xnldot = fem::float0;
  float philp = fem::float0;
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
  cmn.word = sve.aword;
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
  search(-1.f, tfflp, cnlp, dhtclp, etatlp, tffx(1), cmn.ntffs, cnx(1,
    1), dhtcx(1, 1), etatx(1, 1), npttff(1), 16, 15, igo);
  if (igo == 1.f || igo == 11 || igo == 21) {
    write(8, format_8), tfflps, sve.wlo;
  }
  if (igo == 2 || igo == 12 || igo == 22) {
    write(8, format_8), tfflps, sve.whi;
  }
  if (igo == 10 || igo == 11 || igo == 12) {
    write(8, format_9), cnlps, sve.wlo;
  }
  if (igo == 20 || igo == 21 || igo == 22) {
    write(8, format_9), cnlps, sve.whi;
  }
  error();
  return;
  //C
  cmn.nomap = 0;
  tflcal = wg5 * fem::sqrt(t5) / (14.696f * p5);
  if (si) {
    tflcal = wg5 * fem::sqrt(t5) / p5;
  }
  xnlp = cmn.xnlpds * pcnf / 100.f;
  xnldot = deriv(cmndrv, 13, xnlp);
  dhacel = confac * philp * xnlp * xnldot;
  dhtcf = (wafp * (h22 - h2) + dhacel) / (wg5 * t5);
  if (fxfn2m) {
    dhtcf = (wafp * (h22 - h2) * waip * (h21 - h22) + dhacel) / (wg5 * t5);
  }
  if (fxfn2m && cmn.aftfan) {
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
  thturb(dhtf, etatlp, far5, cmn.h5, cmn.s5, p5, t55, h55, s55, p55);
  if (sllp <= 0) {
    goto statement_6;
  }
  far55 = far5 * wg5 / (wgs + bllp * (1.f + far5));
  wg55 = wgs + bllp;
  h55 = (bllp * cmn.h3 + wg5 * h55) / wg55;
  thermo(p55, h55, t55, s55, xx2, 1, far55, 1);
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
  p55dot = deriv(cmndrv, 17, p55);
  statement_18:
  thermo(p55, h55, t55, s55, xx2, 1, far55, 0);
  wg55 = wg55p - p55dot * vlptrb / t55 / 1.4f / ra;
  u55 = h55 - ra * aj * t55;
  u55dot = deriv(cmndrv, 17, u55);
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
  error();
  statement_21:
  frtosd();
  //C
}

} // namespace BASIC_ENG
