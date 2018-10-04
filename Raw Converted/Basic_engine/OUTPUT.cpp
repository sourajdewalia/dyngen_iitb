#include <fem.hpp> // Fortran EMulation library of fable module

namespace BASIC_ENG {

using namespace fem::major_types;

void
conout(...)
{
  throw std::runtime_error(
    "Missing function implementation: conout");
}

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

struct common_design
{
  int ides;
  int jdes;
  int kdes;
  int mooe;
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
    mooe(fem::int0),
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

struct common_dyn
{
  int itran;
  float time;
  float dt;
  float tf;
  int jtran;
  int nstep;
  float tprint;
  float dtprnt;

  common_dyn() :
    itran(fem::int0),
    time(fem::float0),
    dt(fem::float0),
    tf(fem::float0),
    jtran(fem::int0),
    nstep(fem::int0),
    tprint(fem::float0),
    dtprnt(fem::float0)
  {}
};

struct common :
  fem::common,
  common_words,
  common_design,
  common_dyn
{
  fem::variant_core common_all1;
  fem::variant_core common_all2;
  fem::variant_core common_all3;
  fem::variant_core common_all4;
  fem::variant_core common_all5;
  fem::cmn_sve output_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct output_save
{
  fem::variant_bindings all1_bindings;
  fem::variant_bindings all2_bindings;
  fem::variant_bindings all3_bindings;
  fem::variant_bindings all4_bindings;
  fem::variant_bindings all5_bindings;
  float awdrd2;
  float aword1;
  arr<float, 2> w;

  output_save() :
    awdrd2(fem::float0),
    aword1(fem::float0),
    w(dimension(5, 6), fem::fill0)
  {}
};

void
output(
  common& cmn)
{
  FEM_CMN_SVE(output);
  common_write write(cmn);
  float& word = cmn.word;
  int& ides = cmn.ides;
  float& tprint = cmn.tprint;
  //
  common_variant all1(cmn.common_all1, sve.all1_bindings);
  common_variant all2(cmn.common_all2, sve.all2_bindings);
  common_variant all3(cmn.common_all3, sve.all3_bindings);
  common_variant all4(cmn.common_all4, sve.all4_bindings);
  common_variant all5(cmn.common_all5, sve.all5_bindings);
  float& aword1 = sve.aword1;
  arr_ref<float, 2> w(sve.w, dimension(5, 6));
  int i = fem::int0;
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<float> pcnfgu;
      mbr<float> ans1(dimension(80));
      mbr<float> pcncgu;
      mbr<float> t4gu;
      mbr<float> dumd1;
      mbr<float> dumd2;
      mbr<float> delfg;
      mbr<float> delfn;
      mbr<float> delsfc;
      mbr<float> zfds;
      mbr<float> pcnfos;
      mbr<float> prfos;
      mbr<float> etafds;
      mbr<float> wafds;
      mbr<float> prfcf;
      mbr<float> etafcf;
      mbr<float> wafcf;
      mbr<float> zcds;
      mbr<float> pcncds;
      mbr<float> prcds;
      mbr<float> etacds;
      mbr<float> wacds;
      mbr<float> prccf;
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
      mbr<float> dhhpcf;
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
      mbr<float> wfaos;
      mbr<float> dtauds;
      mbr<float> etadds;
      mbr<float> wa23os;
      mbr<float> dpouds;
      mbr<float> dtoucf;
      mbr<float> etadcf;
      mbr<float> t7ds;
      mbr<float> wfads;
      mbr<float> dtafds;
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
      mbr<float> cvdnoz;
      mbr<float> cvmnoz;
      mbr<float> absav;
      mbr<float> a9sav;
      mbr<float> a28sav;
      mbr<float> a29sav;
      all1.allocate(),
        equivalence(pcnfgu, ans1)
          .align<2>()
           .with<1>(),
        pcncgu, t4gu, dumd1, dumd2, delfg, delfn, delsfc, zfds,
          pcnfos, prfos, etafds, wafds, prfcf, etafcf, wafcf, zcds,
          pcncds, prcds, etacds, wacds, prccf, etaccf, waccf, t4ds,
          wfbds, dtcods, etabds, wa3cds, dpcods, dtcocf, etabcf,
          tfhpds, cnhpds, ethpds, tfhpcf, cnhpcf, ethpcf, dhhpcf,
          t2ds, tflpds, cnlpds, etlpds, tflpcf, cnlpcf, etlpcf,
          dhlpcf, t21ds, t24ds, wfaos, dtauds, etadds, wa23os,
          dpouds, dtoucf, etadcf, t7ds, wfads, dtafds, etaads,
          wg6cds, dpafds, dtafcf, etaacf, a55, a25, a6, a7, a8, a9,
          a28, a29, ps55, am55, cvdnoz, cvmnoz, absav, a9sav, a28sav,
          a29sav
      ;
    }
    {
      mbr<float> t1;
      mbr<float> ans2(dimension(80));
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
      mbr<float> wg4;
      mbr<float> far4;
      mbr<float> cnc;
      mbr<float> prc;
      mbr<float> etac;
      mbr<float> wacc;
      mbr<float> wac;
      mbr<float> eta8;
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
      mbr<float> wgs5;
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
        equivalence(t1, ans2)
          .align<2>()
           .with<1>(),
        p1, h1, s1, t2, p2, h2, s2, t21, p21, h21, s21, t3, p3, h3,
          s3, t4, p4, h4, s4, t5, p5, h5, s5, t55, p55, h55, s55,
          blf, blc, bldu, blob, cnf, prf, etaf, wafc, waf, wa3, wg4,
          far4, cnc, prc, etac, wacc, wac, eta8, dpcom, dump, cnhp,
          etathp, dhtchp, dhtc, blhp, wg5, far5, cs, cnlp, etatlp,
          dhtclp, dhtf, bllp, wgs5, far55, hpext, am, altp, etar, zf,
          pcnf, zc, pcnc, wfb, tffhp, tfflp, pcblf, pcblc, pcbldu,
          pcblob, pcblhp, pcbllp
      ;
    }
    {
      mbr<float> xp1;
      mbr<float> ans3(dimension(80));
      mbr<float> xwaf;
      mbr<float> xwac;
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
      all3.allocate(),
        equivalence(xp1, ans3)
          .align<2>()
           .with<1>(),
        xwaf, xwac, xblf, xbldu, xh3, dums1, dums2, xt21, xp21, xh21,
          xs21, t23, p23, h23, s23, t24, p24, h24, s24, t25, p25,
          h25, s25, t28, p28, h28, s28, t29, p29, h29, s29, wad, wfd,
          wg24, far24, etad, dpduc, bypass, dums3, ts28, ps28, v28,
          am28, ts29, ps29, v29, am29, xt55, xp55, xh55, xs55, xt25,
          xp25, xh25, xs25, xwfb, xwg55, xfar55, xwfd, xwg24, xfar24,
          xxp1, dumb, t6, p6, h6, s6, t7, p7, h7, s7, t8, p8, h8, s8,
          t9, p9, h9, s9
      ;
    }
    {
      mbr<float> wg6;
      mbr<float> ans4(dimension(80));
      mbr<float> wfa;
      mbr<float> wg7;
      mbr<float> far7;
      mbr<float> etaa;
      mbr<float> dpaft;
      mbr<float> v55;
      mbr<float> v25;
      mbr<float> ps6;
      mbr<float> v6;
      mbr<float> aw6;
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
      mbr<float> vjo;
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
      mbr<float> fnnofn;
      mbr<float> fnovfd;
      mbr<float> vjw;
      mbr<float> t22;
      mbr<float> p22;
      mbr<float> h22;
      mbr<float> s22;
      mbr<float> t50;
      mbr<float> p50;
      mbr<float> h50;
      all4.allocate(),
        equivalence(wg6, ans4)
          .align<2>()
           .with<1>(),
        wfa, wg7, far7, etaa, dpaft, v55, v25, ps6, v6, aw6, ts7,
          ps7, v7, am7, am25, ts8, ps8, v8, am8, ts9, ps9, v9, am9,
          va, frd, vjo, fgmd, vjm, fgmm, fgpd, fgpm, fgm, fgp, wft,
          wgt, fart, fg, fn, sfc, wa32, dpwgds, dpwing, wa32ds, a38,
          am38, v38, t38, h38, p38, ts38, ps38, t39, h39, p39, ts39,
          v39, am39, a39, bprint, wg37, cvdwng, fgmwng, fgpwng,
          fnwing, fnmain, fwovfn, ps39, ffovfn, fcovfn, fnnofn,
          fnovfd, vjw, t22, p22, h22, s22, t50, p50, h50
      ;
    }
    {
      mbr<float> s50;
      mbr<float> ans5(dimension(80));
      mbr<float> wa22;
      mbr<float> zi;
      mbr<float> pcni;
      mbr<float> cni;
      mbr<float> pri;
      mbr<float> etai;
      mbr<float> waci;
      mbr<float> tffip;
      mbr<float> wcnip;
      mbr<float> etatip;
      mbr<float> dhtcip;
      mbr<float> dht;
      mbr<float> blip;
      mbr<float> pcblep;
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
      mbr<float> cnipcf;
      mbr<float> etipcf;
      mbr<float> dhipcf;
      mbr<float> waicds;
      mbr<float> wa;
      mbr<float> pcbli;
      mbr<float> bli;
      mbr<float> t22ds;
      mbr<float> wa21;
      mbr<float> wg50;
      mbr<float> far50;
      mbr<float> a24;
      mbr<float> am23;
      mbr<float> dunspl;
      mbr<bool> fxfn2m;
      mbr<bool> fxm2cp;
      mbr<bool> aftfan;
      mbr<float> punt;
      mbr<float> pcblio;
      mbr<float> p6dsav;
      mbr<float> am6dsv;
      mbr<float> etaasv;
      mbr<float> far75v;
      mbr<float> t4pbl;
      mbr<float> t41;
      mbr<bool> fan;
      mbr<float> spool;
      all5.allocate(),
        equivalence(s50, ans5)
          .align<2>()
           .with<1>(),
        wa22, zi, pcni, cni, pri, etai, waci, tffip, wcnip, etatip,
          dhtcip, dht, blip, pcblep, pcnigu, zids, pcnids, prids,
          etaids, waids, pricf, etaicf, waicf, tfipds, cnipds,
          etipds, tfipcf, cnipcf, etipcf, dhipcf, waicds, wa, pcbli,
          bli, t22ds, wa21, wg50, far50, a24, am23, dunspl, fxfn2m,
          fxm2cp, aftfan, punt, pcblio, p6dsav, am6dsv, etaasv,
          far75v, t4pbl, t41, fan, spool
      ;
    }
  }
  /* float const& pcnfgu */ all1.bind<float>();
  arr_cref<float> ans1(all1.bind<float>(), dimension(80));
  /* float const& pcncgu */ all1.bind<float>();
  /* float const& t4gu */ all1.bind<float>();
  /* float const& dumd1 */ all1.bind<float>();
  /* float const& dumd2 */ all1.bind<float>();
  /* float const& delfg */ all1.bind<float>();
  /* float const& delfn */ all1.bind<float>();
  /* float const& delsfc */ all1.bind<float>();
  /* float const& zfds */ all1.bind<float>();
  /* float const& pcnfos */ all1.bind<float>();
  /* float const& prfos */ all1.bind<float>();
  /* float const& etafds */ all1.bind<float>();
  /* float const& wafds */ all1.bind<float>();
  /* float const& prfcf */ all1.bind<float>();
  /* float const& etafcf */ all1.bind<float>();
  /* float const& wafcf */ all1.bind<float>();
  /* float const& zcds */ all1.bind<float>();
  /* float const& pcncds */ all1.bind<float>();
  /* float const& prcds */ all1.bind<float>();
  /* float const& etacds */ all1.bind<float>();
  /* float const& wacds */ all1.bind<float>();
  /* float const& prccf */ all1.bind<float>();
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
  /* float const& dhhpcf */ all1.bind<float>();
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
  /* float const& wfaos */ all1.bind<float>();
  /* float const& dtauds */ all1.bind<float>();
  /* float const& etadds */ all1.bind<float>();
  /* float const& wa23os */ all1.bind<float>();
  /* float const& dpouds */ all1.bind<float>();
  /* float const& dtoucf */ all1.bind<float>();
  /* float const& etadcf */ all1.bind<float>();
  /* float const& t7ds */ all1.bind<float>();
  /* float const& wfads */ all1.bind<float>();
  /* float const& dtafds */ all1.bind<float>();
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
  float& a9 = all1.bind<float>();
  float& a28 = all1.bind<float>();
  float& a29 = all1.bind<float>();
  /* float const& ps55 */ all1.bind<float>();
  /* float const& am55 */ all1.bind<float>();
  /* float const& cvdnoz */ all1.bind<float>();
  /* float const& cvmnoz */ all1.bind<float>();
  /* float const& absav */ all1.bind<float>();
  float const& a9sav = all1.bind<float>();
  float const& a28sav = all1.bind<float>();
  float const& a29sav = all1.bind<float>();
  /* float const& t1 */ all2.bind<float>();
  arr_cref<float> ans2(all2.bind<float>(), dimension(80));
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
  /* float const& t4 */ all2.bind<float>();
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
  /* float const& eta8 */ all2.bind<float>();
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
  /* float const& wgs5 */ all2.bind<float>();
  /* float const& far55 */ all2.bind<float>();
  /* float const& hpext */ all2.bind<float>();
  float const& am = all2.bind<float>();
  float const& altp = all2.bind<float>();
  float const& etar = all2.bind<float>();
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
  /* float const& xp1 */ all3.bind<float>();
  arr_cref<float> ans3(all3.bind<float>(), dimension(80));
  /* float const& xwaf */ all3.bind<float>();
  /* float const& xwac */ all3.bind<float>();
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
  /* float const& xt55 */ all3.bind<float>();
  /* float const& xp55 */ all3.bind<float>();
  /* float const& xh55 */ all3.bind<float>();
  /* float const& xs55 */ all3.bind<float>();
  /* float const& xt25 */ all3.bind<float>();
  /* float const& xp25 */ all3.bind<float>();
  /* float const& xh25 */ all3.bind<float>();
  /* float const& xs25 */ all3.bind<float>();
  /* float const& xwfb */ all3.bind<float>();
  /* float const& xwg55 */ all3.bind<float>();
  /* float const& xfar55 */ all3.bind<float>();
  /* float const& xwfd */ all3.bind<float>();
  /* float const& xwg24 */ all3.bind<float>();
  /* float const& xfar24 */ all3.bind<float>();
  /* float const& xxp1 */ all3.bind<float>();
  /* float const& dumb */ all3.bind<float>();
  /* float const& t6 */ all3.bind<float>();
  /* float const& p6 */ all3.bind<float>();
  /* float const& h6 */ all3.bind<float>();
  /* float const& s6 */ all3.bind<float>();
  float const& t7 = all3.bind<float>();
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
  /* float const& wg6 */ all4.bind<float>();
  arr_cref<float> ans4(all4.bind<float>(), dimension(80));
  /* float const& wfa */ all4.bind<float>();
  /* float const& wg7 */ all4.bind<float>();
  /* float const& far7 */ all4.bind<float>();
  /* float const& etaa */ all4.bind<float>();
  /* float const& dpaft */ all4.bind<float>();
  /* float const& v55 */ all4.bind<float>();
  /* float const& v25 */ all4.bind<float>();
  /* float const& ps6 */ all4.bind<float>();
  /* float const& v6 */ all4.bind<float>();
  /* float const& aw6 */ all4.bind<float>();
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
  /* float const& vjo */ all4.bind<float>();
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
  float const& fg = all4.bind<float>();
  float const& fn = all4.bind<float>();
  float const& sfc = all4.bind<float>();
  /* float const& wa32 */ all4.bind<float>();
  /* float const& dpwgds */ all4.bind<float>();
  /* float const& dpwing */ all4.bind<float>();
  /* float const& wa32ds */ all4.bind<float>();
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
  /* float const& ts39 */ all4.bind<float>();
  /* float const& v39 */ all4.bind<float>();
  /* float const& am39 */ all4.bind<float>();
  /* float const& a39 */ all4.bind<float>();
  /* float const& bprint */ all4.bind<float>();
  /* float const& wg37 */ all4.bind<float>();
  /* float const& cvdwng */ all4.bind<float>();
  /* float const& fgmwng */ all4.bind<float>();
  /* float const& fgpwng */ all4.bind<float>();
  /* float const& fnwing */ all4.bind<float>();
  /* float const& fnmain */ all4.bind<float>();
  /* float const& fwovfn */ all4.bind<float>();
  /* float const& ps39 */ all4.bind<float>();
  /* float const& ffovfn */ all4.bind<float>();
  /* float const& fcovfn */ all4.bind<float>();
  /* float const& fnnofn */ all4.bind<float>();
  /* float const& fnovfd */ all4.bind<float>();
  /* float const& vjw */ all4.bind<float>();
  /* float const& t22 */ all4.bind<float>();
  /* float const& p22 */ all4.bind<float>();
  /* float const& h22 */ all4.bind<float>();
  /* float const& s22 */ all4.bind<float>();
  /* float const& t50 */ all4.bind<float>();
  /* float const& p50 */ all4.bind<float>();
  /* float const& h50 */ all4.bind<float>();
  /* float const& s50 */ all5.bind<float>();
  arr_cref<float> ans5(all5.bind<float>(), dimension(80));
  /* float const& wa22 */ all5.bind<float>();
  float const& zi = all5.bind<float>();
  float const& pcni = all5.bind<float>();
  /* float const& cni */ all5.bind<float>();
  /* float const& pri */ all5.bind<float>();
  /* float const& etai */ all5.bind<float>();
  /* float const& waci */ all5.bind<float>();
  /* float const& tffip */ all5.bind<float>();
  /* float const& wcnip */ all5.bind<float>();
  /* float const& etatip */ all5.bind<float>();
  /* float const& dhtcip */ all5.bind<float>();
  /* float const& dht */ all5.bind<float>();
  /* float const& blip */ all5.bind<float>();
  /* float const& pcblep */ all5.bind<float>();
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
  /* float const& cnipcf */ all5.bind<float>();
  /* float const& etipcf */ all5.bind<float>();
  /* float const& dhipcf */ all5.bind<float>();
  /* float const& waicds */ all5.bind<float>();
  /* float const& wa */ all5.bind<float>();
  /* float const& pcbli */ all5.bind<float>();
  /* float const& bli */ all5.bind<float>();
  /* float const& t22ds */ all5.bind<float>();
  /* float const& wa21 */ all5.bind<float>();
  /* float const& wg50 */ all5.bind<float>();
  /* float const& far50 */ all5.bind<float>();
  /* float const& a24 */ all5.bind<float>();
  /* float const& am23 */ all5.bind<float>();
  /* float const& dunspl */ all5.bind<float>();
  bool const& fxfn2m = all5.bind<bool>();
  bool const& fxm2cp = all5.bind<bool>();
  bool const& aftfan = all5.bind<bool>();
  /* float const& punt */ all5.bind<float>();
  /* float const& pcblio */ all5.bind<float>();
  /* float const& p6dsav */ all5.bind<float>();
  /* float const& am6dsv */ all5.bind<float>();
  /* float const& etaasv */ all5.bind<float>();
  /* float const& far75v */ all5.bind<float>();
  /* float const& t4pbl */ all5.bind<float>();
  /* float const& t41 */ all5.bind<float>();
  bool const& fan = all5.bind<bool>();
  /* float const& spool */ all5.bind<float>();
  if (is_called_first_time) {
    aword1 = "OUTPUT";
    sve.awdrd2 = "CDMMON";
    {
      static const char* values[] = {
        "SUBSON", "IC C-D", " NOZZL", "E     "
      };
      fem::data_of_type_str data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(i, 1, 4) {
        data, w(1, i);
      }
    }
    {
      static const char* values[] = {
        "SHOCK ", "INSIDE", " C-ON ", "DZZLE "
      };
      fem::data_of_type_str data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(i, 1, 4) {
        data, w(2, i);
      }
    }
    {
      static const char* values[] = {
        "SHOCK ", "OUTSIO", "E  C-D", "NOZZLE"
      };
      fem::data_of_type_str data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(i, 1, 4) {
        data, w(3, i);
      }
    }
    {
      static const char* values[] = {
        "SUBSON", "IC CON", "VERG. ", "NOZZLE"
      };
      fem::data_of_type_str data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(i, 1, 4) {
        data, w(4, i);
      }
    }
    {
      static const char* values[] = {
        "SONIC ", ",dNVER", "GENT N", "OZZLE "
      };
      fem::data_of_type_str data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(i, 1, 4) {
        data, w(5, i);
      }
    }
  }
  float tb = fem::float0;
  float ah = fem::float0;
  float t26 = fem::float0;
  int ispool = fem::int0;
  bool dumspl = fem::bool0;
  float pcblid = fem::float0;
  float pcbld = fem::float0;
  float aword02 = fem::float0;
  float a8sav = fem::float0;
  float ab = fem::float0;
  int idunm = fem::int0;
  static const char* format_14 = "(' ')";
  static const char* format_15 = "(' ',8e15.6)";
  //C
  tprint += cmn.dtprnt;
  if (cmn.itran == 1) {
    write(6, "('0',20x,'  TIME=',f7.4)"), cmn.time;
  }
  //C
  word = aword1;
  if (cmn.idburn > 0) {
    goto statement_2;
  }
  if (cmn.iaftbn > 0) {
    goto statement_1;
  }
  write(6,
    "('0',a6,14x,'    AM=',f7.3,6x,'  ALTP=',f7.0,6x,'    TB=',f8.2,25x,"
    "'  ETAR=',f7.4)"),
    word, am, altp, tb, etar;
  goto statement_3;
  statement_1:
  write(6,
    "('0',a6,14x,'    AM=',f7.3,6x,' ALTP=,',f7.0,6x,'    TB=',f8.2,25x,"
    "'    T7=',f7.2,8x,'  ETAR=',f7.6)"),
    word, am, altp, tb, t7, etar;
  goto statement_3;
  statement_2:
  write(6,
    "('0',a6,16x,'    AM=',f7.3,6x,'  ALTP=',f7.0,6x,'    TB=',f8.2,25x,"
    "'   T26=',f8.2,5x,'  ETAR=',f7.6)"),
    word, ah, altp, tb, t26, etar;
  statement_3:
  if (fxfn2m) {
    write(6,
      "('OFAN AND MIDDLE SPOOL ARE ATTACHED, USE ',"
      "'INNER AND OUTER TURBINES')");
  }
  if (fxm2cp) {
    write(6,
      "('OMDOLE AND COMPRESSOR SPOOLS ARE ATTACHED, USE ,',"
      "'MIDDLE AND OUTER TURBINES')");
  }
  if (fan) {
    goto statement_25;
  }
  write(6, "('0',i4,' SPOOL TURBOJET')"), ispool;
  goto statement_27;
  statement_25:
  if (!fxfn2m && (!fxm2cp) && (!dumspl)) {
    write(6, "('OTHREE SPOOL ENGINE')");
  }
  if (dumspl) {
    write(6, "('0MIDDLE SPOOL IS DUMMY')");
  }
  if (pcblid == 0.f) {
    write(6, "('ONO AIRFLOW INTO WING')");
  }
  if (pcblid == 0.f && aftfan) {
    write(6, "('*',22x,',   AFT-TURBOFAN')");
  }
  if (pcbld != 0.f && aftfan) {
    write(6, "('0 AFT-TURBOFAN')");
  }
  statement_27:
  conout(2);
  {
    write_loop wloop(cmn, 6,
      "('OMAIN ',4a6,9x,'FG=',f9.2,10x,'FN=',f9.2,18x,'SFC=',f8.5)");
    FEM_DO_SAFE(i, 1, 4) {
      wloop, w(cmn.imshoc, i);
    }
    wloop, fg, fn, sfc;
  }
  if (cmn.igasmx > 0 || !fan) {
    goto statement_4;
  }
  {
    write_loop wloop(cmn, 6, "('  DUCT',a6)");
    FEM_DO_SAFE(i, 1, 6) {
      wloop, w(cmn.idshoc, 1);
    }
  }
  statement_4:
  write(6, "('OCONVERGED AFTER',i4,' LOOPS',/,'1')"), cmn.looper;
  if (ides != 1) {
    goto statement_5;
  }
  word = aword02;
  write(6, "(' ',a6,9x,7e15.6,i4)"), word, zf, pcnf, zi, pcni, zc,
    pcnc, tb, cmn.mooe;
  write(6, format_14);
  {
    write_loop wloop(cmn, 6, format_15);
    FEM_DO_SAFE(i, 1, 80) {
      wloop, ans1(i);
    }
  }
  write(6, format_14);
  {
    write_loop wloop(cmn, 6, format_15);
    FEM_DO_SAFE(i, 1, 80) {
      wloop, ans2(i);
    }
  }
  write(6, format_14);
  {
    write_loop wloop(cmn, 6, format_15);
    FEM_DO_SAFE(i, 1, 80) {
      wloop, ans3(i);
    }
  }
  write(6, format_14);
  {
    write_loop wloop(cmn, 6, format_15);
    FEM_DO_SAFE(i, 1, 80) {
      wloop, ans4(i);
    }
  }
  write(6, format_14);
  {
    write_loop wloop(cmn, 6, format_15);
    FEM_DO_SAFE(i, 1, 80) {
      wloop, ans5(i);
    }
  }
  write(6, format_14);
  write(6, format_14);
  if (ides == 1) {
    goto statement_6;
  }
  statement_5:
  //C
  ab = a8sav;
  a9 = a9sav;
  a28 = a28sav;
  a29 = a29sav;
  //C
  if (idunm != 2) {
    goto statement_6;
  }
  write(6, "('1')");
  syg(2);
  statement_6:
  engbal();
  //C
}

} // namespace BASIC_ENG
