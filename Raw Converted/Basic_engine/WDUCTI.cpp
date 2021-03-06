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
convrg(...)
{
  throw std::runtime_error(
    "Missing function implementation: convrg");
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
therm(...)
{
  throw std::runtime_error(
    "Missing function implementation: therm");
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
  int node;
  int init;
  int idump;
  int iamtp;
  int igasmx;
  int idburn;
  int iaftbn;
  int idcd;
  int incd;
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
    node(fem::int0),
    init(fem::int0),
    idump(fem::int0),
    iamtp(fem::int0),
    igasmx(fem::int0),
    idburn(fem::int0),
    iaftbn(fem::int0),
    idcd(fem::int0),
    incd(fem::int0),
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
  float dunp1;
  float dump2;
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
  float ffbds;
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
  float dtduos;
  float etaoos;
  float wa23os;
  float dpduos;
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
    dunp1(fem::float0),
    dump2(fem::float0),
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
    ffbds(fem::float0),
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
    dtduos(fem::float0),
    etaoos(fem::float0),
    wa23os(fem::float0),
    dpduos(fem::float0),
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
  float pceldu;
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
    pceldu(fem::float0),
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
  float v26;
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
  float pb;
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
    v26(fem::float0),
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
    pb(fem::float0),
    h8(fem::float0),
    s8(fem::float0),
    t9(fem::float0),
    p9(fem::float0),
    h9(fem::float0),
    s9(fem::float0)
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
  float eta;
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
  float etai;
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
  float fxm2cp;
  float aftfan;
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
    eta(fem::float0),
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
    etai(fem::float0),
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
    fxm2cp(fem::float0),
    aftfan(fem::float0),
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
  common_all5,
  common_vols,
  common_units
{
  fem::variant_core common_all4;
  fem::cmn_sve wducti_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct wducti_save
{
  fem::variant_bindings all4_bindings;
  float aword;

  wducti_save() :
    aword(fem::float0)
  {}
};

void
wducti(
  common& cmn)
{
  FEM_CMN_SVE(wducti);
  common_write write(cmn);
  int& ides = cmn.ides;
  arr_ref<float> err(cmn.err, dimension(9));
  //
  common_variant all4(cmn.common_all4, sve.all4_bindings);
  float& aword = sve.aword;
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> wg6;
      mbr<float> wfa;
      mbr<float> wg7;
      mbr<float> far7;
      mbr<float> etaa;
      mbr<float> dpaft;
      mbr<float> v55;
      mbr<float> v25;
      mbr<float> ps6;
      mbr<float> v6;
      mbr<float> am6;
      mbr<float> ts7;
      mbr<float> ps7;
      mbr<float> v7;
      mbr<float> am7;
      mbr<float> am25;
      mbr<float> ts8;
      mbr<float> ps8;
      mbr<float> v8;
      mbr<float> am8;
      mbr<float> ts9;
      mbr<float> ps9;
      mbr<float> v9;
      mbr<float> am9;
      mbr<float> va;
      mbr<float> frd;
      mbr<float> vjd;
      mbr<float> fgmd;
      mbr<float> vjm;
      mbr<float> fgmm;
      mbr<float> fgpd;
      mbr<float> fgpm;
      mbr<float> fgm;
      mbr<float> fgp;
      mbr<float> wft;
      mbr<float> wgt;
      mbr<float> fart;
      mbr<float> fg;
      mbr<float> fn;
      mbr<float> sfc;
      mbr<float> wa32;
      mbr<float> dpwgds;
      mbr<float> dpwing;
      mbr<float> xzero(dimension(26));
      mbr<float> wa32ds;
      mbr<float> a38;
      mbr<float> am38;
      mbr<float> v38;
      mbr<float> t38;
      mbr<float> h38;
      mbr<float> p38;
      mbr<float> ts38;
      mbr<float> ps38;
      mbr<float> t39;
      mbr<float> h39;
      mbr<float> p39;
      mbr<float> ts39;
      mbr<float> v39;
      mbr<float> am39;
      mbr<float> a39;
      mbr<float> bprint;
      mbr<float> wg37;
      mbr<float> cvdwng;
      mbr<float> fgmwng;
      mbr<float> fgpwng;
      mbr<float> fnwing;
      mbr<float> fnmain;
      mbr<float> fwovfn;
      mbr<float> ps39;
      mbr<float> ffovfn;
      mbr<float> fcovfn;
      mbr<float> fmnofn;
      mbr<float> fnovfd;
      mbr<float> vjw;
      mbr<float> t22;
      mbr<float> p22;
      mbr<float> h22;
      mbr<float> s22;
      mbr<float> t50;
      mbr<float> p50;
      mbr<float> h50;
      all4.allocate(), wg6, wfa, wg7, far7, etaa, dpaft, v55, v25,
        ps6, v6, am6, ts7, ps7, v7, am7, am25, ts8, ps8, v8, am8,
        ts9, ps9, v9, am9, va, frd, vjd, fgmd, vjm, fgmm, fgpd, fgpm,
        fgm, fgp, wft, wgt, fart, fg, fn, sfc, wa32, dpwgds,
        equivalence(dpwing, xzero)
          .align<2>()
           .with<1>(),
        wa32ds, a38, am38, v38, t38, h38, p38, ts38, ps38, t39, h39,
          p39, ts39, v39, am39, a39, bprint, wg37, cvdwng, fgmwng,
          fgpwng, fnwing, fnmain, fwovfn, ps39, ffovfn, fcovfn,
          fmnofn, fnovfd, vjw, t22, p22, h22, s22, t50, p50, h50
      ;
    }
  }
  /* float const& wg6 */ all4.bind<float>();
  /* float const& wfa */ all4.bind<float>();
  /* float const& wg7 */ all4.bind<float>();
  /* float const& far7 */ all4.bind<float>();
  /* float const& etaa */ all4.bind<float>();
  /* float const& dpaft */ all4.bind<float>();
  /* float const& v55 */ all4.bind<float>();
  /* float const& v25 */ all4.bind<float>();
  /* float const& ps6 */ all4.bind<float>();
  /* float const& v6 */ all4.bind<float>();
  /* float const& am6 */ all4.bind<float>();
  /* float const& ts7 */ all4.bind<float>();
  /* float const& ps7 */ all4.bind<float>();
  /* float const& v7 */ all4.bind<float>();
  /* float const& am7 */ all4.bind<float>();
  /* float const& am25 */ all4.bind<float>();
  /* float const& ts8 */ all4.bind<float>();
  /* float const& ps8 */ all4.bind<float>();
  /* float const& v8 */ all4.bind<float>();
  /* float const& am8 */ all4.bind<float>();
  /* float const& ts9 */ all4.bind<float>();
  /* float const& ps9 */ all4.bind<float>();
  /* float const& v9 */ all4.bind<float>();
  /* float const& am9 */ all4.bind<float>();
  /* float const& va */ all4.bind<float>();
  /* float const& frd */ all4.bind<float>();
  /* float const& vjd */ all4.bind<float>();
  /* float const& fgmd */ all4.bind<float>();
  /* float const& vjm */ all4.bind<float>();
  /* float const& fgmm */ all4.bind<float>();
  /* float const& fgpd */ all4.bind<float>();
  /* float const& fgpm */ all4.bind<float>();
  /* float const& fgm */ all4.bind<float>();
  /* float const& fgp */ all4.bind<float>();
  /* float const& wft */ all4.bind<float>();
  /* float const& wgt */ all4.bind<float>();
  /* float const& fart */ all4.bind<float>();
  /* float const& fg */ all4.bind<float>();
  /* float const& fn */ all4.bind<float>();
  /* float const& sfc */ all4.bind<float>();
  float const& wa32 = all4.bind<float>();
  float const& dpwgds = all4.bind<float>();
  float& dpwing = all4.bind<float>();
  arr_ref<float> xzero(all4.bind<float>(), dimension(26));
  float& wa32ds = all4.bind<float>();
  float const& a38 = all4.bind<float>();
  float const& am38 = all4.bind<float>();
  float const& v38 = all4.bind<float>();
  float const& t38 = all4.bind<float>();
  float const& h38 = all4.bind<float>();
  float const& p38 = all4.bind<float>();
  float const& ts38 = all4.bind<float>();
  float const& ps38 = all4.bind<float>();
  float& t39 = all4.bind<float>();
  float& h39 = all4.bind<float>();
  float& p39 = all4.bind<float>();
  float& ts39 = all4.bind<float>();
  float& v39 = all4.bind<float>();
  float& am39 = all4.bind<float>();
  float& a39 = all4.bind<float>();
  float& bprint = all4.bind<float>();
  float& wg37 = all4.bind<float>();
  float& cvdwng = all4.bind<float>();
  /* float const& fgmwng */ all4.bind<float>();
  /* float const& fgpwng */ all4.bind<float>();
  /* float const& fnwing */ all4.bind<float>();
  /* float const& fnmain */ all4.bind<float>();
  /* float const& fwovfn */ all4.bind<float>();
  float& ps39 = all4.bind<float>();
  /* float const& ffovfn */ all4.bind<float>();
  /* float const& fcovfn */ all4.bind<float>();
  /* float const& fmnofn */ all4.bind<float>();
  /* float const& fnovfd */ all4.bind<float>();
  /* float const& vjw */ all4.bind<float>();
  /* float const& t22 */ all4.bind<float>();
  /* float const& p22 */ all4.bind<float>();
  /* float const& h22 */ all4.bind<float>();
  /* float const& s22 */ all4.bind<float>();
  /* float const& t50 */ all4.bind<float>();
  /* float const& p50 */ all4.bind<float>();
  /* float const& h50 */ all4.bind<float>();
  if (is_called_first_time) {
    aword = "WDUCTI";
  }
  float ra = fem::float0;
  float aj = fem::float0;
  float xzers = fem::float0;
  int i = fem::int0;
  float p32 = fem::float0;
  float h32 = fem::float0;
  float t32 = fem::float0;
  float wa32c = fem::float0;
  float dpming = fem::float0;
  float p36 = fem::float0;
  float t36 = fem::float0;
  float h36 = fem::float0;
  float s36 = fem::float0;
  float xx2 = fem::float0;
  float t37 = fem::float0;
  float p37 = fem::float0;
  float h37 = fem::float0;
  float s37 = fem::float0;
  float vmduct = fem::float0;
  arr_1d<9, float> q(fem::fill0);
  float wg37p = fem::float0;
  float h37p = fem::float0;
  float p37dot = fem::float0;
  float vwouct = fem::float0;
  float wg3t = fem::float0;
  float u37 = fem::float0;
  float u3t = fem::float0;
  float u37dot = fem::float0;
  float u3tdot = fem::float0;
  float h37x = fem::float0;
  float errw = fem::float0;
  float h3tx = fem::float0;
  float dir = fem::float0;
  float t37t = fem::float0;
  int igo = fem::int0;
  int nozd = fem::int0;
  float t3t = fem::float0;
  float pi = fem::float0;
  float p38r = fem::float0;
  float s3b = fem::float0;
  float am3b = fem::float0;
  int icon = fem::int0;
  float s38 = fem::float0;
  float s39 = fem::float0;
  //C
  //C        Performs third-stream (wing) duct calculations
  //C        (not used in two-stream engines)
  //C
  cmn.word = aword;
  //C
  if (cmn.si) {
    goto statement_100;
  }
  ra = .0252f;
  aj = 2.719f;
  goto statement_101;
  statement_100:
  ra = 286.9f;
  aj = 1.0f;
  statement_101:
  if (cmn.pcblid > 0.1f) {
    goto statement_3;
  }
  xzers = cvdwng;
  FEM_DO_SAFE(i, 1, 26) {
    xzero(i) = 0.0f;
  }
  cvdwng = xzers;
  return;
  statement_3:
  //C
  p32 = cmn.p21;
  h32 = cmn.h21;
  t32 = cmn.t21;
  bprint = wa32 / cmn.wac;
  wa32c = wa32 * fem::sqrt(t32) / p32;
  if (ides == 1) {
    wa32ds = wa32c;
  }
  dpwing = dpwgds * wa32c / wa32ds;
  dpwing = fem::amin1(1.f, dpwing);
  p36 = p32 * (1.f - dpming);
  t36 = t32;
  h36 = h32;
  thermo(p36, h36, t36, s36, xx2, 1, 0.0f, 0);
  wg37 = wa32;
  t37 = t36;
  p37 = p36;
  h37 = h36;
  s37 = s36;
  if (vmduct == 0.0f) {
    goto statement_21;
  }
  q(2) = 0.0f;
  q(3) = 0.0f;
  wg37p = wg37;
  h37p = h37;
  p37dot = deriv(22, p37);
  statement_18:
  therm(p37, h37, t37, s37, xx2, 1, 0.0f, 0);
  wg3t = wg37p - p37dot * vwouct / t37 / 1.4f * ra;
  u37 = h37 - ra * aj * t37;
  u37dot = deriv(23, u3t);
  h37x = (wg37p * h37p - (wg37p - wg37) * u37 - u3tdot * p37 *
    cmn.vwduct / t37 * ra) / wg37;
  errw = (h37 - h37x) / h37;
  dir = fem::sqrt(fem::abs(h37 / h3tx));
  afquir(q(1), t37, errw, 0.0f, 20.0f, 0.0001f, dir, t37t, igo);
  switch (igo) {
    case 1: goto statement_19;
    case 2: goto statement_21;
    case 3: goto statement_20;
    default: break;
  }
  statement_19:
  t37 = t37t;
  goto statement_18;
  statement_20:
  error();
  statement_21:
  nozd = 0;
  convrg(t3t, h37, p37, s37, 0.0f, wg37, pi, ides, a38, p38r, t38,
    h38, p38, s3b, ts38, ps38, v38, am3b, icon);
  switch (icon) {
    case 1: goto statement_5;
    case 2: goto statement_5;
    case 3: goto statement_5;
    case 4: goto statement_4;
    default: break;
  }
  statement_4:
  error();
  statement_5:
  t39 = t38;
  h39 = h38;
  p39 = p38;
  s39 = s38;
  ts39 = ts38;
  v39 = v38;
  am39 = am38;
  a39 = a38;
  ps39 = ps38;
  cmn.idshoc = icon + 3;
  err(7) = (p38r - p38) / p38r;
  if (ides == 1) {
    write(6,
      "('OINTER DUCT DESIGN',5x,'    A38=',e15.8,'   AM38=',e15.8,'    A39=',"
      "e16.8)"),
      a38, am38, a39, am39;
  }
  //C
}

} // namespace BASIC_ENG
