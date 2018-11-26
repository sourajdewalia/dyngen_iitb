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
//condiv(...)
//{
//  throw std::runtime_error(
//    "Missing function implementation: condiv");
//}
//
//void
//convrg(...)
//{
//  throw std::runtime_error(
//    "Missing function implementation: convrg");
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
//fastbk(...)
//{
//  throw std::runtime_error(
//    "Missing function implementation: fastbk");
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
//procon(...)
//{
//  throw std::runtime_error(
//    "Missing function implementation: procon");
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
  float etaccf;
  float waccf;
  float t4ds;
  float wfbds;
  float dtcods;
  float etabds;
  float wa3cds;
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
  float dtduds;
  float etadds;
  float wa23ds;
  float dpduds;
  float dtoucf;
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
    dtduds(fem::float0),
    etadds(fem::float0),
    wa23ds(fem::float0),
    dpduds(fem::float0),
    dtoucf(fem::float0),
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
  float prics;
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
  float pcbl;
  float bli;
  float t22ds;
  float wa21;
  float wg50;
  float far50;
  float a24;
  float am23;
  float dumspl;
  float fxfn2h;
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
    prics(fem::float0),
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
    pcbl(fem::float0),
    bli(fem::float0),
    t22ds(fem::float0),
    wa21(fem::float0),
    wg50(fem::float0),
    far50(fem::float0),
    a24(fem::float0),
    am23(fem::float0),
    dumspl(fem::float0),
    fxfn2h(fem::float0),
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
    fan(fem::float0),
    ispool(fem::int0)
  {}
};

//struct common_dyn
//{
//  int itran;
//  int iime;
//  float dt;
//  float tf;
//  int jtran;
//  int nstep;
//  float tprint;
//  float dtprnt;
//
//  common_dyn() :
//    itran(fem::int0),
//    iime(fem::int0),
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

struct common_whrerr
{
  int icoafb;
  int icoduc;
  int iccmix;

  common_whrerr() :
    icoafb(fem::int0),
    icoduc(fem::int0),
    iccmix(fem::int0)
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
  common_dyn,
  common_vols,
  common_whrerr,
  common_units
{
  fem::cmn_sve coduct_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct coduct_save
{
  char ahord2[8];
  char amord1[8];

  coduct_save() :
    ahord2(""),
    amord1("")
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
  float& wai = cmn.wai;
  float& a24 = cmn.a24;
  bool& aftfan = cmn.aftfan;
  float& vfduct = cmn.vfduct;
  int& icoduc = cmn.icoduc;
  bool& si = cmn.si;
  //
  if (is_called_first_time) {
    strcpy(sve.amord1 , "COOUCT");
    strcpy(sve.ahord2 , "ONOZZL");
  }
  char* aword1 = NULL;
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
  float pcblio = fem::float0;
  float xx2 = fem::float0;
  float wa23c = fem::float0;
  float wa23d = fem::float0;
  float xx1 = fem::float0;
  float xx3 = fem::float0;
  float xx4 = fem::float0;
  float phi23 = fem::float0;
  float xx6 = fem::float0;
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
  int icoouc = fem::int0;
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
  char* aword2 = NULL;
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
  if (pcblio == 0.f) {
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
  thermo(p23, h23, t23, cmn.s23, xx2, 1, 0.0f, 1);
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
  procon(0.f, t23, xx1, xx2, xx3, xx4, phi23, xx6);
  if (igasmx > 0) {
    idburn = 0.f;
  }
  am24 = cmn.am23;
  ts24 = t23 * 0.875f;
  statement_1:
  FEM_DO_SAFE(i, 1, 15) {
    procon(0.f, ts24, cs24, ak24, cp24, rex24, phi23, xx6);
    v22 = am24 * cs24;
    hscal = h23 - fem::pow2(v24) / (2.f * g * aj);
    delhs = hscal - hs24;
    if (fem::abs(delhs) <= 0.0001f * hscal) {
      goto statement_3;
    }
    ts24 += delhs / cp24;
  }
  icoouc = 1;
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
  //C        IF DESIRED, ENTER CALCULATIONS FOR ETAO HERE
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
  thermo(p24, ha, t24, xx1, xx2, 0, 0.0f, 0);
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
  error();
  statement_12:
  wfd = wfdx;
  statement_13:
  //C
  //C ***    MOMENTUM LOSS
  //C
  wg24 = wfd + wad;
  procom(far24, t24, xx1, xx2, xx3, rex24, phi24, h24);
  rho24 = capsf * p24 / (aj * rex24 * t24);
  v24 = wg24 / (rho24 * a24);
  q(2) = 0.f;
  q(3) = 0.f;
  ps24 = ps42 - 0.01f;
  statement_14:
  rho24 = wg24 / (v24 * a24);
  hs24 = h24 - fem::pow2(v24) / (2.f * g * aj);
  thermo(1.0f, hs24, ts24, phis24, xx2, 1, far24, 1);
  if (ts24 >= 301.f) {
    goto statement_15;
  }
  thermo(1.0f, hs24, 400.f, phis24, xx2, 1, far24, 1);
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
  procom(far24, ts24, cs24, xx2, xx3, xx4, xxs, xx6);
  am24 = v24 / cs24;
  statement_17:
  thermo(p24, h24, t24, s24, xxi, 1, far24, 0);
  wg24 = wfd + wad;
  if (vfduct == 0.0f) {
    goto statement_31;
  }
  q(2) = 0.0f;
  q(3) = 0.0f;
  wg24p = wg24;
  h24p = h24;
  p24dot = deriv(cmndrv, 21, p24);
  statement_28:
  thermo(p24, h24, t24, s24, xx2, 1, far24, 0);
  wg24 = wg24p - p24dot * vfduct / t24 / (1.4f * ra);
  u24 = h24 - ajx * ra * ra * t24;
  u24dot = deriv(cmndrv, 21, u24);
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
  error();
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
  if (cmn.itran == 1) {
    idnoz = 0;
  }
  if (idco == 1) {
    goto statement_18;
  }
  convrg(t25, h25, p25, far24, wg24, p1, idnoz, a28, p25r, t28, h28,
    p28, sz28, ts28, ps28, v28, am28, icon);
  switch (icon) {
    case 1: goto statement_19;
    case 2: goto statement_19;
    case 3: goto statement_19;
    case 4: goto statement_11;
    default: break;
  }
  statement_18:
  condiv(t2s, h25, p25, s25, far24, wg24, p1, idnoz, a28, a29, p25r,
    t28, h28, p28, s28, t29, h29, p29, s29, ts28, ts29, ps28, ps29,
    v28, v29, am28, am29, icon);
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
  fastbk();
  //C
}

} // namespace BASIC_ENG
