#include <fem.hpp> // Fortran EMulation library of fable module

namespace BASIC_ENG {

using namespace fem::major_types;

void
atmos(...)
{
  throw std::runtime_error(
    "Missing function implementation: atmos");
}

void
error(...)
{
  throw std::runtime_error(
    "Missing function implementation: error");
}

void
guess(...)
{
  throw std::runtime_error(
    "Missing function implementation: guess");
}

void
procom(...)
{
  throw std::runtime_error(
    "Missing function implementation: procom");
}

void
ram(...)
{
  throw std::runtime_error(
    "Missing function implementation: ram");
}

void
ram2(...)
{
  throw std::runtime_error(
    "Missing function implementation: ram2");
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
  int ndzfl;
  int itrys;
  int looper;
  int nomap;
  int nummap;
  int mapedg;
  float tolall;
  arr<float> erri;

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
    ndzfl(fem::int0),
    itrys(fem::int0),
    looper(fem::int0),
    nomap(fem::int0),
    nummap(fem::int0),
    mapedg(fem::int0),
    tolall(fem::float0),
    erri(dimension(9), fem::fill0)
  {}
};

struct common_all1
{
  float pcnfgu;
  float pcncgu;
  float t4gu;
  float dumd1dumd2;
  float delfg;
  float delfn;
  float delsfc;
  float zfds;
  float pcnfds;
  float prfds;
  float etafds;
  float hafds;
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
  float tbds;
  float wfbds;
  float dtcoos;
  float etabds;
  float wa3cos;
  float dpcoos;
  float dtcocf;
  float etabcf;
  float tfhpds;
  float cnhpds;
  float ethpos;
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
  float dtduos;
  float etadds;
  float a23ds;
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
  float cvnnoz;
  float bsav;
  float a9sav;
  float a28sav;
  float a29sav;

  common_all1() :
    pcnfgu(fem::float0),
    pcncgu(fem::float0),
    t4gu(fem::float0),
    dumd1dumd2(fem::float0),
    delfg(fem::float0),
    delfn(fem::float0),
    delsfc(fem::float0),
    zfds(fem::float0),
    pcnfds(fem::float0),
    prfds(fem::float0),
    etafds(fem::float0),
    hafds(fem::float0),
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
    tbds(fem::float0),
    wfbds(fem::float0),
    dtcoos(fem::float0),
    etabds(fem::float0),
    wa3cos(fem::float0),
    dpcoos(fem::float0),
    dtcocf(fem::float0),
    etabcf(fem::float0),
    tfhpds(fem::float0),
    cnhpds(fem::float0),
    ethpos(fem::float0),
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
    dtduos(fem::float0),
    etadds(fem::float0),
    a23ds(fem::float0),
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
    cvnnoz(fem::float0),
    bsav(fem::float0),
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
  float blou;
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
  float acc;
  int mac;
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
  float hfbtffhp;
  float tfflp;
  float pcelf;
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
    blou(fem::float0),
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
    acc(fem::float0),
    mac(fem::int0),
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
    hfbtffhp(fem::float0),
    tfflp(fem::float0),
    pcelf(fem::float0),
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
  float dumps2;
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
  float t2b;
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
    dumps2(fem::float0),
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
    t2b(fem::float0),
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
  float far1;
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
  float s39;
  float v39;
  float am39;
  float a39;
  float bprint;
  float wg37;
  float cvdmng;
  float fgmwng;
  float fgpwng;
  float fnhng;
  float fnmain;
  float fmovfn;
  float ps39;
  float ffdvfn;
  float fcovfn;
  float fnnofn;
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
    far1(fem::float0),
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
    s39(fem::float0),
    v39(fem::float0),
    am39(fem::float0),
    a39(fem::float0),
    bprint(fem::float0),
    wg37(fem::float0),
    cvdmng(fem::float0),
    fgmwng(fem::float0),
    fgpwng(fem::float0),
    fnhng(fem::float0),
    fnmain(fem::float0),
    fmovfn(fem::float0),
    ps39(fem::float0),
    ffdvfn(fem::float0),
    fcovfn(fem::float0),
    fnnofn(fem::float0),
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
  float pr;
  float etai;
  float waci;
  float tffip;
  float cnip;
  float tatid;
  float dhtcip;
  float dht;
  float blip;
  float pcblip;
  float pcnigu;
  float zids;
  float pcnids;
  float prds;
  float etaids;
  float waids;
  float pricf;
  float etaicf;
  float waicf;
  float tfipds;
  float cnpds;
  float etipds;
  float tfipcf;
  float cnipcf;
  float etipcf;
  float dhipcf;
  int maicds;
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
  float fxfnzm;
  float fxmzcp;
  float aftfan;
  float punt;
  float pcblid;
  float p60sav;
  float am6dsv;
  float etaasv;
  float far7sav;
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
    pr(fem::float0),
    etai(fem::float0),
    waci(fem::float0),
    tffip(fem::float0),
    cnip(fem::float0),
    tatid(fem::float0),
    dhtcip(fem::float0),
    dht(fem::float0),
    blip(fem::float0),
    pcblip(fem::float0),
    pcnigu(fem::float0),
    zids(fem::float0),
    pcnids(fem::float0),
    prds(fem::float0),
    etaids(fem::float0),
    waids(fem::float0),
    pricf(fem::float0),
    etaicf(fem::float0),
    waicf(fem::float0),
    tfipds(fem::float0),
    cnpds(fem::float0),
    etipds(fem::float0),
    tfipcf(fem::float0),
    cnipcf(fem::float0),
    etipcf(fem::float0),
    dhipcf(fem::float0),
    maicds(fem::int0),
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
    fxfnzm(fem::float0),
    fxmzcp(fem::float0),
    aftfan(fem::float0),
    punt(fem::float0),
    pcblid(fem::float0),
    p60sav(fem::float0),
    am6dsv(fem::float0),
    etaasv(fem::float0),
    far7sav(fem::float0),
    t4pbl(fem::float0),
    t41(fem::float0),
    fan(fem::float0),
    ispool(fem::int0)
  {}
};

struct common_delch
{
  float delt1;

