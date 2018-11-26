#include <fem.hpp> // Fortran EMulation library of fable module
//#include <DERIV.cpp>
//#include <AFQUIR.cpp>
//#include <ERROR.cpp>
#include <THCOMP.cpp>
#include <SEARCH.cpp>
#include <WDUCTI.cpp>
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
//cocomb(...)
//{
//  throw std::runtime_error(
//    "Missing function implementation: cocomb");
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
//search(...)
//{
//  throw std::runtime_error(
//    "Missing function implementation: search");
//}
//
//void
//thcomp(...)
//{
//  throw std::runtime_error(
//    "Missing function implementation: thcomp");
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
//wducti(...)
//{
//  throw std::runtime_error(
//    "Missing function implementation: wducti");
//}

//struct common_words
//{
//  char* word;
//
//  common_words() :
//    word(NULL)
//  {}
//};

//struct common_design
//{
//  int ides;
//  int jdes;
//  int kdes;
//  int mode;
//  int init;
//  int ioump;
//  int iamtp;
//  int igasmx;
//  int idburn;
//  int iaftbn;
//  int idedimcd;
//  int idshoc;
//  int imshoc;
//  int nozflt;
//  int itrys;
//  int looper;
//  int nomap;
//  int nummap;
//  int mapedg;
//  float tolall;
//  arr<float> err;
//
//  common_design() :
//    ides(fem::int0),
//    jdes(fem::int0),
//    kdes(fem::int0),
//    mode(fem::int0),
//    init(fem::int0),
//    ioump(fem::int0),
//    iamtp(fem::int0),
//    igasmx(fem::int0),
//    idburn(fem::int0),
//    iaftbn(fem::int0),
//    idedimcd(fem::int0),
//    idshoc(fem::int0),
//    imshoc(fem::int0),
//    nozflt(fem::int0),
//    itrys(fem::int0),
//    looper(fem::int0),
//    nomap(fem::int0),
//    nummap(fem::int0),
//    mapedg(fem::int0),
//    tolall(fem::float0),
//    err(dimension(9), fem::fill0)
//  {}
//};
//
//struct common_all1
//{
//  float pcnfgu;
//  float pcncgu;
//  float t4gu;
//  float dumd1;
//  float duwd2;
//  float delfg;
//  float delfn;
//  float delsfc;
//  float fds;
//  float pcnfds;
//  float prfds;
//  float etafds;
//  float wafds;
//  float prfcf;
//  float etafcf;
//  float wafcf;
//  float zcds;
//  float pcncds;
//  float prcds;
//  float etacds;
//  float wacos;
//  float prccf;
//  float etaccf;
//  float waccf;
//  float t4ds;
//  float wfbds;
//  float dtcods;
//  float etabds;
//  float wa3cds;
//  float cpcods;
//  float dtcocf;
//  float etabcf;
//  float tfhpds;
//  float cnhpds;
//  float ethpds;
//  float tfhpcf;
//  float cnhpcf;
//  float ethpcf;
//  float dhhpcf;
//  float t2ds;
//  float tflpds;
//  float cnlpds;
//  float etlpds;
//  float tflpcf;
//  float cnlpc;
//  float etlpcf;
//  float dhlpcf;
//  float t21ds;
//  float tt24ds;
//  float wfdds;
//  float dtduds;
//  float etadds;
//  float wa23ds;
//  float dpduds;
//  float dtducf;
//  float etadcf;
//  float t7ds;
//  float wfads;
//  float dtafos;
//  float etaads;
//  float wg6cds;
//  float dpafds;
//  float dtafcf;
//  float etaacf;
//  float a55;
//  float a25;
//  float a6;
//  float a7;
//  float a8;
//  float a9;
//  float a28;
//  float a29;
//  float ps55;
//  float am55;
//  float cvdnoz;
//  float cvmnoz;
//  float absav;
//  float aosav;
//  float azbsav;
//  float a29sav;
//
//  common_all1() :
//    pcnfgu(fem::float0),
//    pcncgu(fem::float0),
//    t4gu(fem::float0),
//    dumd1(fem::float0),
//    duwd2(fem::float0),
//    delfg(fem::float0),
//    delfn(fem::float0),
//    delsfc(fem::float0),
//    fds(fem::float0),
//    pcnfds(fem::float0),
//    prfds(fem::float0),
//    etafds(fem::float0),
//    wafds(fem::float0),
//    prfcf(fem::float0),
//    etafcf(fem::float0),
//    wafcf(fem::float0),
//    zcds(fem::float0),
//    pcncds(fem::float0),
//    prcds(fem::float0),
//    etacds(fem::float0),
//    wacos(fem::float0),
//    prccf(fem::float0),
//    etaccf(fem::float0),
//    waccf(fem::float0),
//    t4ds(fem::float0),
//    wfbds(fem::float0),
//    dtcods(fem::float0),
//    etabds(fem::float0),
//    wa3cds(fem::float0),
//    cpcods(fem::float0),
//    dtcocf(fem::float0),
//    etabcf(fem::float0),
//    tfhpds(fem::float0),
//    cnhpds(fem::float0),
//    ethpds(fem::float0),
//    tfhpcf(fem::float0),
//    cnhpcf(fem::float0),
//    ethpcf(fem::float0),
//    dhhpcf(fem::float0),
//    t2ds(fem::float0),
//    tflpds(fem::float0),
//    cnlpds(fem::float0),
//    etlpds(fem::float0),
//    tflpcf(fem::float0),
//    cnlpc(fem::float0),
//    etlpcf(fem::float0),
//    dhlpcf(fem::float0),
//    t21ds(fem::float0),
//    tt24ds(fem::float0),
//    wfdds(fem::float0),
//    dtduds(fem::float0),
//    etadds(fem::float0),
//    wa23ds(fem::float0),
//    dpduds(fem::float0),
//    dtducf(fem::float0),
//    etadcf(fem::float0),
//    t7ds(fem::float0),
//    wfads(fem::float0),
//    dtafos(fem::float0),
//    etaads(fem::float0),
//    wg6cds(fem::float0),
//    dpafds(fem::float0),
//    dtafcf(fem::float0),
//    etaacf(fem::float0),
//    a55(fem::float0),
//    a25(fem::float0),
//    a6(fem::float0),
//    a7(fem::float0),
//    a8(fem::float0),
//    a9(fem::float0),
//    a28(fem::float0),
//    a29(fem::float0),
//    ps55(fem::float0),
//    am55(fem::float0),
//    cvdnoz(fem::float0),
//    cvmnoz(fem::float0),
//    absav(fem::float0),
//    aosav(fem::float0),
//    azbsav(fem::float0),
//    a29sav(fem::float0)
//  {}
//};
//
//struct common_all2
//{
//  float t1;
//  float p1;
//  float h1;
//  float s1;
//  float t2;
//  float p2;
//  float h2;
//  float s2;
//  float t21;
//  float p21;
//  float h21;
//  float s21;
//  float t3;
//  float p3;
//  float h3;
//  float s3;
//  float t4;
//  float p4;
//  float h4;
//  float s4;
//  float t5;
//  float p5;
//  float h5;
//  float s5;
//  float t55;
//  float p55;
//  float h55;
//  float s55;
//  float blf;
//  float blc;
//  float blou;
//  float blob;
//  float cnf;
//  float prf;
//  float etaf;
//  float wafc;
//  float waf;
//  float wa3;
//  float wg;
//  float far4;
//  float cnc;
//  float prc;
//  float etac;
//  float wacc;
//  float wac;
//  float etab;
//  float dpcom;
//  float dump;
//  float cnhp;
//  float etathp;
//  float dhtchp;
//  float dhtc;
//  float blhp;
//  float wg5;
//  float far5;
//  float cs;
//  float cnlp;
//  float etatlp;
//  float dhtclp;
//  float dhtf;
//  float bllp;
//  float wg55;
//  float far55;
//  float hpext;
//  float am;
//  float altp;
//  float etar;
//  float zf;
//  float pcnf;
//  float zc;
//  float pcnc;
//  float wfb;
//  float tffhp;
//  float tfflp;
//  float pcblf;
//  float pcblc;
//  float pcbldu;
//  float pcblob;
//  float pcblhp;
//  float pcbll;
//
//  common_all2() :
//    t1(fem::float0),
//    p1(fem::float0),
//    h1(fem::float0),
//    s1(fem::float0),
//    t2(fem::float0),
//    p2(fem::float0),
//    h2(fem::float0),
//    s2(fem::float0),
//    t21(fem::float0),
//    p21(fem::float0),
//    h21(fem::float0),
//    s21(fem::float0),
//    t3(fem::float0),
//    p3(fem::float0),
//    h3(fem::float0),
//    s3(fem::float0),
//    t4(fem::float0),
//    p4(fem::float0),
//    h4(fem::float0),
//    s4(fem::float0),
//    t5(fem::float0),
//    p5(fem::float0),
//    h5(fem::float0),
//    s5(fem::float0),
//    t55(fem::float0),
//    p55(fem::float0),
//    h55(fem::float0),
//    s55(fem::float0),
//    blf(fem::float0),
//    blc(fem::float0),
//    blou(fem::float0),
//    blob(fem::float0),
//    cnf(fem::float0),
//    prf(fem::float0),
//    etaf(fem::float0),
//    wafc(fem::float0),
//    waf(fem::float0),
//    wa3(fem::float0),
//    wg(fem::float0),
//    far4(fem::float0),
//    cnc(fem::float0),
//    prc(fem::float0),
//    etac(fem::float0),
//    wacc(fem::float0),
//    wac(fem::float0),
//    etab(fem::float0),
//    dpcom(fem::float0),
//    dump(fem::float0),
//    cnhp(fem::float0),
//    etathp(fem::float0),
//    dhtchp(fem::float0),
//    dhtc(fem::float0),
//    blhp(fem::float0),
//    wg5(fem::float0),
//    far5(fem::float0),
//    cs(fem::float0),
//    cnlp(fem::float0),
//    etatlp(fem::float0),
//    dhtclp(fem::float0),
//    dhtf(fem::float0),
//    bllp(fem::float0),
//    wg55(fem::float0),
//    far55(fem::float0),
//    hpext(fem::float0),
//    am(fem::float0),
//    altp(fem::float0),
//    etar(fem::float0),
//    zf(fem::float0),
//    pcnf(fem::float0),
//    zc(fem::float0),
//    pcnc(fem::float0),
//    wfb(fem::float0),
//    tffhp(fem::float0),
//    tfflp(fem::float0),
//    pcblf(fem::float0),
//    pcblc(fem::float0),
//    pcbldu(fem::float0),
//    pcblob(fem::float0),
//    pcblhp(fem::float0),
//    pcbll(fem::float0)
//  {}
//};
//
//struct common_all3
//{
//  float xp1;
//  float xwaf;
//  float xwac;
//  float xblf;
//  float xbldu;
//  float xh3;
//  float dums1;
//  float dums2;
//  float xt21;
//  float xp21;
//  float xh21;
//  float xs21;
//  float t23;
//  float p23;
//  float h23;
//  float s23;
//  float t24;
//  float p24;
//  float h24;
//  float s24;
//  float t25;
//  float p25;
//  float h25;
//  float s25;
//  float t28;
//  float p28;
//  float h28;
//  float s28;
//  float t29;
//  float p29;
//  float h29;
//  float s29;
//  float wad;
//  float wfd;
//  float wg24;
//  float far24;
//  float eta;
//  float dpduc;
//  float bypass;
//  float dums3;
//  float ts28;
//  float ps28;
//  float v28;
//  int m2b;
//  float ts29;
//  float ps29;
//  float v29;
//  float amz9;
//  float xt55;
//  float xp55;
//  float xh55;
//  float xs55;
//  float xt25;
//  float xp25;
//  float xh25;
//  float xs25;
//  float xwfb;
//  float xwg55;
//  float xfar55;
//  float xwfd;
//  float xwg24;
//  float xfar26;
//  float xxpi;
//  float dumb;
//  float t6;
//  float p6;
//  float h6;
//  float s6;
//  float t7;
//  float p7;
//  float h7;
//  float s7;
//  float p8;
//  float h8;
//  float s8;
//  float t9;
//  float p9;
//  float h9;
//  float s9;
//
//  common_all3() :
//    xp1(fem::float0),
//    xwaf(fem::float0),
//    xwac(fem::float0),
//    xblf(fem::float0),
//    xbldu(fem::float0),
//    xh3(fem::float0),
//    dums1(fem::float0),
//    dums2(fem::float0),
//    xt21(fem::float0),
//    xp21(fem::float0),
//    xh21(fem::float0),
//    xs21(fem::float0),
//    t23(fem::float0),
//    p23(fem::float0),
//    h23(fem::float0),
//    s23(fem::float0),
//    t24(fem::float0),
//    p24(fem::float0),
//    h24(fem::float0),
//    s24(fem::float0),
//    t25(fem::float0),
//    p25(fem::float0),
//    h25(fem::float0),
//    s25(fem::float0),
//    t28(fem::float0),
//    p28(fem::float0),
//    h28(fem::float0),
//    s28(fem::float0),
//    t29(fem::float0),
//    p29(fem::float0),
//    h29(fem::float0),
//    s29(fem::float0),
//    wad(fem::float0),
//    wfd(fem::float0),
//    wg24(fem::float0),
//    far24(fem::float0),
//    eta(fem::float0),
//    dpduc(fem::float0),
//    bypass(fem::float0),
//    dums3(fem::float0),
//    ts28(fem::float0),
//    ps28(fem::float0),
//    v28(fem::float0),
//    m2b(fem::int0),
//    ts29(fem::float0),
//    ps29(fem::float0),
//    v29(fem::float0),
//    amz9(fem::float0),
//    xt55(fem::float0),
//    xp55(fem::float0),
//    xh55(fem::float0),
//    xs55(fem::float0),
//    xt25(fem::float0),
//    xp25(fem::float0),
//    xh25(fem::float0),
//    xs25(fem::float0),
//    xwfb(fem::float0),
//    xwg55(fem::float0),
//    xfar55(fem::float0),
//    xwfd(fem::float0),
//    xwg24(fem::float0),
//    xfar26(fem::float0),
//    xxpi(fem::float0),
//    dumb(fem::float0),
//    t6(fem::float0),
//    p6(fem::float0),
//    h6(fem::float0),
//    s6(fem::float0),
//    t7(fem::float0),
//    p7(fem::float0),
//    h7(fem::float0),
//    s7(fem::float0),
//    p8(fem::float0),
//    h8(fem::float0),
//    s8(fem::float0),
//    t9(fem::float0),
//    p9(fem::float0),
//    h9(fem::float0),
//    s9(fem::float0)
//  {}
//};
//
//struct common_all4
//{
//  float wg6;
//  float wfa;
//  float wg7;
//  float far7;
//  float etaa;
//  float dpaft;
//  float v55;
//  float v25;
//  float ps6;
//  float v6;
//  float am6;
//  float ts7;
//  float ps7;
//  float v7;
//  float am7;
//  float am25;
//  float ts8;
//  float ps8;
//  float v8;
//  int m8;
//  float ts9;
//  float ps9;
//  float v9;
//  float am9;
//  float va;
//  float frd;
//  float vjd;
//  float fgmd;
//  float vjm;
//  float fgmm;
//  float fgpd;
//  float fgpm;
//  float fgm;
//  float fgp;
//  float wft;
//  float wgt;
//  float fart;
//  float fg;
//  float fn;
//  float sfc;
//  float wa32;
//  float dpwgds;
//  float dpwing;
//  float wa32ds;
//  float a38;
//  float am38;
//  float v38;
//  float t38;
//  float h3b;
//  float p38;
//  float ts38;
//  float ps38;
//  float t39;
//  float h39;
//  float p39;
//  float ts39;
//  float v39;
//  float am39;
//  float a39;
//  float bprint;
//  float wg37;
//  float cvdwng;
//  float fgmwng;
//  float fgpwng;
//  float fnwing;
//  float fnmain;
//  float fwovfn;
//  float ps39;
//  float ffovfn;
//  float fcovfn;
//  float fmnofn;
//  float fnovfo;
//  float vjw;
//  float t22;
//  float p22;
//  float h22;
//  float s22;
//  float t50;
//  float p50;
//  float h50;
//
//  common_all4() :
//    wg6(fem::float0),
//    wfa(fem::float0),
//    wg7(fem::float0),
//    far7(fem::float0),
//    etaa(fem::float0),
//    dpaft(fem::float0),
//    v55(fem::float0),
//    v25(fem::float0),
//    ps6(fem::float0),
//    v6(fem::float0),
//    am6(fem::float0),
//    ts7(fem::float0),
//    ps7(fem::float0),
//    v7(fem::float0),
//    am7(fem::float0),
//    am25(fem::float0),
//    ts8(fem::float0),
//    ps8(fem::float0),
//    v8(fem::float0),
//    m8(fem::int0),
//    ts9(fem::float0),
//    ps9(fem::float0),
//    v9(fem::float0),
//    am9(fem::float0),
//    va(fem::float0),
//    frd(fem::float0),
//    vjd(fem::float0),
//    fgmd(fem::float0),
//    vjm(fem::float0),
//    fgmm(fem::float0),
//    fgpd(fem::float0),
//    fgpm(fem::float0),
//    fgm(fem::float0),
//    fgp(fem::float0),
//    wft(fem::float0),
//    wgt(fem::float0),
//    fart(fem::float0),
//    fg(fem::float0),
//    fn(fem::float0),
//    sfc(fem::float0),
//    wa32(fem::float0),
//    dpwgds(fem::float0),
//    dpwing(fem::float0),
//    wa32ds(fem::float0),
//    a38(fem::float0),
//    am38(fem::float0),
//    v38(fem::float0),
//    t38(fem::float0),
//    h3b(fem::float0),
//    p38(fem::float0),
//    ts38(fem::float0),
//    ps38(fem::float0),
//    t39(fem::float0),
//    h39(fem::float0),
//    p39(fem::float0),
//    ts39(fem::float0),
//    v39(fem::float0),
//    am39(fem::float0),
//    a39(fem::float0),
//    bprint(fem::float0),
//    wg37(fem::float0),
//    cvdwng(fem::float0),
//    fgmwng(fem::float0),
//    fgpwng(fem::float0),
//    fnwing(fem::float0),
//    fnmain(fem::float0),
//    fwovfn(fem::float0),
//    ps39(fem::float0),
//    ffovfn(fem::float0),
//    fcovfn(fem::float0),
//    fmnofn(fem::float0),
//    fnovfo(fem::float0),
//    vjw(fem::float0),
//    t22(fem::float0),
//    p22(fem::float0),
//    h22(fem::float0),
//    s22(fem::float0),
//    t50(fem::float0),
//    p50(fem::float0),
//    h50(fem::float0)
//  {}
//};
//
//struct common_all5
//{
//  float s50;
//  float wa22;
//  float zi;
//  float pcni;
//  float cni;
//  float pri;
//  float etai;
//  float waci;
//  float tffip;
//  float cnip;
//  float etatip;
//  float dhtcp;
//  float dhti;
//  float blip;
//  float pcblip;
//  float pcnigu;
//  float zids;
//  float pcnids;
//  int iprids;
//  float etaids;
//  int maids;
//  float pricf;
//  float etaicf;
//  int maicf;
//  float tfipds;
//  float cnipds;
//  float etiwds;
//  float tfipcf;
//  float cnipcf;
//  float etipcf;
//  float dhipcf;
//  float waicds;
//  float wai;
//  float pcbli;
//  float bli;
//  float t22ds;
//  int ma21;
//  int mg50;
//  float far50;
//  float a24;
//  float an23;
//  bool dumspl;
//  float fxfn2m;
//  bool fxm2cp;
//  float aftfan;
//  float pun;
//  float pcblid;
//  float p6dsav;
//  float tam6dsv;
//  float etaasv;
//  float far7svt4pbl;
//  float t41;
//  bool fan;
//  int ispool;
//
//  common_all5() :
//    s50(fem::float0),
//    wa22(fem::float0),
//    zi(fem::float0),
//    pcni(fem::float0),
//    cni(fem::float0),
//    pri(fem::float0),
//    etai(fem::float0),
//    waci(fem::float0),
//    tffip(fem::float0),
//    cnip(fem::float0),
//    etatip(fem::float0),
//    dhtcp(fem::float0),
//    dhti(fem::float0),
//    blip(fem::float0),
//    pcblip(fem::float0),
//    pcnigu(fem::float0),
//    zids(fem::float0),
//    pcnids(fem::float0),
//    iprids(fem::int0),
//    etaids(fem::float0),
//    maids(fem::int0),
//    pricf(fem::float0),
//    etaicf(fem::float0),
//    maicf(fem::int0),
//    tfipds(fem::float0),
//    cnipds(fem::float0),
//    etiwds(fem::float0),
//    tfipcf(fem::float0),
//    cnipcf(fem::float0),
//    etipcf(fem::float0),
//    dhipcf(fem::float0),
//    waicds(fem::float0),
//    wai(fem::float0),
//    pcbli(fem::float0),
//    bli(fem::float0),
//    t22ds(fem::float0),
//    ma21(fem::int0),
//    mg50(fem::int0),
//    far50(fem::float0),
//    a24(fem::float0),
//    an23(fem::float0),
//    dumspl(fem::bool0),
//    fxfn2m(fem::float0),
//    fxm2cp(fem::bool0),
//    aftfan(fem::float0),
//    pun(fem::float0),
//    pcblid(fem::float0),
//    p6dsav(fem::float0),
//    tam6dsv(fem::float0),
//    etaasv(fem::float0),
//    far7svt4pbl(fem::float0),
//    t41(fem::float0),
//    fan(fem::bool0),
//    ispool(fem::int0)
//  {}
//};
//
//struct common_vols
//{
//  float vfan;
//  float vintc;
//  float vcomp;
//  float vcomb;
//  float vhptrb;
//  float viptrbi;
//  float vlptrb;
//  float vaftbn;
//  float vfduct;
//  float vmduct;
//
//  common_vols() :
//    vfan(fem::float0),
//    vintc(fem::float0),
//    vcomp(fem::float0),
//    vcomb(fem::float0),
//    vhptrb(fem::float0),
//    viptrbi(fem::float0),
//    vlptrb(fem::float0),
//    vaftbn(fem::float0),
//    vfduct(fem::float0),
//    vmduct(fem::float0)
//  {}
//};

