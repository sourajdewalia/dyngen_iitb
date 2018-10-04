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
indumy(...)
{
  throw std::runtime_error(
    "Missing function implementation: indumy");
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

struct common_words
{
  float word;

  common_words() :
    word(fem::float0)
  {}
};

struct common_idesign
{
  int ides;
  int jdes;
  int kdes;
  int mdde;
  int init;
  int idump;
  int iamtp;
  int igasmx;
  int idburn;
  float aftbn;
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

  common_idesign() :
    ides(fem::int0),
    jdes(fem::int0),
    kdes(fem::int0),
    mdde(fem::int0),
    init(fem::int0),
    idump(fem::int0),
    iamtp(fem::int0),
    igasmx(fem::int0),
    idburn(fem::int0),
    aftbn(fem::float0),
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
  float etaccfwaccf;
  float t4ds;
  float wfbds;
  float dtcods;
  float etabds;
  float wa3cds;
  float dpcods;
  float dtcocf;
  float etabcf;
  float tfhpds;
  float cnhpdsethpds;
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
  float etaccf;
  float t7ds;
  float wfads;
  float dtafds;
  float tadads;
  float wgocds;
  float pdafds;
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
    etaccfwaccf(fem::float0),
    t4ds(fem::float0),
    wfbds(fem::float0),
    dtcods(fem::float0),
    etabds(fem::float0),
    wa3cds(fem::float0),
    dpcods(fem::float0),
    dtcocf(fem::float0),
    etabcf(fem::float0),
    tfhpds(fem::float0),
    cnhpdsethpds(fem::float0),
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
    etaccf(fem::float0),
    t7ds(fem::float0),
    wfads(fem::float0),
    dtafds(fem::float0),
    tadads(fem::float0),
    wgocds(fem::float0),
    pdafds(fem::float0),
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
  float t55p55;
  float h55;
  float s55;
  float blf;
  float blc;
  float bldu;
  float blob;
  float cnf;
  float prf;
  float eta;
  float wafc;
  float waf;
  float wa3;
  float wg4;
  float far;
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
  float pcbldb;
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
    t55p55(fem::float0),
    h55(fem::float0),
    s55(fem::float0),
    blf(fem::float0),
    blc(fem::float0),
    bldu(fem::float0),
    blob(fem::float0),
    cnf(fem::float0),
    prf(fem::float0),
    eta(fem::float0),
    wafc(fem::float0),
    waf(fem::float0),
    wa3(fem::float0),
    wg4(fem::float0),
    far(fem::float0),
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
    pcbldb(fem::float0),
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
  float p529;
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
    p529(fem::float0),
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
  float wa3zds;
  float a38;
  float am38;
  float v38;
  float t38;
  float h38;
  float p38;
  float ts38;
  float ps38;
  float t39;
  float cvdwng;
  float fgmwng;
  float fgpwng;
  float v39;
  float am39;
  float a39;
  float bprint;
  float wg37;
  float h39;
  float p39;
  float ts39;
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
    wa3zds(fem::float0),
    a38(fem::float0),
    am38(fem::float0),
    v38(fem::float0),
    t38(fem::float0),
    h38(fem::float0),
    p38(fem::float0),
    ts38(fem::float0),
    ps38(fem::float0),
    t39(fem::float0),
    cvdwng(fem::float0),
    fgmwng(fem::float0),
    fgpwng(fem::float0),
    v39(fem::float0),
    am39(fem::float0),
    a39(fem::float0),
    bprint(fem::float0),
    wg37(fem::float0),
    h39(fem::float0),
    p39(fem::float0),
    ts39(fem::float0),
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
  bool dumspl;
  bool fxfn2m;
  float fxm2cp;
  bool aftfan;
  float punt;
  float pcblid;
  float p6dsav;
  float am6dsv;
  float etaasv;
  float far7sv;
  float t4pbl;
  float t41;
  bool fan;
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
    dumspl(fem::bool0),
    fxfn2m(fem::bool0),
    fxm2cp(fem::float0),
    aftfan(fem::bool0),
    punt(fem::float0),
    pcblid(fem::float0),
    p6dsav(fem::float0),
    am6dsv(fem::float0),
    etaasv(fem::float0),
    far7sv(fem::float0),
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
  float vcomb;
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
    vcomb(fem::float0),
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

struct common :
  fem::common,
  common_words,
  common_idesign,
  common_all1,
  common_all2,
  common_all3,
  common_all4,
  common_all5,
  common_vols,
  common_flows,
  common_units,
  common_int,
  common_dumint
{
  fem::cmn_sve cointc_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct cointc_save
{
  float awdrd;
  arr<float> wlh;

  cointc_save() :
    awdrd(fem::float0),
    wlh(dimension(2), fem::fill0)
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
  float& wa22 = cmn.wa22;
  float& zi = cmn.zi;
  float& pcni = cmn.pcni;
  float& cni = cmn.cni;
  float& pri = cmn.pri;
  float& etai = cmn.etai;
  float& waci = cmn.waci;
  float& prids = cmn.prids;
  float& etaids = cmn.etaids;
  float& waids = cmn.waids;
  float& pricf = cmn.pricf;
  float& etaicf = cmn.etaicf;
  float& waicf = cmn.waicf;
  float& waicds = cmn.waicds;
  float& wai = cmn.wai;
  float& pcbli = cmn.pcbli;
  float& bli = cmn.bli;
  float& t22ds = cmn.t22ds;
  float& wa21 = cmn.wa21;
  bool& dumspl = cmn.dumspl;
  bool& aftfan = cmn.aftfan;
  bool& fan = cmn.fan;
  float& vintc = cmn.vintc;
  float& waip = cmn.waip;
  arr_cref<float> cnx(cmn.cnx, dimension(15));
  arr_cref<float, 2> prx(cmn.prx, dimension(15, 15));
  arr_cref<float, 2> wacx(cmn.wacx, dimension(15, 15));
  arr_cref<float, 2> etax(cmn.etax, dimension(15, 15));
  arr_cref<int> npt(cmn.npt, dimension(15));
  arr_cref<float> cnxx(cmn.cnxx, dimension(15));
  arr_cref<float, 2> prxx(cmn.prxx, dimension(15, 15));
  arr_cref<float, 2> wacxx(cmn.wacxx, dimension(15, 15));
  arr_cref<float, 2> etaxx(cmn.etaxx, dimension(15, 15));
  arr_cref<int> nptx(cmn.nptx, dimension(15));
  //
  arr_ref<float> wlh(sve.wlh, dimension(2));
  if (is_called_first_time) {
    static const char* values[] = {
      "COINTC", "  (LO)", "  (HI)"
    };
    fem::data_of_type_str(FEM_VALUES_AND_SIZE),
      sve.awdrd, wlh;
  }
  float aword = fem::float0;
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
  cmn.word = aword;
  if (cmn.si) {
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
  if (!cmn.fxfn2m) {
    goto statement_3;
  }
  //C
  //C        FAN AND MIDDLE SPOOL ROTATE AT SAME SPEED
  //C
  spdfan = cmn.cnf * fem::sqrt(t2 / tstd);
  cni = spdfan / theta;
  pcni = 100 * cni * theta / thetad;
  if (ides == 1) {
    cmn.pcnids = pcni;
  }
  statement_3:
  cni = pcni * thetad / (100.0f * theta);
  zi = fem::amax1(zi, 0.f);
  zi = fem::amin1(zi, 1.f);
  cnis = cni;
  if (!dumspl) {
    goto statement_4;
  }
  indumy(cni, zi, waicds, ides);
  search(zi, cni, pri, waci, etai, cnxx, cmn.ncnx, prxx, wacxx,
    etaxx, nptx, 15, 15, igo);
  goto statement_5;
  statement_4:
  search(zi, cni, pri, wace, etai, cnx(1), cmn.ncn, prx(1, 1), wacx(1,
    1), etax(1, 1), npt(1), 15, 15, igo);
  statement_5:
  if ((cni - cnis) > 0.0005f * cni) {
    cmn.mapedg = 1;
  }
  if (igo == 1 || igo == 2) {
    write(8, "('0* * * CNI OFF  MAP',f10.4,2x,a6,'$$$$$$$$$')"), cnis, wlh(igo);
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
  thcomp(pri, etai, t22, h22, s22, p22, t21, h21, s21, p21);
  if (vintc == 0.0f) {
    goto statement_21;
  }
  q(2) = 0.0f;
  q(3) = 0.0f;
  h21p = h21;
  p21dot = deriv(6, p21);
  statement_18:
  thermo(p21, h21, t21, s21, xx2, 0, 0.0f, 0);
  wai = waip - p21dot * vintc / t21 / 1.4f / ra;
  u21 = h21 - aj * ra * t21;
  u21dot = deriv(7, u21);
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
  error();
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
  if (cmn.ispool == 1) {
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
    "('OHOCNI WAS=',e18.8,'   AND NOW=',e15.8,'    CHECK PCNI INPUTSS$$$$')"),
    cnis, cni;
  error();
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
  cocomp();
  //C
}

} // namespace BASIC_ENG
