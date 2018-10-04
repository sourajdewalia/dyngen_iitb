#include <fem.hpp> // Fortran EMulation library of fable module

namespace BASIC_ENG {

using namespace fem::major_types;

void
syg(...)
{
  throw std::runtime_error(
    "Missing function implementation: syg");
}

struct common_woros
{
  float word;

  common_woros() :
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
  float gasmx;
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
    gasmx(fem::float0),
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
  float pcnfos;
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
  float dtduos;
  float etadds;
  float wa23ds;
  float dpduds;
  float dtducf;
  float etadcf;
  float t7ds;
  float wfads;
  float dtafds;
  float eteads;
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
    pcnfos(fem::float0),
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
    dtduos(fem::float0),
    etadds(fem::float0),
    wa23ds(fem::float0),
    dpduds(fem::float0),
    dtducf(fem::float0),
    etadcf(fem::float0),
    t7ds(fem::float0),
    wfads(fem::float0),
    dtafds(fem::float0),
    eteads(fem::float0),
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
  float fghd;
  float vjm;
  float fgmm;
  float fgpd;
  float fgpm;
  float fgm;
  float fgp;
  float wft;
  int ngt;
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
  float t538;
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
  float fgpwig;
  float fnwing;
  float fnmain;
  float fwovfn;
  float ps39;
  float ffovfn;
  float fcovfn;
  float fmnofn;
  float fnovfd;
  float vjn;
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
    fghd(fem::float0),
    vjm(fem::float0),
    fgmm(fem::float0),
    fgpd(fem::float0),
    fgpm(fem::float0),
    fgm(fem::float0),
    fgp(fem::float0),
    wft(fem::float0),
    ngt(fem::int0),
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
    t538(fem::float0),
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
    fgpwig(fem::float0),
    fnwing(fem::float0),
    fnmain(fem::float0),
    fwovfn(fem::float0),
    ps39(fem::float0),
    ffovfn(fem::float0),
    fcovfn(fem::float0),
    fmnofn(fem::float0),
    fnovfd(fem::float0),
    vjn(fem::float0),
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
  float pcn;
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
  float fipds;
  float cnpds;
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
  float fxfn2;
  float fxm2cp;
  float aftfan;
  float punt;
  float pcblid;
  float p6osav;
  float am6dsv;
  float etaasv;
  float far75v;
  float t4pbl;
  float t41;
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
    fipds(fem::float0),
    cnpds(fem::float0),
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
    fxfn2(fem::float0),
    fxm2cp(fem::float0),
    aftfan(fem::float0),
    punt(fem::float0),
    pcblid(fem::float0),
    p6osav(fem::float0),
    am6dsv(fem::float0),
    etaasv(fem::float0),
    far75v(fem::float0),
    t4pbl(fem::float0),
    t41(fem::float0),
    fan(fem::float0),
    ispool(fem::int0)
  {}
};

struct common :
  fem::common,
  common_woros,
  common_design,
  common_all1,
  common_all4,
  common_all5
{
  fem::variant_core common_all2;
  fem::variant_core common_all3;
  fem::cmn_sve zero_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct zero_save
{
  fem::variant_bindings all2_bindings;
  fem::variant_bindings all3_bindings;
};

void
zero(
  common& cmn)
{
  FEM_CMN_SVE(zero);
  common_variant all2(cmn.common_all2, sve.all2_bindings);
  common_variant all3(cmn.common_all3, sve.all3_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> t1;
      mbr<float> z1(dimension(63));
      mbr<float> p1;
      mbr<float> z2(dimension(48));
      mbr<float> h1;
      mbr<float> s1;
      mbr<float> t2;
      mbr<float> p2;
      mbr<float> h2;
      mbr<float> s2;
      mbr<float> t21;
      mbr<float> p21;
      mbr<float> h21;
      mbr<float> s21;
      mbr<float> t3;
      mbr<float> p3;
      mbr<float> h3;
      mbr<float> s3;
      mbr<float> t4;
      mbr<float> p4;
      mbr<float> h4;
      mbr<float> s4;
      mbr<float> t5;
      mbr<float> p5;
      mbr<float> h5;
      mbr<float> s5;
      mbr<float> t55;
      mbr<float> p55;
      mbr<float> h55;
      mbr<float> s55;
      mbr<float> blf;
      mbr<float> blc;
      mbr<float> bldu;
      mbr<float> blob;
      mbr<float> cnf;
      mbr<float> prf;
      mbr<float> etaf;
      mbr<float> wafc;
      mbr<float> waf;
      mbr<float> wa3;
      mbr<float> wg4;
      mbr<float> far4;
      mbr<float> cnc;
      mbr<float> prc;
      mbr<float> etac;
      mbr<float> wacc;
      mbr<float> wac;
      mbr<float> etab;
      mbr<float> dpcom;
      mbr<float> dump;
      mbr<float> cnhp;
      mbr<float> etathp;
      mbr<float> dhtchp;
      mbr<float> dhtc;
      mbr<float> blhp;
      mbr<float> wg5;
      mbr<float> far5;
      mbr<float> cs;
      mbr<float> cnlp;
      mbr<float> etatlp;
      mbr<float> dhtclp;
      mbr<float> dhtf;
      mbr<float> bllp;
      mbr<float> wg55;
      mbr<float> far55;
      mbr<float> hpext;
      mbr<float> am;
      mbr<float> altp;
      mbr<float> etar;
      mbr<float> zf;
      mbr<float> pcnf;
      mbr<float> zc;
      mbr<float> pcnc;
      mbr<float> wfb;
      mbr<float> tffhp;
      mbr<float> tfflp;
      mbr<float> pcblf;
      mbr<float> pcblc;
      mbr<float> pcbldu;
      mbr<float> pcblo;
      mbr<float> pcblhp;
      mbr<float> pcbllp;
      all2.allocate(),
        equivalence(t1, z1)
          .align<2>()
           .with<1>(),
        equivalence(p1, z2)
          .align<2>()
           .with<1>(),
        h1, s1, t2, p2, h2, s2, t21, p21, h21, s21, t3, p3, h3, s3,
          t4, p4, h4, s4, t5, p5, h5, s5, t55, p55, h55, s55, blf,
          blc, bldu, blob, cnf, prf, etaf, wafc, waf, wa3, wg4, far4,
          cnc, prc, etac, wacc, wac, etab, dpcom, dump, cnhp, etathp,
          dhtchp, dhtc, blhp, wg5, far5, cs, cnlp, etatlp, dhtclp,
          dhtf, bllp, wg55, far55, hpext, am, altp, etar, zf, pcnf,
          zc, pcnc, wfb, tffhp, tfflp, pcblf, pcblc, pcbldu, pcblo,
          pcblhp, pcbllp
      ;
    }
    {
      mbr<float> xp1;
      mbr<float> xwaf;
      mbr<float> xmac;
      mbr<float> xblf;
      mbr<float> xbldu;
      mbr<float> xh3;
      mbr<float> dums1;
      mbr<float> dums2;
      mbr<float> xt21;
      mbr<float> xp21;
      mbr<float> xh21;
      mbr<float> xs21;
      mbr<float> t23;
      mbr<float> p23;
      mbr<float> h23;
      mbr<float> s23;
      mbr<float> t24;
      mbr<float> p24;
      mbr<float> h24;
      mbr<float> s24;
      mbr<float> t25;
      mbr<float> p25;
      mbr<float> h25;
      mbr<float> s25;
      mbr<float> t28;
      mbr<float> p28;
      mbr<float> h28;
      mbr<float> s28;
      mbr<float> t29;
      mbr<float> p29;
      mbr<float> h29;
      mbr<float> s29;
      mbr<float> wad;
      mbr<float> wfd;
      mbr<float> wg24;
      mbr<float> far24;
      mbr<float> etad;
      mbr<float> dpduc;
      mbr<float> bypass;
      mbr<float> dums3;
      mbr<float> ts28;
      mbr<float> ps28;
      mbr<float> v28;
      mbr<float> am28;
      mbr<float> ts29;
      mbr<float> ps29;
      mbr<float> v29;
      mbr<float> am29;
      mbr<float> xt55;
      mbr<float> z3(dimension(10));
      mbr<float> xp55;
      mbr<float> xh55;
      mbr<float> xs55;
      mbr<float> xt25;
      mbr<float> xp25;
      mbr<float> xh25;
      mbr<float> xs25;
      mbr<float> xwfb;
      mbr<float> xwg55;
      mbr<float> xfar55;
      mbr<float> z4(dimension(62));
      mbr<float> xwfd;
      mbr<float> xwg24;
      mbr<float> xfar24;
      mbr<float> xxp1;
      mbr<float> dumb;
      mbr<float> t6;
      mbr<float> p6;
      mbr<float> h6;
      mbr<float> s6;
      mbr<float> t7;
      mbr<float> p7;
      mbr<float> h7;
      mbr<float> s7;
      mbr<float> t8;
      mbr<float> p8;
      mbr<float> h8;
      mbr<float> s8;
      mbr<float> t9;
      mbr<float> p9;
      mbr<float> h9;
      mbr<float> s9;
      all3.allocate(), xp1, xwaf, xmac, xblf, xbldu, xh3, dums1, dums2,
        xt21, xp21, xh21, xs21, t23, p23, h23, s23, t24, p24, h24, s24,
        t25, p25, h25, s25, t28, p28, h28, s28, t29, p29, h29, s29,
        wad, wfd, wg24, far24, etad, dpduc, bypass, dums3, ts28, ps28,
        v28, am28, ts29, ps29, v29, am29,
        equivalence(xt55, z3)
          .align<2>()
           .with<1>(),
        xp55, xh55, xs55, xt25, xp25, xh25, xs25, xwfb, xwg55,
        equivalence(xfar55, z4)
          .align<2>()
           .with<1>(),
        xwfd, xwg24, xfar24, xxp1, dumb, t6, p6, h6, s6, t7, p7, h7,
          s7, t8, p8, h8, s8, t9, p9, h9, s9
      ;
    }
  }
  /* float& t1 */ all2.bind<float>();
  arr_ref<float> z1(all2.bind<float>(), dimension(63));
  /* float& p1 */ all2.bind<float>();
  arr_ref<float> z2(all2.bind<float>(), dimension(48));
  /* float const& h1 */ all2.bind<float>();
  /* float const& s1 */ all2.bind<float>();
  float& t2 = all2.bind<float>();
  float& p2 = all2.bind<float>();
  /* float const& h2 */ all2.bind<float>();
  /* float const& s2 */ all2.bind<float>();
  /* float const& t21 */ all2.bind<float>();
  /* float const& p21 */ all2.bind<float>();
  /* float const& h21 */ all2.bind<float>();
  /* float const& s21 */ all2.bind<float>();
  /* float const& t3 */ all2.bind<float>();
  /* float const& p3 */ all2.bind<float>();
  /* float const& h3 */ all2.bind<float>();
  /* float const& s3 */ all2.bind<float>();
  float& t4 = all2.bind<float>();
  /* float const& p4 */ all2.bind<float>();
  /* float const& h4 */ all2.bind<float>();
  /* float const& s4 */ all2.bind<float>();
  /* float const& t5 */ all2.bind<float>();
  /* float const& p5 */ all2.bind<float>();
  /* float const& h5 */ all2.bind<float>();
  /* float const& s5 */ all2.bind<float>();
  /* float const& t55 */ all2.bind<float>();
  /* float const& p55 */ all2.bind<float>();
  /* float const& h55 */ all2.bind<float>();
  /* float const& s55 */ all2.bind<float>();
  /* float const& blf */ all2.bind<float>();
  /* float const& blc */ all2.bind<float>();
  /* float const& bldu */ all2.bind<float>();
  /* float const& blob */ all2.bind<float>();
  /* float const& cnf */ all2.bind<float>();
  /* float const& prf */ all2.bind<float>();
  /* float const& etaf */ all2.bind<float>();
  /* float const& wafc */ all2.bind<float>();
  /* float const& waf */ all2.bind<float>();
  /* float const& wa3 */ all2.bind<float>();
  /* float const& wg4 */ all2.bind<float>();
  /* float const& far4 */ all2.bind<float>();
  /* float const& cnc */ all2.bind<float>();
  /* float const& prc */ all2.bind<float>();
  /* float const& etac */ all2.bind<float>();
  /* float const& wacc */ all2.bind<float>();
  /* float const& wac */ all2.bind<float>();
  /* float const& etab */ all2.bind<float>();
  /* float const& dpcom */ all2.bind<float>();
  /* float const& dump */ all2.bind<float>();
  /* float const& cnhp */ all2.bind<float>();
  /* float const& etathp */ all2.bind<float>();
  /* float const& dhtchp */ all2.bind<float>();
  /* float const& dhtc */ all2.bind<float>();
  /* float const& blhp */ all2.bind<float>();
  /* float const& wg5 */ all2.bind<float>();
  /* float const& far5 */ all2.bind<float>();
  /* float const& cs */ all2.bind<float>();
  /* float const& cnlp */ all2.bind<float>();
  /* float const& etatlp */ all2.bind<float>();
  /* float const& dhtclp */ all2.bind<float>();
  /* float const& dhtf */ all2.bind<float>();
  /* float const& bllp */ all2.bind<float>();
  /* float const& wg55 */ all2.bind<float>();
  /* float const& far55 */ all2.bind<float>();
  /* float const& hpext */ all2.bind<float>();
  /* float const& am */ all2.bind<float>();
  /* float const& altp */ all2.bind<float>();
  /* float const& etar */ all2.bind<float>();
  /* float const& zf */ all2.bind<float>();
  /* float const& pcnf */ all2.bind<float>();
  /* float const& zc */ all2.bind<float>();
  /* float const& pcnc */ all2.bind<float>();
  /* float const& wfb */ all2.bind<float>();
  /* float const& tffhp */ all2.bind<float>();
  /* float const& tfflp */ all2.bind<float>();
  /* float const& pcblf */ all2.bind<float>();
  /* float const& pcblc */ all2.bind<float>();
  /* float const& pcbldu */ all2.bind<float>();
  /* float const& pcblo */ all2.bind<float>();
  /* float const& pcblhp */ all2.bind<float>();
  /* float const& pcbllp */ all2.bind<float>();
  /* float const& xp1 */ all3.bind<float>();
  /* float const& xwaf */ all3.bind<float>();
  /* float const& xmac */ all3.bind<float>();
  /* float const& xblf */ all3.bind<float>();
  /* float const& xbldu */ all3.bind<float>();
  /* float const& xh3 */ all3.bind<float>();
  /* float const& dums1 */ all3.bind<float>();
  /* float const& dums2 */ all3.bind<float>();
  /* float const& xt21 */ all3.bind<float>();
  /* float const& xp21 */ all3.bind<float>();
  /* float const& xh21 */ all3.bind<float>();
  /* float const& xs21 */ all3.bind<float>();
  /* float const& t23 */ all3.bind<float>();
  /* float const& p23 */ all3.bind<float>();
  /* float const& h23 */ all3.bind<float>();
  /* float const& s23 */ all3.bind<float>();
  /* float const& t24 */ all3.bind<float>();
  /* float const& p24 */ all3.bind<float>();
  /* float const& h24 */ all3.bind<float>();
  /* float const& s24 */ all3.bind<float>();
  /* float const& t25 */ all3.bind<float>();
  /* float const& p25 */ all3.bind<float>();
  /* float const& h25 */ all3.bind<float>();
  /* float const& s25 */ all3.bind<float>();
  /* float const& t28 */ all3.bind<float>();
  /* float const& p28 */ all3.bind<float>();
  /* float const& h28 */ all3.bind<float>();
  /* float const& s28 */ all3.bind<float>();
  /* float const& t29 */ all3.bind<float>();
  /* float const& p29 */ all3.bind<float>();
  /* float const& h29 */ all3.bind<float>();
  /* float const& s29 */ all3.bind<float>();
  /* float const& wad */ all3.bind<float>();
  /* float const& wfd */ all3.bind<float>();
  /* float const& wg24 */ all3.bind<float>();
  /* float const& far24 */ all3.bind<float>();
  /* float const& etad */ all3.bind<float>();
  /* float const& dpduc */ all3.bind<float>();
  /* float const& bypass */ all3.bind<float>();
  /* float const& dums3 */ all3.bind<float>();
  /* float const& ts28 */ all3.bind<float>();
  /* float const& ps28 */ all3.bind<float>();
  /* float const& v28 */ all3.bind<float>();
  /* float const& am28 */ all3.bind<float>();
  /* float const& ts29 */ all3.bind<float>();
  /* float const& ps29 */ all3.bind<float>();
  /* float const& v29 */ all3.bind<float>();
  /* float const& am29 */ all3.bind<float>();
  /* float& xt55 */ all3.bind<float>();
  arr_ref<float> z3(all3.bind<float>(), dimension(10));
  /* float const& xp55 */ all3.bind<float>();
  /* float const& xh55 */ all3.bind<float>();
  /* float const& xs55 */ all3.bind<float>();
  /* float const& xt25 */ all3.bind<float>();
  /* float const& xp25 */ all3.bind<float>();
  /* float const& xh25 */ all3.bind<float>();
  /* float const& xs25 */ all3.bind<float>();
  /* float const& xwfb */ all3.bind<float>();
  /* float const& xwg55 */ all3.bind<float>();
  /* float& xfar55 */ all3.bind<float>();
  arr_ref<float> z4(all3.bind<float>(), dimension(62));
  /* float const& xwfd */ all3.bind<float>();
  /* float const& xwg24 */ all3.bind<float>();
  /* float const& xfar24 */ all3.bind<float>();
  /* float const& xxp1 */ all3.bind<float>();
  /* float const& dumb */ all3.bind<float>();
  /* float const& t6 */ all3.bind<float>();
  /* float const& p6 */ all3.bind<float>();
  /* float const& h6 */ all3.bind<float>();
  /* float const& s6 */ all3.bind<float>();
  /* float const& t7 */ all3.bind<float>();
  /* float const& p7 */ all3.bind<float>();
  /* float const& h7 */ all3.bind<float>();
  /* float const& s7 */ all3.bind<float>();
  /* float const& t8 */ all3.bind<float>();
  /* float const& p8 */ all3.bind<float>();
  /* float const& h8 */ all3.bind<float>();
  /* float const& s8 */ all3.bind<float>();
  /* float const& t9 */ all3.bind<float>();
  /* float const& p9 */ all3.bind<float>();
  /* float const& h9 */ all3.bind<float>();
  /* float const& s9 */ all3.bind<float>();
  //C
  //C        Zeros nearly all of common and certain controls
  //C
  cmn.ides = 0;
  cmn.jdes = 0;
  cmn.init = 0;
  cmn.idburn = 0;
  float aftbn = 0;
  cmn.idshoc = 3;
  cmn.imshoc = 3;
  cmn.nozflt = 0;
  float t2q = t2;
  float p2q = p2;
  float t4q = t4;
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, 63) {
    z1(i) = 0.f;
  }
  FEM_DO_SAFE(i, 1, 48) {
    z2(i) = 0.f;
  }
  FEM_DO_SAFE(i, 1, 10) {
    z3(i) = 0.f;
  }
  FEM_DO_SAFE(i, 1, 62) {
    z4(i) = 0.f;
  }
  //C
  t2 = t2q;
  p2 = p2q;
  t4 = t4q;
  syg(1);
}

} // namespace BASIC_ENG
