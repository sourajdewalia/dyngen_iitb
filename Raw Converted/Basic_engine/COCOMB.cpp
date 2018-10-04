#include <fem.hpp> // Fortran EMulation library of fable module

namespace BASIC_ENG {

using namespace fem::major_types;

void
afquir(...)
{
  throw std::runtime_error(
    "Missing function implementation: afquir");
}

void
cocomp(...)
{
  throw std::runtime_error(
    "Missing function implementation: cocomp");
}

void
deriv(...)
{
  throw std::runtime_error(
    "Missing function implementation: deriv");
}

void
error(...)
{
  throw std::runtime_error(
    "Missing function implementation: error");
}

void
search(...)
{
  throw std::runtime_error(
    "Missing function implementation: search");
}

void
thcomp(...)
{
  throw std::runtime_error(
    "Missing function implementation: thcomp");
}

void
thermo(...)
{
  throw std::runtime_error(
    "Missing function implementation: thermo");
}

void
wducti(...)
{
  throw std::runtime_error(
    "Missing function implementation: wducti");
}

struct common_words
{
  float word;

  common_words() :
    word(fem::float0)
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
  int ioburn;
  float aftbn;
  int idcd;
  int imcd;
  int idshoc;
  int imshoc;
  int nozflt;
  int itrys;
  int looper;
  int nomap;
  int numap;
  int mapeog;
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
    ioburn(fem::int0),
    aftbn(fem::float0),
    idcd(fem::int0),
    imcd(fem::int0),
    idshoc(fem::int0),
    imshoc(fem::int0),
    nozflt(fem::int0),
    itrys(fem::int0),
    looper(fem::int0),
    nomap(fem::int0),
    numap(fem::int0),
    mapeog(fem::int0),
    tolall(fem::float0),
    err(dimension(9), fem::fill0)
  {}
};

struct common_all1
{
  float pcnfgu;
  float pcncgu;
  float t4gu;
  float dumpd1;
  float dumpd2;
  float oelfg;
  float oelfn;
  float delsfc;
  float fds;
  float pcnfds;
  float prfds;
  float etafds;
  float wafds;
  float prfcf;
  float etafcf;
  int mafcf;
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
  float dtcoos;
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
  float etedds;
  float wa23ds;
  float dpduds;
  float dtducf;
  float etadcf;
  float t1ds;
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
    dumpd1(fem::float0),
    dumpd2(fem::float0),
    oelfg(fem::float0),
    oelfn(fem::float0),
    delsfc(fem::float0),
    fds(fem::float0),
    pcnfds(fem::float0),
    prfds(fem::float0),
    etafds(fem::float0),
    wafds(fem::float0),
    prfcf(fem::float0),
    etafcf(fem::float0),
    mafcf(fem::int0),
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
    dtcoos(fem::float0),
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
    etedds(fem::float0),
    wa23ds(fem::float0),
    dpduds(fem::float0),
    dtducf(fem::float0),
    etadcf(fem::float0),
    t1ds(fem::float0),
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
  float t3p3;
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
  float ps5;
  float h55;
  float s55;
  float blf;
  float blc;
  float blou;
  float blo8;
  float cnf;
  float prf;
  float etaf;
  float afc;
  float waf;
  float wa3;
  float wg4;
  float far4;
  float cnc;
  float prc;
  float etac;
  float wacc;
  float wac;
  float eta8;
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
  float g55;
  float fars5;
  float hpext;
  float am;
  float altp;
  float etar;
  float zf;
  float pcnf;
  float zc;
  float pcnc;
  float wfb;
  float stffhp;
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
    t3p3(fem::float0),
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
    ps5(fem::float0),
    h55(fem::float0),
    s55(fem::float0),
    blf(fem::float0),
    blc(fem::float0),
    blou(fem::float0),
    blo8(fem::float0),
    cnf(fem::float0),
    prf(fem::float0),
    etaf(fem::float0),
    afc(fem::float0),
    waf(fem::float0),
    wa3(fem::float0),
    wg4(fem::float0),
    far4(fem::float0),
    cnc(fem::float0),
    prc(fem::float0),
    etac(fem::float0),
    wacc(fem::float0),
    wac(fem::float0),
    eta8(fem::float0),
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
    g55(fem::float0),
    fars5(fem::float0),
    hpext(fem::float0),
    am(fem::float0),
    altp(fem::float0),
    etar(fem::float0),
    zf(fem::float0),
    pcnf(fem::float0),
    zc(fem::float0),
    pcnc(fem::float0),
    wfb(fem::float0),
    stffhp(fem::float0),
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
  float dumsl;
  float duns2;
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
  float xhg26;
  float xfar26;
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
    dumsl(fem::float0),
    duns2(fem::float0),
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
    xhg26(fem::float0),
    xfar26(fem::float0),
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
  float fgrd;
  float vjm;
  float fgnm;
  float fgpo;
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
  float fgmng;
  float fgpwng;
  float fnwing;
  float fnmain;
  float fmovfn;
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
    fgrd(fem::float0),
    vjm(fem::float0),
    fgnm(fem::float0),
    fgpo(fem::float0),
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
    fgmng(fem::float0),
    fgpwng(fem::float0),
    fnwing(fem::float0),
    fnmain(fem::float0),
    fmovfn(fem::float0),
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

struct common_all5
{
  float s50;
  float a22;
  float zi;
  float pcni;
  float cn;
  float pri;
  float etai;
  float aci;
  float tffip;
  float cnip;
  float etatip;
  float dhtcip;
  float dhti;
  float blip;
  float pcblip;
  float pcnigu;
  float zids;
  float pcnds;
  float prids;
  float etaids;
  float aids;
  float pricf;
  float etaicf;
  float waicf;
  float tfids;
  float cnipds;
  float etipds;
  float tfipcf;
  float cnipcf;
  float etpcf;
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
  float ar23;
  bool dumspl;
  float fxfnzm;
  float fxmecp;
  float aftfan;
  float punt;
  float pcblid;
  float p6dsav;
  float am6dsv;
  float etaasv;
  float fartsv;
  float t4pbl;
  float t41;
  bool fan;
  int ispool;

