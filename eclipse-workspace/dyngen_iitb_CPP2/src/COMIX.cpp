#include <fem.hpp> // Fortran EMulation library of fable module

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
//coafbn(...)
//{
//  throw std::runtime_error(
//    "Missing function implementation: coafbn");
//}
//
//void
//engbal(...)
//{
//  throw std::runtime_error(
//    "Missing function implementation: engbal");
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
//procom(...)
//{
//  throw std::runtime_error(
//    "Missing function implementation: procom");
//}
//
//void
//thermo(...)
//{
//  throw std::runtime_error(
//    "Missing function implementation: thermo");
//}

struct common_words
{
  char word[8];

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
  float tffnp;
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
    tffnp(fem::float0),
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
  float oums1;
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
  float wg24wfar24;
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
    oums1(fem::float0),
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
    wg24wfar24(fem::float0),
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
  float v5;
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
  float dpmgos;
  float dpwing;
  float wa32ds;
  float a38;
  float am38;
  float v38;
  float t38;
  float h38;
  float p3b;
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
    v5(fem::float0),
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
    dpmgos(fem::float0),
    dpwing(fem::float0),
    wa32ds(fem::float0),
    a38(fem::float0),
    am38(fem::float0),
    v38(fem::float0),
    t38(fem::float0),
    h38(fem::float0),
    p3b(fem::float0),
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

struct common_alls
{
  float s50;
  float wa22;
  float zi;
  float pcni;
  float cni;
  float pri;
  float eti;
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
  float etads;
  float waid;
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
  float fxn2cp;
  float aftfan;
  float punt;
  float dpcblid;
  float p6dsav;
  float am6dsv;
  float etaasv;
  float far7sv;
  float t4pbl;
  float t41;
  float fan;
  int ispool;

  common_alls() :
    s50(fem::float0),
    wa22(fem::float0),
    zi(fem::float0),
    pcni(fem::float0),
    cni(fem::float0),
    pri(fem::float0),
    eti(fem::float0),
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
    etads(fem::float0),
    waid(fem::float0),
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
    fxn2cp(fem::float0),
    aftfan(fem::float0),
    punt(fem::float0),
    dpcblid(fem::float0),
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

struct common_looppr
{
  int kkgo;
  float prfnew;
  float prcnew;

  common_looppr() :
    kkgo(fem::int0),
    prfnew(fem::float0),
    prcnew(fem::float0)
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
  common_alls,
  common_mhrerr,
  common_unts,
  common_looppr
{
  fem::cmn_sve comix_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct comix_save
{
  char aword[8];

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
  float& t6 = cmn.t6;
  float& p6 = cmn.p6;
  float& h6 = cmn.h6;
  float& s6 = cmn.s6;
  float& wg6 = cmn.wg6;
  float& v25 = cmn.v25;
  float& ps6 = cmn.ps6;
  float& v6 = cmn.v6;
  float& am6 = cmn.am6;
  float& am25 = cmn.am25;
  int& icomix = cmn.icomix;
  float& prfnew = cmn.prfnew;
  //
  if (is_called_first_time) {
    strcpy(sve.aword , " COMIX");
  }
  //char* aword = fem::float0;
  //char* word = fem::float0;
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
  float far24 = fem::float0;
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
  int ifar55 = fem::int0;
  float v55 = fem::float0;
  float hscal = fem::float0;
  float delhs = fem::float0;
  float hsss = fem::float0;
  float rho = fem::float0;
  float pss = fem::float0;
  float ps25 = fem::float0;
  float ts25 = fem::float0;
  float cs25 = fem::float0;
  float ak25 = fem::float0;
  float cp25 = fem::float0;
  float rex25 = fem::float0;
  float phis25 = fem::float0;
  float hs25 = fem::float0;
  float wg24 = fem::float0;
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
  int mooe = fem::int0;
  float apx = fem::float0;
  float gogo = fem::float0;
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
  strcpy(cmn.word ,sve.aword);
  //C
  if (cmn.si) {
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
  procom(far55, t55, xx1, xx2, xx3, xx4, phi55, xx5);
  procom(far24, t25, xx1, xx2, xx3, xx4, phi25, xx5);
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
    procom(far55, ts55, cs55, ak55, cp55, rex55, phis55, hs55);
    phis = phi55 - rex55 * fem::alog(p55 / ps55);
    delphi = phis - phis55;
    if (fem::abs(delphi) <= 0.0001f * phis) {
      goto statement_6;
    }
    ts55 = ts55 * fem::exp(4.0f * delphi);
  }
  icomix = 1;
  statement_2:
  error();
  return;
  //C
  statement_3:
  ts55 = 0.875f * t55;
  FEM_DO_SAFE(i, 1, 15) {
    procom(ifar55, ts55, cs55, ak55, cp55, rex55, phis55, hs55);
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
  error();
  statement_7:
  v55 = fem::sqrt(2.f * g * aj * (h55 - hsss));
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
  ps25 = pss;
  ts25 = t25 * fem::pow((ps25 / p25), 0.286f);
  FEM_DO_SAFE(i, 1, 15) {
    procom(far24, ts25, cs25, ak25, cp25, rex25, phis25, hs25);
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
  error();
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
    procom(far55, ts55, cs55, ak55, cp55, rex55, phis55, hs55);
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
  if (mooe == 3) {
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
  if (gogo == 1) {
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
    procom(far26, ts25, cs25, ak25, cp25, rex25, phis25, hs25);
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
  thermo(1.f, h6, t6, phi6, amx, i, far6, 1);
  c1 = ps55 * a55 * (1.f + ak55 * fem::pow2(am55)) + ps25 * a25 * (
    1.f + ak25 * fem::pow2(am25));
  ts6 = 0.833f * t6;
  FEM_DO_SAFE(i, 1, 15) {
    procom(far6, ts6, cs6, ak6, cp6, rex6, phs6, hs6);
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
    error();
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
  error();
  statement_33:
  a6g = a25 + a55;
  c7 = fem::sqrt(1.f + (ak6 - 1.f) * am62g / 2.f);
  ps6 = c2 / (capsf * a6g * am6g * c7);
  p6 = ps6 * fem::exp((phi6 - phis6) / rex6);
  thermo(p6, h6, t6, s6, xx1, 1, far6, 0);
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
    procom(far6, ts6, cs6, ak6, cp6, rex6, phis6, hs6);
    v6 = am6 * cs6;
    delak6 = ak6p - ak6;
    if (fem::abs(delak6) <= 0.0005f * ak6) {
      goto statement_54;
    }
    ts6 = t6 / (1.0f + (((ak6 - 1.0f) / 2.0f) * fem::pow2(am6)));
  }
  icomix = 11;
  error();
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
    procom(far6, ts6p, cs6, ak6, cp6, rex6, phis6, hs6);
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
  error();
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
  error();
  statement_43:
  am6z = am62g;
  am6 = am6g;
  a6 = a25 + a55;
  icomix = 0;
  statement_44:
  coafbn();
  return;
  statement_45:
  cmn.kkgo = 1;
  dprds = prfds * cmn.prcds;
  prfnew = prfds * ps55 / p25 * 1.02f;
  prcnen = dprds / prfnew;
  icomix = 0;
  engbal();
  //C
}

} // namespace BASIC_ENG
