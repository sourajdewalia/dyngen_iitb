#include <fem.hpp> // Fortran EMulation library of fable module
#include <DERIV.cpp>
#include <GUESS.cpp>
namespace BASIC_ENG {

using namespace fem::major_types;

void
afquir(...)
{
  throw std::runtime_error(
    "Missing function implementation: afquir");
}

void
cointc(...)
{
  throw std::runtime_error(
    "Missing function implementation: cointc");
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
guess(...)
{
  throw std::runtime_error(
    "Missing function implementation: guess");
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
  float hooe;
  int init;
  int idump;
  int iantp;
  int igashx;
  int idburn;
  int iaftbn;
  int idcd;
  int imcd;
  int ioshoc;
  int imshoc;
  int nozflt;
  int itrys;
  int looper;
  int nomap;
  int nunmap;
  int mapedg;
  float tolall;
  arr<float> err;

  common_design() :
    ides(fem::int0),
    jdes(fem::int0),
    kdes(fem::int0),
    hooe(fem::float0),
    init(fem::int0),
    idump(fem::int0),
    iantp(fem::int0),
    igashx(fem::int0),
    idburn(fem::int0),
    iaftbn(fem::int0),
    idcd(fem::int0),
    imcd(fem::int0),
    ioshoc(fem::int0),
    imshoc(fem::int0),
    nozflt(fem::int0),
    itrys(fem::int0),
    looper(fem::int0),
    nomap(fem::int0),
    nunmap(fem::int0),
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
  float dump2;
  float delfg;
  float delfn;
  float delsfc;
  float zfos;
  float pcmfds;
  float prfds;
  float etafds;
  float wafds;
  float prfcf;
  float etafcf;
  float wafcf;
  float zcds;
  float pcncds;
  float prcos;
  float etacds;
  float cds;
  float prccf;
  float etaccf;
  float haccf;
  float t60s;
  float wfbds;
  float dtcoos;
  float etabds;
  float wa3cds;
  float dpcdds;
  float dtcocf;
  float etabcf;
  float tfhpds;
  float cnhpds;
  float ethpos;
  float tfhpcf;
  float cnhpcf;
  float ethpcf;
  float dhhpcf;
  float tzos;
  float tflpds;
  float cnlpos;
  float etlpos;
  float tflpcf;
  float cnlpcf;
  float etlpcf;
  float dhlpcf;
  float t21ds;
  float t26ds;
  float hfdos;
  float dtduos;
  float etaods;
  float az3ds;
  float dpouos;
  float dtducf;
  float etadcf;
  float ttds;
  float wfaosdtafds;
  float etaads;
  float g6cds;
  float dpafos;
  float otafcf;
  float etaacf;
  float a55;
  float a25;
  float a6;
  float a7;
  float a8;
  float a9;
  float a28;
  float a29;
  float spsss;
  float amss;
  float cvdnoz;
  float cvmnoz;
  float absav;
  float sav;
  float a2bsav;
  float a29sav;

  common_all1() :
    pcnfgu(fem::float0),
    pcncgu(fem::float0),
    t4gu(fem::float0),
    dumd1(fem::float0),
    dump2(fem::float0),
    delfg(fem::float0),
    delfn(fem::float0),
    delsfc(fem::float0),
    zfos(fem::float0),
    pcmfds(fem::float0),
    prfds(fem::float0),
    etafds(fem::float0),
    wafds(fem::float0),
    prfcf(fem::float0),
    etafcf(fem::float0),
    wafcf(fem::float0),
    zcds(fem::float0),
    pcncds(fem::float0),
    prcos(fem::float0),
    etacds(fem::float0),
    cds(fem::float0),
    prccf(fem::float0),
    etaccf(fem::float0),
    haccf(fem::float0),
    t60s(fem::float0),
    wfbds(fem::float0),
    dtcoos(fem::float0),
    etabds(fem::float0),
    wa3cds(fem::float0),
    dpcdds(fem::float0),
    dtcocf(fem::float0),
    etabcf(fem::float0),
    tfhpds(fem::float0),
    cnhpds(fem::float0),
    ethpos(fem::float0),
    tfhpcf(fem::float0),
    cnhpcf(fem::float0),
    ethpcf(fem::float0),
    dhhpcf(fem::float0),
    tzos(fem::float0),
    tflpds(fem::float0),
    cnlpos(fem::float0),
    etlpos(fem::float0),
    tflpcf(fem::float0),
    cnlpcf(fem::float0),
    etlpcf(fem::float0),
    dhlpcf(fem::float0),
    t21ds(fem::float0),
    t26ds(fem::float0),
    hfdos(fem::float0),
    dtduos(fem::float0),
    etaods(fem::float0),
    az3ds(fem::float0),
    dpouos(fem::float0),
    dtducf(fem::float0),
    etadcf(fem::float0),
    ttds(fem::float0),
    wfaosdtafds(fem::float0),
    etaads(fem::float0),
    g6cds(fem::float0),
    dpafos(fem::float0),
    otafcf(fem::float0),
    etaacf(fem::float0),
    a55(fem::float0),
    a25(fem::float0),
    a6(fem::float0),
    a7(fem::float0),
    a8(fem::float0),
    a9(fem::float0),
    a28(fem::float0),
    a29(fem::float0),
    spsss(fem::float0),
    amss(fem::float0),
    cvdnoz(fem::float0),
    cvmnoz(fem::float0),
    absav(fem::float0),
    sav(fem::float0),
    a2bsav(fem::float0),
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
  float a3;
  float g6;
  float far6;
  float cnc;
  float prc;
  float etac;
  float acc;
  float wac;
  float etab;
  float dpcoh;
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
  float pchc;
  float fb;
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
    blou(fem::float0),
    blob(fem::float0),
    cnf(fem::float0),
    prf(fem::float0),
    etaf(fem::float0),
    wafc(fem::float0),
    waf(fem::float0),
    a3(fem::float0),
    g6(fem::float0),
    far6(fem::float0),
    cnc(fem::float0),
    prc(fem::float0),
    etac(fem::float0),
    acc(fem::float0),
    wac(fem::float0),
    etab(fem::float0),
    dpcoh(fem::float0),
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
    pchc(fem::float0),
    fb(fem::float0),
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
  float p26;
  float h26;
  float s26;
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
  float swad;
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
  float an28;
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
  float xmfb;
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
    p26(fem::float0),
    h26(fem::float0),
    s26(fem::float0),
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
    swad(fem::float0),
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
    an28(fem::float0),
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
    xmfb(fem::float0),
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
  float v25;
  float ps6;
  float v6;
  float am6;
  float ts7;
  float ps7;
  float vt;
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
  float opwgds;
  float dpwing;
  float wa32os;
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
  float cvdmng;
  float fgnwng;
  float fgpwng;
  float fnming;
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
  float t5o;
  float pso;
  float hso;

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
    vt(fem::float0),
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
    opwgds(fem::float0),
    dpwing(fem::float0),
    wa32os(fem::float0),
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
    cvdmng(fem::float0),
    fgnwng(fem::float0),
    fgpwng(fem::float0),
    fnming(fem::float0),
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
    t5o(fem::float0),
    pso(fem::float0),
    hso(fem::float0)
  {}
};

struct common_all5
{
  float s5o;
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
  float oht;
  float blip;
  float pcblip;
  float pcnigu;
  float zids;
  float pcnids;
  float prids;
  float etaids;
  int maids;
  float pricf;
  float etaicf;
  int maicf;
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
  float wgso;
  float farso;
  float a26;
  float am23;
  float dumspl;
  float fxfn2m;
  bool fxm2cp;
  float aftfan;
  float punt;
  float pcblio;
  float p6osav;
  float am6osv;
  float etaasv;
  float far75v;
  float t4pbl;
  float t41;
  float fan;
  int ispool;

  common_all5() :
    s5o(fem::float0),
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
    oht(fem::float0),
    blip(fem::float0),
    pcblip(fem::float0),
    pcnigu(fem::float0),
    zids(fem::float0),
    pcnids(fem::float0),
    prids(fem::float0),
    etaids(fem::float0),
    maids(fem::int0),
    pricf(fem::float0),
    etaicf(fem::float0),
    maicf(fem::int0),
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
    wgso(fem::float0),
    farso(fem::float0),
    a26(fem::float0),
    am23(fem::float0),
    dumspl(fem::float0),
    fxfn2m(fem::float0),
    fxm2cp(fem::bool0),
    aftfan(fem::float0),
    punt(fem::float0),
    pcblio(fem::float0),
    p6osav(fem::float0),
    am6osv(fem::float0),
    etaasv(fem::float0),
    far75v(fem::float0),
    t4pbl(fem::float0),
    t41(fem::float0),
    fan(fem::float0),
    ispool(fem::int0)
  {}
};

//struct common_dyn
//{
//  float tran;
//  float time;
//  float dt;
//  float tf;
//  int jtran;
//  int nstep;
//  float tprint;
//  float dtprnt;
//
//  common_dyn() :
//    tran(fem::float0),
//    time(fem::float0),
//    dt(fem::float0),
//    tf(fem::float0),
//    jtran(fem::int0),
//    nstep(fem::int0),
//    tprint(fem::float0),
//    dtprnt(fem::float0)
//  {}
//};

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
  float vmduct;

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
    vmduct(fem::float0)
  {}
};

struct common_flows
{
  float wafp;
  float waip;
  int macp;