  common_delch() :
    delt1(fem::float0)
  {}
};

struct common_units
{
  bool si;

  common_units() :
    si(fem::bool0)
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
  common_delch,
  common_units
{
  fem::cmn_sve coinlt_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct coinlt_save
{
  float amoro;

  coinlt_save() :
    amoro(fem::float0)
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
  bool& si = cmn.si;
  //
  if (is_called_first_time) {
    sve.amoro = "COINLT";
  }
  float aword = fem::float0;
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
  float t4ds = fem::float0;
  float wfb = fem::float0;
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
  atmos(alt, t1std, xx1, xx2, xx3, delta, gs, xx4, iter);
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
    ram2(am, etar);
  }
  if (iamtp != 1 && iamtp != 5) {
    ram(am, etar);
  }
  far = 0.0f;
  procom(far, t1, cs, xx2, xx3, r1, ph1, h1);
  s1 = phi1 - r1 * fem::alog(delta);
  h2 = h1 + fem::pow2((am + cs)) / (2.f * aj * g);
  p2t = 1.f;
  if (si) {
    p2t = 101325.0f;
  }
  FEM_DO_SAFE(i, 1, 10) {
    thermo(p2t, h2, t2t, s2t, aw, 0, 0.1f, 1);
    //C
    if (fem::abs(s2t - s1) <= 0.0001f * s1) {
      goto statement_2;
    }
    p2t = p1 * fem::exp((aw / r) * ((s2t - s1) + (r / aw) * fem::alog(
      p2t / p1)));
  }
  error();
  return;
  //C
  statement_2:
  if (iamtp == 3 || iamtp == 4) {
    etar = p2 / p2t;
  }
  p2 = etar * p2t;
  //C
  if (iamtp != 4) {
    thermo(p2, h2, t2, s2, xx5, 0, 0.0f, 1);
  }
  if (iamtp == 4) {
    thermo(p2, h2, t2, s2, xx5, 0, 0.0f, 0);
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
  pcnf = guess(cmn.mode, cmn.t4, t4ds, cmn.pcnc, cmn.pcncds, wfb,
    cmn.wfbds, t2, t2ds, pcnfds);
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

} // namespace BASIC_ENG