  common_all5() :
    s50(fem::float0),
    a22(fem::float0),
    zi(fem::float0),
    pcni(fem::float0),
    cn(fem::float0),
    pri(fem::float0),
    etai(fem::float0),
    aci(fem::float0),
    tffip(fem::float0),
    cnip(fem::float0),
    etatip(fem::float0),
    dhtcip(fem::float0),
    dhti(fem::float0),
    blip(fem::float0),
    pcblip(fem::float0),
    pcnigu(fem::float0),
    zids(fem::float0),
    pcnds(fem::float0),
    prids(fem::float0),
    etaids(fem::float0),
    aids(fem::float0),
    pricf(fem::float0),
    etaicf(fem::float0),
    waicf(fem::float0),
    tfids(fem::float0),
    cnipds(fem::float0),
    etipds(fem::float0),
    tfipcf(fem::float0),
    cnipcf(fem::float0),
    etpcf(fem::float0),
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
    ar23(fem::float0),
    dumspl(fem::bool0),
    fxfnzm(fem::float0),
    fxmecp(fem::float0),
    aftfan(fem::float0),
    punt(fem::float0),
    pcblid(fem::float0),
    p6dsav(fem::float0),
    am6dsv(fem::float0),
    etaasv(fem::float0),
    fartsv(fem::float0),
    t4pbl(fem::float0),
    t41(fem::float0),
    fan(fem::bool0),
    ispool(fem::int0)
  {}
};

struct common_vols
{
  float vfan;
  float vintc;
  float vcomp;
  float vccomb;
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
    vccomb(fem::float0),
    vhptrb(fem::float0),
    viptrb(fem::float0),
    vlptrb(fem::float0),
    vaftbn(fem::float0),
    vfduct(fem::float0),
    vwduct(fem::float0)
  {}
};

struct common_flows
{
  float wafp;
  float waip;
  float wacp;