struct common_flows
{
  int mafp;
  int maip;
  int macp;

  common_flows() :
    mafp(fem::int0),
    maip(fem::int0),
    macp(fem::int0)
  {}
};

//struct common_units
//{
//  bool si;
//
//  common_units() :
//    si(fem::bool0)
//  {}
//};

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
  fem::cmn_sve cocomp_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct cocomp_save
{
  char* aword;
  arr<float> wlh;

  cocomp_save() :
    aword(NULL),
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
  float& wai = cmn.wai;
  float& bli = cmn.bli;
  bool& fxm2cp = cmn.fxm2cp;
  float& pcblid = cmn.pcblid;
  bool fan = cmn.fan;
  int& ispool = cmn.ispool;
  float& vcomp = cmn.vcomp;
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
      "COCQMP", "  (LO)", "   (H)"
    };
    fem::data_of_type_str(FEM_VALUES_AND_SIZE),
      aword, wlh;
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
  float wacds = fem::float0;
  int mac = fem::int0;
  float spdmid = fem::float0;
  float pcnic = fem::float0;
  float cncs = fem::float0;
  int igo = fem::int0;
  float wa21 = fem::float0;
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
  float bldu = fem::float0;
  float belip = fem::float0;
  float pcbllp = fem::float0;
  //C
  //C        Uses Blockdata to perform inner-compressor calculations
  //C
  aword = cmn.word;
  //C
  if (cmn.si) {
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
  if (!fxm2cp) {
    pcnc = pcncds;
  }
  statement_1:
  if (!fxm2cp) {
    goto statement_2;
  }
  //C        SPEEDS OF MIDLE AND INNER SPOOL ARE THE SAME
  //C
  spdmid = cmn.cni * fem::sqrt(cmn.t22 / tstd);
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
  if (!cmn.dumspl || pcblid != 0 || !fan) {
    goto statement_6;
  }
  wa2 = wac;
  wai = cmn.wa22;
  wiaci = wacc * waccf;
  statement_6:
  wa32 = wai - wac;
  bli = wa32;
  wa21 = wac;
  wacc = wacc * waccp;
  pcbi = bli / wai;
  wducti();
  if (pcbiid == 0.f) {
    err(7) = (wac - wai) / wac;
  }
  if (!fan) {
    err(5) = (cmn.waf - wac - cmn.blf) / wac;
  }
  if (ides == 1 && pcblid == 0.f) {
    err(7) = 1.e-6f;
  }
  thcomp(prc, etac, t21, cmn.h21, cmn.s21, p21, t3, h3, s3, p3);
  if (vcomp == 0.0f) {
    goto statement_21;
  }
  q(2) = 0.0f;
  q(3) = 0.0f;
  h3p = h3;
  p3dot = deriv(cmndrv, 8, p3);
  statement_18:
  thermo(p3, h3, t3, s3, xx2, 0.0f, 0.0f, 0);
  wac = wacp - pdot * vcomp / t3 / 1.4f / ra;
  u3 = h3 - aj * ra * t3;
  u3dot = deriv(cmndrv, 9, u3);
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
  error();
  statement_21:
  if (pcblc > 0.f) {
    blc = pcblc * wac;
  }
  cmn.wa3 = hac - blc;
  bldu = cmn.pcbldu * blc;
  cmn.blob = cmn.pcblob * blc;
  cmn.blhp = cmn.pcblhp * blc;
  belip = cmn.pcblip * blc;
  cmn.bllp = pcbllp * blc;
  if (cmn.mode != 1) {
    goto statement_7;
  }
//  if (fem::abs(cnc - cncs) <= 0.001f * cncs) {
//    goto statement_8;
//  }
  write(8,
    "('CNC   WAS=',e15.8,' AND NOW=  ',e15.8,' CHECK PCNC INPUT$$$$$$$')"),
    cncs, cnc;
  error();
  statement_7:
  pcnc = 100.f * theta * cnc / thetad;
  //statement_8:
  //cocomb();
  //C
}

} // namespace BASIC_ENG