  common_flows() :
    wafp(fem::float0),
    waip(fem::float0),
    macp(fem::int0)
  {}
};

struct common_units
{
  bool si;

  common_units() :
    si(fem::bool0)
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

struct common :
  fem::common,
  common_words,
  common_design,
  common_all1,
  common_all2,
  common_all3,
  common_all4,
  common_all5,
  common_dyn,
  common_vols,
  common_flows,
  common_units,
  common_fan
{
  fem::cmn_sve cofan_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct cofan_save
{
  char* aword;
  arr<float> wlh;

  cofan_save() :
    aword(NULL),
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
  int& init = cmn.init;
  float& wafds = cmn.wafds;
  float& prfcf = cmn.prfcf;
  float& etafcf = cmn.etafcf;
  float& wafcf = cmn.wafcf;
  float& pcncds = cmn.pcncds;
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
  float& pcblf = cmn.pcblf;
  float& t22 = cmn.t22;
  float& p22 = cmn.p22;
  float& h22 = cmn.h22;
  float& s22 = cmn.s22;
  float& pcni = cmn.pcni;
  float& pcnids = cmn.pcnids;
  float& t22ds = cmn.t22ds;
  float& vfan = cmn.vfan;
  float& wafp = cmn.wafp;
  arr_cref<float> cnx(cmn.cnx, dimension(15));
  arr_cref<float, 2> prx(cmn.prx, dimension(15, 15));
  arr_cref<float, 2> wacx(cmn.wacx, dimension(15, 15));
  arr_cref<float, 2> etax(cmn.etax, dimension(15, 15));
  arr_cref<int> npt(cmn.npt, dimension(15));
  //
  char* aword = sve.aword;
  arr_ref<float> wlh(sve.wlh, dimension(2));
  if (is_called_first_time) {
    static const char* values[] = {
      " COFAN", " (LO) ", " (HI) "
    };
    fem::data_of_type_str(FEM_VALUES_AND_SIZE),
      aword, wlh;
  }
  float tsto = fem::float0;
  float pstd = fem::float0;
  float ra = fem::float0;
  float aj = fem::float0;
  float tstd = fem::float0;
  float theta = fem::float0;
  float delta = fem::float0;
  float thetad = fem::float0;
  float afc = fem::float0;
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
  int mooe = fem::int0;
  float y1 = fem::float0;
  float y2 = fem::float0;
  float pcnfds = fem::float0;
  int nfb = fem::int0;
  float y7 = fem::float0;
  float yb = fem::float0;
  float t4ds = fem::float0;
  float y3 = fem::float0;
  float y4 = fem::float0;
  float ys = fem::float0;
  float y6 = fem::float0;
  float wfb = fem::float0;
  float y8 = fem::float0;
  float pcnc = fem::float0;
  float y5 = fem::float0;
  float t2ds = fem::float0;
  float pcncg1 = fem::float0;
  float pcncg2 = fem::float0;
  float yi = fem::float0;
  float t4os = fem::float0;
  int mode = fem::int0;
  //C
  //C        COFAN uses Block data to perform fan calculations
  //C
  cmn.word = aword;
  //C
  if (cmn.si) {
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
  wafds = afc * delta / theta;
  statement_1:
  cnf = pcnf * thetad / (fem::pow(100, theta));
  if (zf < 0.1f) {
    zf = 0.f;
  }
  if (zf > 1.f) {
    zf = 1.f;
  }
  cnfs = cnf;
  search(zf, cnf, prf, nafc, etaf, cnx(1), cmn.ncn, prx(1, 1), wacx(1,
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
  thcomp(prf, etaf, t2, cmn.h2, cmn.s2, p2, t22, h22, s22, p22);
  if (vfan == 0.0f) {
    goto statement_21;
  }
  q(2) = 0.0f;
  q(3) = 0;
  h22p = h22;
  p22dot = deriv(cmndrv, 4, p22);
  statement_18:
  thermo(p222, h22, t22, s22, xx22, 0.0f, 0, 0.0f);
  waf = wafp - p22dot * vfan / t22 / 1.4f / ra;
  u22 = h22 - aj * ra * t22;
  u22dot = deriv(cmndrv, 5, 22);
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
  error();
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
  if (cmn.jtran == 1) {
    goto statement_8;
  }
  if (mooe != 2) {
    goto statement_3;
  }
  t4 = guess(3, y1, y2, pcnf, pcnfds, nfb, wfbds, y7, yb, t4ds);
  pcni = guess(8, t4, t4ds, y3, y4, ys, y6, t22, t22ds, pcncds);
  pcnc = guess(4, y1, y2, pcni, pcnids, wfb, wfbds, y7, y8, pcncds);
  goto statement_7;
  statement_3:
  if (mooe == 1) {
    goto statement_5;
  }
  if (mooe == 0) {
    goto statement_4;
  }
  t4 = guess(7, y1, y2, pcnf, pcnfds, y5, y6, t2, t2ds, t4ds);
  statement_4:
  //C
  pcnc = guess(5, t4, t4ds, y3, y4, y5, y6, t22, t22ds, pcnids);
  if (cmn.fxm2cp) {
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
  cmn.zi = cmn.zids;
  cmn.pcnigu = pcni;
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
  error();
  statement_10:
  pcnf = 100.f * theta * cnf / thetad;
  cointc();
  //C
}

} // namespace BASIC_ENG