  common_flows() :
    wafp(fem::float0),
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
  common_flows,
  common_units,
  common_comp
{
  fem::cmn_sve cocomb_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct cocomb_save
{
  float aword;

  cocomb_save() :
    aword(fem::float0)
  {}
};

void
cocomb(
  common& cmn)
{
  FEM_CMN_SVE(cocomb);
  common_write write(cmn);
  int& ides = cmn.ides;
  arr_ref<float> err(cmn.err, dimension(9));
  float& pcncds = cmn.pcncds;
  float& wacds = cmn.wacds;
  float& prccf = cmn.prccf;
  float& etaccf = cmn.etaccf;
  float& waccf = cmn.waccf;
  float& t21ds = cmn.t21ds;
  float& t21 = cmn.t21;
  float& p21 = cmn.p21;
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
  float& wai = cmn.wai;
  float& bli = cmn.bli;
  float& wa21 = cmn.wa21;
  float& pcblid = cmn.pcblid;
  bool& fan = cmn.fan;
  int& ispool = cmn.ispool;
  float& vcomp = cmn.vcomp;
  float& wacp = cmn.wacp;
  arr_cref<float> cnx(cmn.cnx, dimension(15));
  arr_cref<float, 2> prx(cmn.prx, dimension(15, 15));
  arr_cref<float, 2> wacx(cmn.wacx, dimension(15, 15));
  arr_cref<float, 2> etax(cmn.etax, dimension(15, 15));
  arr_cref<int> npt(cmn.npt, dimension(15));
  //
  float& aword = sve.aword;
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
  float cni = fem::float0;
  float tsto = fem::float0;
  float spdmi = fem::float0;
  float spdm = fem::float0;
  float pcncs = fem::float0;
  float cncs = fem::float0;
  int igo = fem::int0;
  int node = fem::int0;
  int mapedg = fem::int0;
  arr_1d<2, float> wlh(fem::fill0);
  float prccfs = fem::float0;
  float wa22 = fem::float0;
  float waci = fem::float0;
  float wai32 = fem::float0;
  float pcbid = fem::float0;
  float t3 = fem::float0;
  float p3 = fem::float0;
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
  float bldu = fem::float0;
  float pcbldb = fem::float0;
  float bldb = fem::float0;
  float pcllp = fem::float0;
  float bllip = fem::float0;
  //C
  //C        Uses BLOCK DATA to perform combustor calculations; may use either C     T4 or WFB as main parameter
  //C
  cmn.word = aword;
  //C
  if (cmn.si) {
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
  spdmi = cni * fem::sqrt(cmn.t22 / tsto);
  cnc = spdm / theta;
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
  search(zc, cnc, prc, wacc, etac, cnx(1), cmn.ncn, prx(1, 1), wacx(1,
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
  if (node == 1) {
    goto statement_4;
  }
  if ((cnc - cncs) > 0.0005f * cnc) {
    mapedg = 1;
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
  if (!cmn.dumspl || pcblid != 0.f || !fan) {
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
  cmn.pcbli = bli / wai;
  wducti();
  if (pcbid == 0.f) {
    err(7) = (wac - wai) / wac;
  }
  if (!fan) {
    err(5) = (cmn.waf - wac - cmn.blf) / wac;
  }
  if (ides == 1 && pcblid == 0) {
    err(7) = 1.e-4f;
  }
  thcomp(prc, etac, t21, cmn.h21, cmn.s21, p21, t3, h3, s3, p3);
  if (vcomp == 0.0f) {
    goto statement_21;
  }
  q(2) = 0.0f;
  q(3) = 0.0f;
  h3p = h3;
  p3dot = deriv(8, p3);
  statement_18:
  thermo(p3, h3, t3, s3, xx2, 0.0f, 0.0f);
  wac = wacp - p3dot * vcomp / t3 / 1.4f / ra;
  u3 = h3 - aj * ra * t3;
  u3dot = deriv(9, u3);
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
  error();
  statement_21:
  if (pcblc > 0.f) {
    blc = pcblc * wac;
  }
  cmn.wa3 = wac - blc;
  bldu = cmn.pcbldu * blc;
  bldb = pcbldb * blc;
  cmn.blhp = cmn.pcblip * blc;
  bllip = pcllp * blc;
  if (cmn.mode != 1) {
    goto statement_7;
  }
  if (fem::abs(cnc - cncs) <= 0.001f * cncs) {
    goto statement_8;
  }
  write(8,
    "('CNC WAS=  ',e15.8,' AND NOW=  ',e15.8,' CHECK PCNC INPUT$$$$$$$')"),
    cncs, cnc;
  error();
  statement_7:
  pcnc = 100.f * theta * cnc / thetad;
  statement_8:
  cocomp();
  //C
}

} // namespace BASIC_ENG
