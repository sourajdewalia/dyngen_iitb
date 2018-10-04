#include <fem.hpp> // Fortran EMulation library of fable module

namespace BASIC_ENG {

using namespace fem::major_types;

void
cofan(...)
{
  throw std::runtime_error(
    "Missing function implementation: cofan");
}

void
coinlt(...)
{
  throw std::runtime_error(
    "Missing function implementation: coinlt");
}

void
distrb(...)
{
  throw std::runtime_error(
    "Missing function implementation: distrb");
}

void
error(...)
{
  throw std::runtime_error(
    "Missing function implementation: error");
}

void
matrix(...)
{
  throw std::runtime_error(
    "Missing function implementation: matrix");
}

void
perf(...)
{
  throw std::runtime_error(
    "Missing function implementation: perf");
}

void
putin(...)
{
  throw std::runtime_error(
    "Missing function implementation: putin");
}

void
roll(...)
{
  throw std::runtime_error(
    "Missing function implementation: roll");
}

void
syg(...)
{
  throw std::runtime_error(
    "Missing function implementation: syg");
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
  int nozflt;
  int itrys;
  int lodper;
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
    lodper(fem::int0),
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
  float delsfcf;
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
  float tbds;
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
  float etaods;
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
    delsfcf(fem::float0),
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
    tbds(fem::float0),
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
    etaods(fem::float0),
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
  float h4s4;
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
    h4s4(fem::float0),
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
  float duvs1;
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
  float h25s25;
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
  float wg2;
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
    duvs1(fem::float0),
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
    h25s25(fem::float0),
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
    wg2(fem::float0),
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
  float cvowng;
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
    bprint(fem::float0),
    wg37(fem::float0),
    cvowng(fem::float0),
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
  float dhti;
  float blip;
  float pcblip;
  float pcnigu;
  float zids;
  float cnids;
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
  float wgs0;
  float far50;
  float a24;
  float am23;
  bool dumspl;
  bool fxfn2m;
  bool fxm2cp;
  float aftfan;
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
    dhti(fem::float0),
    blip(fem::float0),
    pcblip(fem::float0),
    pcnigu(fem::float0),
    zids(fem::float0),
    cnids(fem::float0),
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
    wgs0(fem::float0),
    far50(fem::float0),
    a24(fem::float0),
    am23(fem::float0),
    dumspl(fem::bool0),
    fxfn2m(fem::bool0),
    fxm2cp(fem::bool0),
    aftfan(fem::float0),
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

struct common_dyn
{
  int itran;
  float time;
  float dt;
  float tf;
  int jtran;
  int nstep;
  int iprint;
  float dtprnt;

  common_dyn() :
    itran(fem::int0),
    time(fem::float0),
    dt(fem::float0),
    tf(fem::float0),
    jtran(fem::int0),
    nstep(fem::int0),
    iprint(fem::int0),
    dtprnt(fem::float0)
  {}
};

struct common_erer
{
  bool errer;

  common_erer() :
    errer(fem::bool0)
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
  common_erer
{
  fem::cmn_sve engbal_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct engbal_save
{
  float aword;
  arr<float> del;
  arr<float> delsav;
  int nomisx;
  float vchnge;
  float vdelta;
  float vlim;

  engbal_save() :
    aword(fem::float0),
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
  float& zi = cmn.zi;
  float& pcni = cmn.pcni;
  float& tffip = cmn.tffip;
  bool& dumspl = cmn.dumspl;
  bool& fxm2cp = cmn.fxm2cp;
  bool& fan = cmn.fan;
  int& ispool = cmn.ispool;
  int& itran = cmn.itran;
  float& time = cmn.time;
  int& nstep = cmn.nstep;
  //
  float& aword = sve.aword;
  arr_ref<float> del(sve.del, dimension(9));
  arr_ref<float> delsav(sve.delsav, dimension(9));
  int& nomisx = sve.nomisx;
  float& vchnge = sve.vchnge;
  float& vdelta = sve.vdelta;
  float& vlim = sve.vlim;
  if (is_called_first_time) {
    aword = "ENGBAL";
    vdelta = 1.e-4f;
    vlim = 0.100f;
    vchnge = 0.850f;
    nomisx = 6;
    fem::data((values, 9*datum(0.0f))), del;
    fem::data((values, 9*datum(1.e-6f))), delsav;
  }
  int looper = fem::int0;
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
  int node = fem::int0;
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
  int noniss = fem::int0;
  float vmtavx = fem::float0;
  //C
  if (itran != 1) {
    goto statement_100;
  }
  syg(1);
  cmn.jtran = 1;
  init = 1;
  nstep++;
  time = cmn.dt * fem::ffloat(nstep);
  if (time > cmn.tf) {
    goto statement_100;
  }
  distrb();
  coinlt();
  goto statement_101;
  statement_100:
  putin();
  statement_101:
  //C
  if (init == 1) {
    goto statement_1;
  }
  tffhp = tfhpds;
  tffip = cmn.tfipds;
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
  cofan();
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
  if (!cmn.fxfn2m && (!dumspl)) {
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
    roll();
  }
  perf();
  error();
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
  if (node == 1) {
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
    write(6, "('OROM',i2,' IS ZERO IN EMAT')"), i;
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
  if (noniss == 0) {
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
  error();
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

} // namespace BASIC_ENG
