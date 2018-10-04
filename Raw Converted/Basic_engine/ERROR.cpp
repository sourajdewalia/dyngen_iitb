#include <fem.hpp> // Fortran EMulation library of fable module

namespace BASIC_ENG {

using namespace fem::major_types;

void
engbal(...)
{
  throw std::runtime_error(
    "Missing function implementation: engbal");
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

struct common_desgn
{
  int ides;
  int jdes;
  int koes;
  int mode;
  int init;
  int idump;
  int iamtp;
  float gaswx;
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

  common_desgn() :
    ides(fem::int0),
    jdes(fem::int0),
    koes(fem::int0),
    mode(fem::int0),
    init(fem::int0),
    idump(fem::int0),
    iamtp(fem::int0),
    gaswx(fem::float0),
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
  float xs2s;
  float xwfb;
  float xwg55;
  float xfar55;
  float xwfd;
  float xwg26;
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
    xs2s(fem::float0),
    xwfb(fem::float0),
    xwg55(fem::float0),
    xfar55(fem::float0),
    xwfd(fem::float0),
    xwg26(fem::float0),
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
  common_desgn,
  common_all3,
  common_whrerr,
  common_erer
{
  fem::variant_core common_all1;
  fem::variant_core common_all2;
  fem::variant_core common_all4;
  fem::variant_core common_all5;
  fem::cmn_sve error_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct error_save
{
  fem::variant_bindings all1_bindings;
  fem::variant_bindings all2_bindings;
  fem::variant_bindings all4_bindings;
  fem::variant_bindings all5_bindings;
  float aword;

  error_save() :
    aword(fem::float0)
  {}
};

void
error(
  common& cmn)
{
  FEM_CMN_SVE(error);
  common_write write(cmn);
  float& word = cmn.word;
  int& icoafb = cmn.icoafb;
  int& icoduc = cmn.icoduc;
  //
  common_variant all1(cmn.common_all1, sve.all1_bindings);
  common_variant all2(cmn.common_all2, sve.all2_bindings);
  common_variant all4(cmn.common_all4, sve.all4_bindings);
  common_variant all5(cmn.common_all5, sve.all5_bindings);
  float& aword = sve.aword;
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> pcnfgu;
      mbr<float> trash1(dimension(80));
      mbr<float> pcncgu;
      mbr<float> t4gu;
      mbr<float> dumd1;
      mbr<float> dund2;
      mbr<float> delfg;
      mbr<float> delfn;
      mbr<float> delsfc;
      mbr<float> zfos;
      mbr<float> pcnfos;
      mbr<float> prfds;
      mbr<float> etafds;
      mbr<float> wafds;
      mbr<float> prfcf;
      mbr<float> etafcf;
      mbr<float> wafcf;
      mbr<float> zcds;
      mbr<float> pcncds;
      mbr<float> prcds;
      mbr<float> etacdswacds;
      mbr<float> wprccf;
      mbr<float> etaccf;
      mbr<float> waccf;
      mbr<float> t4ds;
      mbr<float> wfbds;
      mbr<float> dtcods;
      mbr<float> etabds;
      mbr<float> wa3cds;
      mbr<float> dpcods;
      mbr<float> dtcocf;
      mbr<float> etabcf;
      mbr<float> tfhpds;
      mbr<float> cnhpds;
      mbr<float> ethpds;
      mbr<float> tfhpcf;
      mbr<float> cnhpcf;
      mbr<float> ethpcf;
      mbr<float> ohhpcf;
      mbr<float> t2ds;
      mbr<float> tflpds;
      mbr<float> cnlpds;
      mbr<float> etlpds;
      mbr<float> tflpcf;
      mbr<float> cnlpcf;
      mbr<float> etlpcf;
      mbr<float> dhlpcf;
      mbr<float> t21ds;
      mbr<float> t24ds;
      mbr<float> wfdds;
      mbr<float> dtduds;
      mbr<float> etadds;
      mbr<float> wa23ds;
      mbr<float> dpduos;
      mbr<float> dtducf;
      mbr<float> etadcf;
      mbr<float> t7ds;
      mbr<float> wfads;
      mbr<float> otafds;
      mbr<float> etaads;
      mbr<float> wg6cds;
      mbr<float> dpafds;
      mbr<float> dtafcf;
      mbr<float> etaacf;
      mbr<float> a55;
      mbr<float> a25;
      mbr<float> a6;
      mbr<float> a7;
      mbr<float> a8;
      mbr<float> a9;
      mbr<float> a28;
      mbr<float> a29;
      mbr<float> ps55;
      mbr<float> am55;
      mbr<float> cvonoz;
      mbr<float> cvmnoz;
      mbr<float> absav;
      mbr<float> a9sav;
      mbr<float> a28sav;
      mbr<float> a29sav;
      all1.allocate(),
        equivalence(pcnfgu, trash1)
          .align<2>()
           .with<1>(),
        pcncgu, t4gu, dumd1, dund2, delfg, delfn, delsfc, zfos,
          pcnfos, prfds, etafds, wafds, prfcf, etafcf, wafcf, zcds,
          pcncds, prcds, etacdswacds, wprccf, etaccf, waccf, t4ds,
          wfbds, dtcods, etabds, wa3cds, dpcods, dtcocf, etabcf,
          tfhpds, cnhpds, ethpds, tfhpcf, cnhpcf, ethpcf, ohhpcf,
          t2ds, tflpds, cnlpds, etlpds, tflpcf, cnlpcf, etlpcf,
          dhlpcf, t21ds, t24ds, wfdds, dtduds, etadds, wa23ds,
          dpduos, dtducf, etadcf, t7ds, wfads, otafds, etaads,
          wg6cds, dpafds, dtafcf, etaacf, a55, a25, a6, a7, a8, a9,
          a28, a29, ps55, am55, cvonoz, cvmnoz, absav, a9sav, a28sav,
          a29sav
      ;
    }
    {
      mbr<float> t1;
      mbr<float> trash2(dimension(80));
      mbr<float> p1;
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
      mbr<float> wa4;
      mbr<float> far4;
      mbr<float> cnc;
      mbr<float> prc;
      mbr<float> etac;
      mbr<float> wacc;
      mbr<float> wac;
      mbr<float> etab;
      mbr<float> dpcdm;
      mbr<float> dump;
      mbr<float> cnhp;
      mbr<float> etathp;
      mbr<float> dhtchp;
      mbr<float> dhtc;
      mbr<float> blmp;
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
      mbr<float> pcblob;
      mbr<float> pcblhp;
      mbr<float> pcbllp;
      all2.allocate(),
        equivalence(t1, trash2)
          .align<2>()
           .with<1>(),
        p1, h1, s1, t2, p2, h2, s2, t21, p21, h21, s21, t3, p3, h3,
          s3, t4, p4, h4, s4, t5, p5, h5, s5, t55, p55, h55, s55,
          blf, blc, bldu, blob, cnf, prf, etaf, wafc, waf, wa3, wa4,
          far4, cnc, prc, etac, wacc, wac, etab, dpcdm, dump, cnhp,
          etathp, dhtchp, dhtc, blmp, wg5, far5, cs, cnlp, etatlp,
          dhtclp, dhtf, bllp, wg55, far55, hpext, am, altp, etar, zf,
          pcnf, zc, pcnc, wfb, tffhp, tfflp, pcblf, pcblc, pcbldu,
          pcblob, pcblhp, pcbllp
      ;
    }
    {
      mbr<float> wg6;
      mbr<float> trash4(dimension(80));
      mbr<float> wfa;
      mbr<float> wg7;
      mbr<float> fart7;
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
      mbr<float> fgnm;
      mbr<float> fgpd;
      mbr<float> fgpm;
      mbr<float> fgm;
      mbr<float> fgp;
      mbr<int> mft;
      mbr<int> mgt;
      mbr<float> fart;
      mbr<float> fg;
      mbr<float> fn;
      mbr<float> sfc;
      mbr<float> aw32;
      mbr<float> dpwgds;
      mbr<float> dpwing;
      mbr<float> a32ds;
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
      mbr<float> ts39v39;
      mbr<float> am39;
      mbr<float> a39;
      mbr<float> bprint;
      mbr<float> wg37;
      mbr<float> vdwng;
      mbr<float> fgmwng;
      mbr<float> fgpwng;
      mbr<float> fnwing;
      mbr<float> fnmain;
      mbr<float> fnovfn;
      mbr<float> ps39;
      mbr<float> ffovfn;
      mbr<float> fcovfn;
      mbr<float> fmnofn;
      mbr<float> fnovfd;
      mbr<float> vj;
      mbr<float> t22;
      mbr<float> p22;
      mbr<float> h22;
      mbr<float> s22;
      mbr<float> t50;
      mbr<float> p50;
      mbr<float> h50;
      all4.allocate(),
        equivalence(wg6, trash4)
          .align<2>()
           .with<1>(),
        wfa, wg7, fart7, etaa, dpaft, v55, v25, ps6, v6, am6, ts7,
          ps7, v7, am7, am25, ts8, ps8, v8, am8, ts9, ps9, v9, am9,
          va, frd, vjd, fgmd, vjm, fgnm, fgpd, fgpm, fgm, fgp, mft,
          mgt, fart, fg, fn, sfc, aw32, dpwgds, dpwing, a32ds, a38,
          am38, v38, t38, h38, p38, ts38, ps38, t39, h39, p39,
          ts39v39, am39, a39, bprint, wg37, vdwng, fgmwng, fgpwng,
          fnwing, fnmain, fnovfn, ps39, ffovfn, fcovfn, fmnofn,
          fnovfd, vj, t22, p22, h22, s22, t50, p50, h50
      ;
    }
    {
      mbr<float> s50;
      mbr<float> trash5(dimension(80));
      mbr<float> a22;
      mbr<float> zi;
      mbr<float> pcni;
      mbr<float> cni;
      mbr<float> pri;
      mbr<float> etai;
      mbr<float> waci;
      mbr<float> tffip;
      mbr<float> cnip;
      mbr<float> etatip;
      mbr<float> dhtcip;
      mbr<float> dhti;
      mbr<float> blip;
      mbr<float> pcblip;
      mbr<float> pcnigu;
      mbr<float> zids;
      mbr<float> pcnids;
      mbr<float> prids;
      mbr<float> etaids;
      mbr<float> waids;
      mbr<float> pricf;
      mbr<float> etaicf;
      mbr<float> waicf;
      mbr<float> tfipds;
      mbr<float> cnipds;
      mbr<float> etipds;
      mbr<float> tfipcf;
      mbr<float> cnepcf;
      mbr<float> etipcf;
      mbr<float> dhipcf;
      mbr<float> wacds;
      mbr<float> wai;
      mbr<float> pcbli;
      mbr<float> bli;
      mbr<float> t22ds;
      mbr<float> wa21;
      mbr<float> wg50;
      mbr<float> far50;
      mbr<float> a24;
      mbr<float> am23;
      mbr<float> dumspl;
      mbr<float> fxfn2m;
      mbr<float> fxm2cp;
      mbr<float> aftfan;
      mbr<float> punt;
      mbr<float> pcblid;
      mbr<float> p6dsav;
      mbr<float> am6osv;
      mbr<float> etaasv;
      mbr<float> far7sv;
      mbr<float> t4pbl;
      mbr<float> t41;
      mbr<float> fan;
      mbr<int> ispool;
      all5.allocate(),
        equivalence(s50, trash5)
          .align<2>()
           .with<1>(),
        a22, zi, pcni, cni, pri, etai, waci, tffip, cnip, etatip,
          dhtcip, dhti, blip, pcblip, pcnigu, zids, pcnids, prids,
          etaids, waids, pricf, etaicf, waicf, tfipds, cnipds,
          etipds, tfipcf, cnepcf, etipcf, dhipcf, wacds, wai, pcbli,
          bli, t22ds, wa21, wg50, far50, a24, am23, dumspl, fxfn2m,
          fxm2cp, aftfan, punt, pcblid, p6dsav, am6osv, etaasv,
          far7sv, t4pbl, t41, fan, ispool
      ;
    }
  }
  local_equivalences loc_equivalences;
  {
    using fem::mbr; // member
    mbr<float> trash3(dimension(80));
    mbr<float> xpi;
    loc_equivalences.allocate(),
      equivalence(trash3, xpi)
        .align<1>()
         .with<2>()
    ;
  }
  /* float const& pcnfgu */ all1.bind<float>();
  arr_cref<float> trash1(all1.bind<float>(), dimension(80));
  /* float const& pcncgu */ all1.bind<float>();
  /* float const& t4gu */ all1.bind<float>();
  /* float const& dumd1 */ all1.bind<float>();
  /* float const& dund2 */ all1.bind<float>();
  /* float const& delfg */ all1.bind<float>();
  /* float const& delfn */ all1.bind<float>();
  /* float const& delsfc */ all1.bind<float>();
  /* float const& zfos */ all1.bind<float>();
  /* float const& pcnfos */ all1.bind<float>();
  /* float const& prfds */ all1.bind<float>();
  /* float const& etafds */ all1.bind<float>();
  /* float const& wafds */ all1.bind<float>();
  /* float const& prfcf */ all1.bind<float>();
  /* float const& etafcf */ all1.bind<float>();
  /* float const& wafcf */ all1.bind<float>();
  /* float const& zcds */ all1.bind<float>();
  /* float const& pcncds */ all1.bind<float>();
  /* float const& prcds */ all1.bind<float>();
  /* float const& etacdswacds */ all1.bind<float>();
  /* float const& wprccf */ all1.bind<float>();
  /* float const& etaccf */ all1.bind<float>();
  /* float const& waccf */ all1.bind<float>();
  /* float const& t4ds */ all1.bind<float>();
  /* float const& wfbds */ all1.bind<float>();
  /* float const& dtcods */ all1.bind<float>();
  /* float const& etabds */ all1.bind<float>();
  /* float const& wa3cds */ all1.bind<float>();
  /* float const& dpcods */ all1.bind<float>();
  /* float const& dtcocf */ all1.bind<float>();
  /* float const& etabcf */ all1.bind<float>();
  /* float const& tfhpds */ all1.bind<float>();
  /* float const& cnhpds */ all1.bind<float>();
  /* float const& ethpds */ all1.bind<float>();
  /* float const& tfhpcf */ all1.bind<float>();
  /* float const& cnhpcf */ all1.bind<float>();
  /* float const& ethpcf */ all1.bind<float>();
  /* float const& ohhpcf */ all1.bind<float>();
  /* float const& t2ds */ all1.bind<float>();
  /* float const& tflpds */ all1.bind<float>();
  /* float const& cnlpds */ all1.bind<float>();
  /* float const& etlpds */ all1.bind<float>();
  /* float const& tflpcf */ all1.bind<float>();
  /* float const& cnlpcf */ all1.bind<float>();
  /* float const& etlpcf */ all1.bind<float>();
  /* float const& dhlpcf */ all1.bind<float>();
  /* float const& t21ds */ all1.bind<float>();
  /* float const& t24ds */ all1.bind<float>();
  /* float const& wfdds */ all1.bind<float>();
  /* float const& dtduds */ all1.bind<float>();
  /* float const& etadds */ all1.bind<float>();
  /* float const& wa23ds */ all1.bind<float>();
  /* float const& dpduos */ all1.bind<float>();
  /* float const& dtducf */ all1.bind<float>();
  /* float const& etadcf */ all1.bind<float>();
  /* float const& t7ds */ all1.bind<float>();
  /* float const& wfads */ all1.bind<float>();
  /* float const& otafds */ all1.bind<float>();
  /* float const& etaads */ all1.bind<float>();
  /* float const& wg6cds */ all1.bind<float>();
  /* float const& dpafds */ all1.bind<float>();
  /* float const& dtafcf */ all1.bind<float>();
  /* float const& etaacf */ all1.bind<float>();
  /* float const& a55 */ all1.bind<float>();
  /* float const& a25 */ all1.bind<float>();
  /* float const& a6 */ all1.bind<float>();
  /* float const& a7 */ all1.bind<float>();
  /* float const& a8 */ all1.bind<float>();
  /* float const& a9 */ all1.bind<float>();
  /* float const& a28 */ all1.bind<float>();
  /* float const& a29 */ all1.bind<float>();
  /* float const& ps55 */ all1.bind<float>();
  /* float const& am55 */ all1.bind<float>();
  /* float const& cvonoz */ all1.bind<float>();
  /* float const& cvmnoz */ all1.bind<float>();
  /* float const& absav */ all1.bind<float>();
  /* float const& a9sav */ all1.bind<float>();
  /* float const& a28sav */ all1.bind<float>();
  /* float const& a29sav */ all1.bind<float>();
  /* float const& t1 */ all2.bind<float>();
  arr_cref<float> trash2(all2.bind<float>(), dimension(80));
  /* float const& p1 */ all2.bind<float>();
  /* float const& h1 */ all2.bind<float>();
  /* float const& s1 */ all2.bind<float>();
  /* float const& t2 */ all2.bind<float>();
  /* float const& p2 */ all2.bind<float>();
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
  float const& t4 = all2.bind<float>();
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
  /* float const& wa4 */ all2.bind<float>();
  /* float const& far4 */ all2.bind<float>();
  /* float const& cnc */ all2.bind<float>();
  /* float const& prc */ all2.bind<float>();
  /* float const& etac */ all2.bind<float>();
  /* float const& wacc */ all2.bind<float>();
  /* float const& wac */ all2.bind<float>();
  /* float const& etab */ all2.bind<float>();
  /* float const& dpcdm */ all2.bind<float>();
  float const& dump = all2.bind<float>();
  /* float const& cnhp */ all2.bind<float>();
  /* float const& etathp */ all2.bind<float>();
  /* float const& dhtchp */ all2.bind<float>();
  /* float const& dhtc */ all2.bind<float>();
  /* float const& blmp */ all2.bind<float>();
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
  float const& zf = all2.bind<float>();
  float const& pcnf = all2.bind<float>();
  float const& zc = all2.bind<float>();
  float const& pcnc = all2.bind<float>();
  /* float const& wfb */ all2.bind<float>();
  /* float const& tffhp */ all2.bind<float>();
  /* float const& tfflp */ all2.bind<float>();
  /* float const& pcblf */ all2.bind<float>();
  /* float const& pcblc */ all2.bind<float>();
  /* float const& pcbldu */ all2.bind<float>();
  /* float const& pcblob */ all2.bind<float>();
  /* float const& pcblhp */ all2.bind<float>();
  /* float const& pcbllp */ all2.bind<float>();
  /* float const& wg6 */ all4.bind<float>();
  arr_cref<float> trash4(all4.bind<float>(), dimension(80));
  /* float const& wfa */ all4.bind<float>();
  /* float const& wg7 */ all4.bind<float>();
  /* float const& fart7 */ all4.bind<float>();
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
  /* float const& fgnm */ all4.bind<float>();
  /* float const& fgpd */ all4.bind<float>();
  /* float const& fgpm */ all4.bind<float>();
  /* float const& fgm */ all4.bind<float>();
  /* float const& fgp */ all4.bind<float>();
  /* int const& mft */ all4.bind<int>();
  /* int const& mgt */ all4.bind<int>();
  /* float const& fart */ all4.bind<float>();
  /* float const& fg */ all4.bind<float>();
  /* float const& fn */ all4.bind<float>();
  /* float const& sfc */ all4.bind<float>();
  /* float const& aw32 */ all4.bind<float>();
  /* float const& dpwgds */ all4.bind<float>();
  /* float const& dpwing */ all4.bind<float>();
  /* float const& a32ds */ all4.bind<float>();
  /* float const& a38 */ all4.bind<float>();
  /* float const& am38 */ all4.bind<float>();
  /* float const& v38 */ all4.bind<float>();
  /* float const& t38 */ all4.bind<float>();
  /* float const& h38 */ all4.bind<float>();
  /* float const& p38 */ all4.bind<float>();
  /* float const& ts38 */ all4.bind<float>();
  /* float const& ps38 */ all4.bind<float>();
  /* float const& t39 */ all4.bind<float>();
  /* float const& h39 */ all4.bind<float>();
  /* float const& p39 */ all4.bind<float>();
  /* float const& ts39v39 */ all4.bind<float>();
  /* float const& am39 */ all4.bind<float>();
  /* float const& a39 */ all4.bind<float>();
  /* float const& bprint */ all4.bind<float>();
  /* float const& wg37 */ all4.bind<float>();
  /* float const& vdwng */ all4.bind<float>();
  /* float const& fgmwng */ all4.bind<float>();
  /* float const& fgpwng */ all4.bind<float>();
  /* float const& fnwing */ all4.bind<float>();
  /* float const& fnmain */ all4.bind<float>();
  /* float const& fnovfn */ all4.bind<float>();
  /* float const& ps39 */ all4.bind<float>();
  /* float const& ffovfn */ all4.bind<float>();
  /* float const& fcovfn */ all4.bind<float>();
  /* float const& fmnofn */ all4.bind<float>();
  /* float const& fnovfd */ all4.bind<float>();
  /* float const& vj */ all4.bind<float>();
  /* float const& t22 */ all4.bind<float>();
  /* float const& p22 */ all4.bind<float>();
  /* float const& h22 */ all4.bind<float>();
  /* float const& s22 */ all4.bind<float>();
  /* float const& t50 */ all4.bind<float>();
  /* float const& p50 */ all4.bind<float>();
  /* float const& h50 */ all4.bind<float>();
  /* float const& s50 */ all5.bind<float>();
  arr_cref<float> trash5(all5.bind<float>(), dimension(80));
  /* float const& a22 */ all5.bind<float>();
  float const& zi = all5.bind<float>();
  float const& pcni = all5.bind<float>();
  /* float const& cni */ all5.bind<float>();
  /* float const& pri */ all5.bind<float>();
  /* float const& etai */ all5.bind<float>();
  /* float const& waci */ all5.bind<float>();
  /* float const& tffip */ all5.bind<float>();
  /* float const& cnip */ all5.bind<float>();
  /* float const& etatip */ all5.bind<float>();
  /* float const& dhtcip */ all5.bind<float>();
  /* float const& dhti */ all5.bind<float>();
  /* float const& blip */ all5.bind<float>();
  /* float const& pcblip */ all5.bind<float>();
  /* float const& pcnigu */ all5.bind<float>();
  /* float const& zids */ all5.bind<float>();
  /* float const& pcnids */ all5.bind<float>();
  /* float const& prids */ all5.bind<float>();
  /* float const& etaids */ all5.bind<float>();
  /* float const& waids */ all5.bind<float>();
  /* float const& pricf */ all5.bind<float>();
  /* float const& etaicf */ all5.bind<float>();
  /* float const& waicf */ all5.bind<float>();
  /* float const& tfipds */ all5.bind<float>();
  /* float const& cnipds */ all5.bind<float>();
  /* float const& etipds */ all5.bind<float>();
  /* float const& tfipcf */ all5.bind<float>();
  /* float const& cnepcf */ all5.bind<float>();
  /* float const& etipcf */ all5.bind<float>();
  /* float const& dhipcf */ all5.bind<float>();
  /* float const& wacds */ all5.bind<float>();
  /* float const& wai */ all5.bind<float>();
  /* float const& pcbli */ all5.bind<float>();
  /* float const& bli */ all5.bind<float>();
  /* float const& t22ds */ all5.bind<float>();
  /* float const& wa21 */ all5.bind<float>();
  /* float const& wg50 */ all5.bind<float>();
  /* float const& far50 */ all5.bind<float>();
  /* float const& a24 */ all5.bind<float>();
  /* float const& am23 */ all5.bind<float>();
  /* float const& dumspl */ all5.bind<float>();
  /* float const& fxfn2m */ all5.bind<float>();
  /* float const& fxm2cp */ all5.bind<float>();
  /* float const& aftfan */ all5.bind<float>();
  /* float const& punt */ all5.bind<float>();
  /* float const& pcblid */ all5.bind<float>();
  /* float const& p6dsav */ all5.bind<float>();
  /* float const& am6osv */ all5.bind<float>();
  /* float const& etaasv */ all5.bind<float>();
  /* float const& far7sv */ all5.bind<float>();
  /* float const& t4pbl */ all5.bind<float>();
  /* float const& t41 */ all5.bind<float>();
  /* float const& fan */ all5.bind<float>();
  /* int const& ispool */ all5.bind<int>();
  arr_cref<float> trash3(loc_equivalences.bind<float>(), dimension(80));
  /* float const& xpi */ loc_equivalences.bind<float>();
  if (is_called_first_time) {
    aword = "COMMON";
  }
  int icdafb = fem::int0;
  int icomix = fem::int0;
  int icdmix = fem::int0;
  float ecoafb = fem::float0;
  int icomex = fem::int0;
  int i = fem::int0;
  static const char* format_4 = "('0 ')";
  static const char* format_5 = "(' ',8e15.6)";
  static const char* format_6 = "('1')";
  //C
  //C        Controls all printouts if an error occurs; prints names of
  //C        subroutine where error occurred and also prints values of all
  //C        variables in nmin commons
  //C
  cmn.errer = true;
  //C
  if (icdafb < 1) {
    icoafb = 0;
  }
  if (icomix < 1) {
    icdmix = 0;
  }
  if (icoduc < 1) {
    icoduc = 0;
  }
  if (icoafb != 0) {
    write(6, "(' THE ERROR IN COAFBN  IS AT',i3)"), ecoafb;
  }
  if (icoduc != 0) {
    write(6, "(' THE ERROR IN COOUCT  IS AT',i3)"), icoduc;
  }
  if (icomix != 0) {
    write(6, "(' THE ERROR IN COMIX   IS AT',i3)"), icomex;
  }
  //C
  write(6, "('AN ERROR HAS BEEN FOUND IN  ',a6)"), word;
  word = aword;
  //C
  write(6, "('0',a6,9x,7e15.6,i4)"), word, zf, pcnf, zi, pcni, zc,
    pcnc, t4, cmn.mode;
  write(6, format_4);
  {
    write_loop wloop(cmn, 6, format_5);
    FEM_DO_SAFE(i, 1, 80) {
      wloop, trash1(i);
    }
  }
  write(6, format_6);
  {
    write_loop wloop(cmn, 6, format_5);
    FEM_DO_SAFE(i, 1, 80) {
      wloop, trash2(i);
    }
  }
  write(6, format_6);
  {
    write_loop wloop(cmn, 6, format_5);
    FEM_DO_SAFE(i, 1, 80) {
      wloop, trash3(i);
    }
  }
  write(6, format_6);
  {
    write_loop wloop(cmn, 6, format_5);
    FEM_DO_SAFE(i, 1, 80) {
      wloop, trash4(i);
    }
  }
  write(6, format_4);
  {
    write_loop wloop(cmn, 6, format_6);
    FEM_DO_SAFE(i, 1, 55) {
      wloop, trash5(i);
    }
  }
  write(6, format_4);
  write(6, "('FAILED TO CONVERGE AFTER ',i4,' LOOPS')"), cmn.looper;
  //C
  if (dump == 0) {
    goto statement_1;
  }
  write(6, format_6);
  syg(2);
  statement_1:
  engbal();
  //C
}

} // namespace BASIC_ENG
