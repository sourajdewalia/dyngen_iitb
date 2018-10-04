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
coiptb(...)
{
  throw std::runtime_error(
    "Missing function implementation: coiptb");
}

void
colptb(...)
{
  throw std::runtime_error(
    "Missing function implementation: colptb");
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
thermo(...)
{
  throw std::runtime_error(
    "Missing function implementation: thermo");
}

void
thturb(...)
{
  throw std::runtime_error(
    "Missing function implementation: thturb");
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
  int joes;
  int kdes;
  int mode;
  int init;
  int idump;
  int iamtp;
  int igasmx;
  int idburn;
  int iaftbn;
  int idcd;
  int imco;
  int idshoc;
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
    joes(fem::int0),
    kdes(fem::int0),
    mode(fem::int0),
    init(fem::int0),
    idump(fem::int0),
    iamtp(fem::int0),
    igasmx(fem::int0),
    idburn(fem::int0),
    iaftbn(fem::int0),
    idcd(fem::int0),
    imco(fem::int0),
    idshoc(fem::int0),
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
  float dumoi;
  float dund2;
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
  float tcds;
  float wfbds;
  float dtcoos;
  float etabds;
  float wa3cds;
  float dpcoos;
  float otcocf;
  float etaecf;
  float tfhpos;
  float cnhpds;
  float ethpds;
  float tfhpcf;
  float cnhpcf;
  float ethpcf;
  float dhhpcf;
  float t2ds;
  float tflpds;
  float cnlpos;
  float etlpds;
  float tflpcf;
  float cnlpcf;
  float etlpcf;
  float dhlpcf;
  float t21ds;
  float t24os;
  float wfods;
  float dtduds;
  float etadds;
  float wa23ds;
  float dpduds;
  float dtducf;
  float etadcf;
  float t7dswfaos;
  float dtafds;
  float etaads;
  float wg6cds;
  float opafds;
  float dtafcf;
  float etaacf;
  float a55;
  float a25;
  float ag;
  float at;
  float ab;
  float a9;
  float a28;
  float wa29;
  float ps55;
  float aw55;
  float cvonoz;
  float cvmnoz;
  float adsav;
  float agsav;
  float a28sav;
  float a29sav;

  common_all1() :
    pcnfgu(fem::float0),
    pcncgu(fem::float0),
    t4gu(fem::float0),
    dumoi(fem::float0),
    dund2(fem::float0),
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
    tcds(fem::float0),
    wfbds(fem::float0),
    dtcoos(fem::float0),
    etabds(fem::float0),
    wa3cds(fem::float0),
    dpcoos(fem::float0),
    otcocf(fem::float0),
    etaecf(fem::float0),
    tfhpos(fem::float0),
    cnhpds(fem::float0),
    ethpds(fem::float0),
    tfhpcf(fem::float0),
    cnhpcf(fem::float0),
    ethpcf(fem::float0),
    dhhpcf(fem::float0),
    t2ds(fem::float0),
    tflpds(fem::float0),
    cnlpos(fem::float0),
    etlpds(fem::float0),
    tflpcf(fem::float0),
    cnlpcf(fem::float0),
    etlpcf(fem::float0),
    dhlpcf(fem::float0),
    t21ds(fem::float0),
    t24os(fem::float0),
    wfods(fem::float0),
    dtduds(fem::float0),
    etadds(fem::float0),
    wa23ds(fem::float0),
    dpduds(fem::float0),
    dtducf(fem::float0),
    etadcf(fem::float0),
    t7dswfaos(fem::float0),
    dtafds(fem::float0),
    etaads(fem::float0),
    wg6cds(fem::float0),
    opafds(fem::float0),
    dtafcf(fem::float0),
    etaacf(fem::float0),
    a55(fem::float0),
    a25(fem::float0),
    ag(fem::float0),
    at(fem::float0),
    ab(fem::float0),
    a9(fem::float0),
    a28(fem::float0),
    wa29(fem::float0),
    ps55(fem::float0),
    aw55(fem::float0),
    cvonoz(fem::float0),
    cvmnoz(fem::float0),
    adsav(fem::float0),
    agsav(fem::float0),
    a28sav(fem::float0),
    a29sav(fem::float0)
  {}
};

struct common_all2
{
  float t1;
  float pl;
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
  float ohtchp;
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
  float wgs5;
  float farss;
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
    pl(fem::float0),
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
    ohtchp(fem::float0),
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
    wgs5(fem::float0),
    farss(fem::float0),
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
  float dumsi;
  float oums2;
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
  float xmg24;
  float xfar24;
  float xxp1;
  float dum8;
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
    dumsi(fem::float0),
    oums2(fem::float0),
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
    xmg24(fem::float0),
    xfar24(fem::float0),
    xxp1(fem::float0),
    dum8(fem::float0),
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
  float fgpn;
  float fgm;
  float fgp;
  float wft;
  int mgt;
  float fart;
  float fg;
  float fn;
  float sfc;
  float wa32;
  float opwgds;
  float dpwing;
  float wa32ds;
  float a38;
  float am38;
  float v38;
  float t38;
  float h38;
  float p38;
  float s38;
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
  float fnnain;
  float fwovfn;
  float ps39;
  float ffovfn;
  float fcovfn;
  float fmnofn;
  float fnovfo;
  float vjw;
  float t22;
  float p22;
  float h22;
  float s22;
  float t50;
  float ps0;
  float hs0;

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
    fgpn(fem::float0),
    fgm(fem::float0),
    fgp(fem::float0),
    wft(fem::float0),
    mgt(fem::int0),
    fart(fem::float0),
    fg(fem::float0),
    fn(fem::float0),
    sfc(fem::float0),
    wa32(fem::float0),
    opwgds(fem::float0),
    dpwing(fem::float0),
    wa32ds(fem::float0),
    a38(fem::float0),
    am38(fem::float0),
    v38(fem::float0),
    t38(fem::float0),
    h38(fem::float0),
    p38(fem::float0),
    s38(fem::float0),
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
    fnnain(fem::float0),
    fwovfn(fem::float0),
    ps39(fem::float0),
    ffovfn(fem::float0),
    fcovfn(fem::float0),
    fmnofn(fem::float0),
    fnovfo(fem::float0),
    vjw(fem::float0),
    t22(fem::float0),
    p22(fem::float0),
    h22(fem::float0),
    s22(fem::float0),
    t50(fem::float0),
    ps0(fem::float0),
    hs0(fem::float0)
  {}
};

struct common_all5
{
  float s50;
  float wa22;
  float zi;
  float pcn;
  float cni;
  float pri;
  float etai;
  float waci;
  float tffp;
  float cnip;
  float etatip;
  float dhtcip;
  float dhti;
  float blip;
  float pcblic;
  float pcnigu;
  float zids;
  float pcnids;
  float prids;
  float etaids;
  float waeds;
  float pricf;
  float etaicf;
  int maicftfipds;
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
  float far50a24;
  float am23;
  bool dumspl;
  float fxfn2h;
  bool fxm2cp;
  float aftfan;
  float punt;
  float pcblid;
  float p6dsav;
  float an6dsv;
  float etaasv;
  float fartsv;
  float tgpblt41;
  float fan;
  int ispool;

  common_all5() :
    s50(fem::float0),
    wa22(fem::float0),
    zi(fem::float0),
    pcn(fem::float0),
    cni(fem::float0),
    pri(fem::float0),
    etai(fem::float0),
    waci(fem::float0),
    tffp(fem::float0),
    cnip(fem::float0),
    etatip(fem::float0),
    dhtcip(fem::float0),
    dhti(fem::float0),
    blip(fem::float0),
    pcblic(fem::float0),
    pcnigu(fem::float0),
    zids(fem::float0),
    pcnids(fem::float0),
    prids(fem::float0),
    etaids(fem::float0),
    waeds(fem::float0),
    pricf(fem::float0),
    etaicf(fem::float0),
    maicftfipds(fem::int0),
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
    far50a24(fem::float0),
    am23(fem::float0),
    dumspl(fem::bool0),
    fxfn2h(fem::float0),
    fxm2cp(fem::bool0),
    aftfan(fem::float0),
    punt(fem::float0),
    pcblid(fem::float0),
    p6dsav(fem::float0),
    an6dsv(fem::float0),
    etaasv(fem::float0),
    fartsv(fem::float0),
    tgpblt41(fem::float0),
    fan(fem::float0),
    ispool(fem::int0)
  {}
};

struct common_rpms
{
  float xnhpos;
  float xnipds;
  float xnlpds;
  float pmehp;
  float pmiip;
  float pmilp;

  common_rpms() :
    xnhpos(fem::float0),
    xnipds(fem::float0),
    xnlpds(fem::float0),
    pmehp(fem::float0),
    pmiip(fem::float0),
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

struct common_hturb
{
  arr<float> tffx;
  arr<float, 2> cnx;
  arr<float, 2> dhtcx;
  arr<float, 2> etatx;
  int ntffs;
  arr<int> npttff;

  common_hturb() :
    tffx(dimension(15), fem::fill0),
    cnx(dimension(15, 15), fem::fill0),
    dhtcx(dimension(15, 15), fem::fill0),
    etatx(dimension(15, 5), fem::fill0),
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
  common_hturb
{
  fem::cmn_sve cohptb_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct cohptb_save
{
  float aword;
  float whi;
  float wlo;

  cohptb_save() :
    aword(fem::float0),
    whi(fem::float0),
    wlo(fem::float0)
  {}
};

void
cohptb(
  common& cmn)
{
  FEM_CMN_SVE(cohptb);
  common_write write(cmn);
  int& ides = cmn.ides;
  arr_ref<float> err(cmn.err, dimension(9));
  float& tfhpcf = cmn.tfhpcf;
  float& cnhpcf = cmn.cnhpcf;
  float& ethpcf = cmn.ethpcf;
  float& dhhpcf = cmn.dhhpcf;
  float& h3 = cmn.h3;
  float& t4 = cmn.t4;
  float& p4 = cmn.p4;
  float& wg4 = cmn.wg4;
  float& far4 = cmn.far4;
  float& cnhp = cmn.cnhp;
  float& etathp = cmn.etathp;
  float& dhtc = cmn.dhtc;
  float& blhp = cmn.blhp;
  float& hpext = cmn.hpext;
  float& pcnc = cmn.pcnc;
  float& tffhp = cmn.tffhp;
  float& t50 = cmn.t50;
  float& s50 = cmn.s50;
  float& wg50 = cmn.wg50;
  float& vhptrb = cmn.vhptrb;
  bool& si = cmn.si;
  arr_cref<float> tffx(cmn.tffx, dimension(15));
  arr_cref<float, 2> cnx(cmn.cnx, dimension(15, 15));
  arr_cref<float, 2> dhtcx(cmn.dhtcx, dimension(15, 15));
  arr_cref<float, 2> etatx(cmn.etatx, dimension(15, 5));
  arr_cref<int> npttff(cmn.npttff, dimension(15));
  //
  float& aword = sve.aword;
  float& whi = sve.whi;
  float& wlo = sve.wlo;
  if (is_called_first_time) {
    aword = "COHPTB";
    wlo = "  (LO)";
    whi = "  (LO)";
  }
  float ra = fem::float0;
  float aj = fem::float0;
  float confac = fem::float0;
  float spool = fem::float0;
  float t41 = fem::float0;
  float cnhps = fem::float0;
  float tffhps = fem::float0;
  float dhtchp = fem::float0;
  int igo = fem::int0;
  float go = fem::float0;
  float tfhcal = fem::float0;
  float btuext = fem::float0;
  float xnhpds = fem::float0;
  float xnhp = fem::float0;
  float xnhdot = fem::float0;
  float phihp = fem::float0;
  float dhtcc = fem::float0;
  float tfhpds = fem::float0;
  float ohhpcf = fem::float0;
  float ohtcc = fem::float0;
  float etath = fem::float0;
  float h50 = fem::float0;
  float p50 = fem::float0;
  float far50 = fem::float0;
  float xx2 = fem::float0;
  float far60 = fem::float0;
  arr_1d<9, float> q(fem::fill0);
  float wg50p = fem::float0;
  float h60p = fem::float0;
  float p50dot = fem::float0;
  float u50 = fem::float0;
  float u50dot = fem::float0;
  float h50p = fem::float0;
  float u60dot = fem::float0;
  float h50x = fem::float0;
  float errw = fem::float0;
  float dir = fem::float0;
  float t5ot = fem::float0;
  float t50t = fem::float0;
  bool fxfn2n = fem::bool0;
  float tbo = fem::float0;
  float tb = fem::float0;
  float tffip = fem::float0;
  static const char* format_10 =
    "('0***** CNHP OFF MAP',f10.4,2x,a6,'*****$$$$$$')";
  static const char* format_9 =
    "('0*****TFFHP OFF MAP',f10.4,2x,a6,'*****$$$$$$')";
  //C
  //C        uses BLOCK DATA to perform inner-turbine calculations (not used in
  //C        engine configurations c and g)
  //C
  cmn.word = aword;
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
  confac = 1.0966e-2f;
  statement_101:
  //C
  if (spool == 1) {
    goto statement_8;
  }
  if (ides == 0) {
    goto statement_1;
  }
  cnhpcf = cmn.cnhpds * fem::sqrt(t41) / pcnc;
  statement_1:
  cnhp = cnhpcf * pcnc / fem::sqrt(t4);
  cnhps = cnhp;
  tffhps = tffhp;
  //C
  search(-1.f, tffhp, cnhp, dhtchp, etathp, tffx(1), cmn.ntffs, cnx(1,
    1), dhtcx(1, 1), etatx(1, 1), npttff(1), 15, 15, igo);
  //C
  if (igo == 1 || igo == 11 || igo == 21) {
    write(18, format_9), tffhps, wlo;
  }
  if (igo == 2 || igo == 12 || igo == 22) {
    write(8, format_9), tffhps, whi;
  }
  if (igo == 10 || igo == 11 || igo == 12) {
    write(8, format_10), cnhps, wlo;
  }
  if (go == 20 || igo == 21 || igo == 22) {
    write(8, format_10), cnhps, whi;
  }
  //C
  if (igo != 7) {
    goto statement_2;
  }
  error();
  return;
  //C
  statement_2:
  cmn.nomap = 0;
  tfhcal = wg4 * fem::sqrt(t4) / (14.696f * p4);
  btuext = 0.706705f * hpext;
  if (si) {
    tfhcal = wg4 * fem::sqrt(t4) / p4;
  }
  if (si) {
    btuext = hpext;
  }
  xnhp = xnhpds * pcnc / 100.f;
  xnhdot = deriv(1, xnhp);
  dhtcc = (btuext * cmn.wacp * (h3 - cmn.h21) * confac * phihp *
    xnhp * xnhdot) / (wg4 * t4);
  if (ides == 0) {
    goto statement_5;
  }
  tfhpcf = tfhpds / tfhcal;
  dhhpcf = dhtcc / dhtchp;
  ethpcf = cmn.ethpds / etathp;
  //C
  write(4,
    "('H.P. TURBINE DESIGN ',5x,'CNHPCF=',e15.6,' TFHPCF=',e15.8,' ETHPCF=',"
    "e5.8,' DHHPCF=',e15.8)"),
    cnhpcf, tfhpcf, ethpcf, ohhpcf;
  statement_5:
  tfhcal = tfhpcf * tfhcal;
  dhtchp = dhhpcf * dhtchp;
  etathp = ethpcf * etathp;
  dhtc = dhtcc * t4;
  err(1) = (tfhcal - tffhp) / tfhcal;
  err(2) = (ohtcc - dhtchp) / ohtcc;
  //C
  thturb(dhtc, etath, far4, cmn.h4, cmn.s4, p4, t50, h50, s50, p50);
  if (blhp <= 0.0f) {
    goto statement_6;
  }
  far50 = far4 * wg4 / (wg4 * blhp * (far4 + 1.f));
  wg50 = wg4 + blhp;
  h50 = (blhp * h3 * wg4 * h50) / wg50;
  thermo(p50, h50, t50, s50, xx2, 1, far60, 1);
  goto statement_7;
  //C
  statement_6:
  far50 = far4;
  wg50 = wg4;
  statement_7:
  //C
  if (vhptrb == 0.0f) {
    goto statement_21;
  }
  q(2) = 0.0f;
  q(3) = 0.0f;
  wg50p = wg50;
  h60p = h50;
  p50dot = deriv(12, p50);
  statement_18:
  //C
  thermo(p50, h50, t50, s50, xx2, 1, far50, 0);
  wg50 = wg50p - p50dot * vhptrb / t50 / 1.4f / ra;
  u50 = h50 - ra * aj * t50;
  u50dot = deriv(13, u50);
  h50x = (wg50p * h50p - (wg50p - wg50) * u50 - u60dot * p50 *
    vhptrb / t50 / ra) / wg50;
  errw = (h50 - h50x) / h50;
  dir = fem::sqrt(fem::abs(h50 / h50x));
  afquir(q(1), t50, errw, 0.f, 20.f, 0.0001f, dir, t5ot, igo);
  switch (igo) {
    case 1: goto statement_19;
    case 2: goto statement_21;
    case 3: goto statement_20;
    default: break;
  }
  statement_19:
  t50 = t50t;
  goto statement_18;
  statement_20:
  error();
  statement_21:
  if (fxfn2n || cmn.dumspl) {
    goto statement_8;
  }
  coiptb();
  return;
  statement_8:
  cmn.p5 = p50;
  cmn.h5 = h50;
  tb = tbo;
  cmn.s5 = s50;
  cmn.far5 = far50;
  cmn.wg5 = wg50;
  //C        SET MIDDLE TURBINE PARAMETERS TO ZERO, NOT USED
  tffip = 0.f;
  cmn.cnip = 0.f;
  cmn.dhti = 0.f;
  cmn.dhtcip = 0.f;
  cmn.etatip = 0;
  colptb();
  //C
}

} // namespace BASIC_ENG
