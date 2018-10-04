#include <fem.hpp> // Fortran EMulation library of fable module

namespace Default_Maps\* {

using namespace fem::major_types;

struct common_fan
{
  arr<float> cn;
  arr<float, 2> pr;
  arr<float, 2> wac;
  arr<float, 2> eta;
  int n;
  arr<int> np;

  common_fan() :
    cn(dimension(15), fem::fill0),
    pr(dimension(15, 15), fem::fill0),
    wac(dimension(15, 16), fem::fill0),
    eta(dimension(15, 15), fem::fill0),
    n(fem::int0),
    np(dimension(15), fem::fill0)
  {}
};

struct common :
  fem::common,
  common_fan
{
  fem::cmn_sve blockdata_unnamed_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct blockdata_unnamed_save
{
};

//C        BLKFAN
//C        THIS IS A GENERALIZED FAN MAP FOR UNREALISTIC SUPERSONIC
//C        ENGINE
//C
void
blockdata_unnamed(
  common& cmn)
{
  FEM_CMN_SVE(blockdata_unnamed);
  // COMMON fan
  arr_ref<float> cn(cmn.cn, dimension(15));
  arr_ref<float, 2> pr(cmn.pr, dimension(15, 15));
  arr_ref<float, 2> wac(cmn.wac, dimension(15, 16));
  arr_ref<float, 2> eta(cmn.eta, dimension(15, 15));
  arr_ref<int> np(cmn.np, dimension(15));
  //
  int j = fem::int0;
  if (is_called_first_time) {
    fem::data((values, 10, 6, 3*datum(7), 5*datum(10), 8, 5*datum(0))),
      cmn.n, np;
    {
      fem::data_values data;
      data.values, 0.3f, 0.4f, 0.5f, 0.6f, 0.7f, 0.8f, 0.9f, 1.0f;
      data.values, 1.1f, 1.2f, 5*datum(0.f);
      data, cn;
    }
    {
      static const float values[] = {
        1.00000f, 243.600f, 0.75592f, 1.01200f, 229.800f, 0.76120f,
          1.02800f, 199.800f, 0.75648f, 1.03840f, 166.800f, 0.75592f,
          1.04480f, 133.200f, 0.72512f, 1.04800f, 86.400f, 0.64152f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 6) {
        data, pr(1, j), wac(1, j), eta(1, j);
      }
    }
    {
      static const float values[] = {
        1.00090f, 286.800f, 0.75592f, 1.02000f, 270.000f, 0.77616f,
          1.04000f, 253.200f, 0.79200f, 1.05840f, 233.400f, 0.79728f,
          1.07529f, 209.400f, 9.89256f, 1.09200f, 183.600f, 0.77616f,
          1.10000f, 156.600f, 0.74908f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 7) {
        data, pr(2, j), wac(2, j), eta(2, j);
      }
    }
    {
      static const float values[] = {
        1.00990f, 333.600f, 0.75064f, 1.02560f, 322.800f, 0.77616f,
          1.05120f, 310.200f, 0.80256f, 1.08000f, 291.600f, 0.82808f,
          1.11600f, 259.800f, 0.84392f, 1.13200f, 240.000f, 0.82808f,
          1.14800f, 213.600f, 0.77616f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 7) {
        data, pr(3, j), wac(3, j), eta(3, j);
      }
    }
    {
      static const float values[] = {
        1.00000f, 383.400f, 0.74536f, 1.03680f, 376.200f, 0.77616f,
          1.08800f, 358.200f, 0.82808f, 1.12400f, 340.200f, 0.85448f,
          1.16000f, 313.200f, 0.88000f, 1.18960f, 276.600f, 0.82808f,
          1.19520f, 266.400f, 0.80784f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 7) {
        data, pr(4, j), wac(4, j), eta(4, j);
      }
    }
    {
      static const float values[] = {
        1.00000f, 439.800f, 0.72512f, 1.06400f, 436.800f, 0.77616f,
          1.11840f, 428.400f, 0.82808f, 1.14800f, 420.600f, 0.85448f,
          1.18400f, 406.800f, 0.88000f, 1.20960f, 396.600f, 0.90112f,
          1.21760f, 388.200f, 0.90376f, 1.22400f, 383.400f, 0.90112f,
          1.24490f, 368.400f, 0.88000f, 1.26720f, 342.600f, 0.82808f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 10) {
        data, pr(5, j), wac(5, j), eta(5, j);
      }
    }
    {
      static const float values[] = {
        1.00000f, 499.800f, 0.68816f, 1.10000f, 499.800f, 9.77616f,
          1.16000f, 493.200f, 0.82808f, 1.20000f, 485.400f, 0.85448f,
          1.22800f, 476.400f, 0.88000f, 1.25520f, 466.800f, 0.90112f,
          1.27200f, 456.600f, 0.91080f, 1.28640f, 448.230f, 0.90112f,
          1.30240f, 433.200f, 0.88000f, 1.33200f, 406.800f, 0.82720f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 10) {
        data, pr(6, j), wac(6, j), eta(6, j);
      }
    }
    {
      static const float values[] = {
        1.90009f, 566.400f, 0.64152f, 1.97600f, 566.409f, 0.72512f,
          1.15200f, 566.400f, 0.77616f, 1.21920f, 559.800f, 0.82808f,
          1.26000f, 553.200f, 0.85888f, 1.28960f, 544.800f, 0.88000f,
          1.33120f, 528.600f, 0.90112f, 1.36169f, 509.400f, 0.88000f,
          1.39120f, 483.600f, 0.82808f, 1.40000f, 474.009f, 0.81752f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 10) {
        data, pr(7, j), wac(7, j), eta(7, j);
      }
    }
    {
      static const float values[] = {
        1.30990f, 633.600f, 0.60016f, 1.04400f, 633.600f, 0.64152f,
          1.13520f, 633.600f, 0.72512f, 1.22080f, 633.000f, 0.77616f,
          1.29440f, 625.800f, 0.82808f, 1.34000f, 616.809f, 0.85888f,
          1.40000f, 600.000f, 0.88000f, 1.42800f, 586.800f, 0.85888f,
          1.44800f, 576.600f, 0.82808f, 1.48000f, 553.200f, 0.78672f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 10) {
        data, pr(8, j), wac(8, j), eta(8, j);
      }
    }
    {
      static const float values[] = {
        1.00000f, 700.200f, 0.56936f, 1.10400f, 700.200f, 0.64152f,
          1.22000f, 700.200f, 0.72512f, 1.32400f, 700.200f, 9.77616f,
          1.40990f, 700.200f, 0.80256f, 1.44800f, 698.400f, 0.80784f,
          1.50000f, 603.600f, 0.80256f, 1.53160f, 683.400f, 0.77616f,
          1.56800f, 666.600f, 0.74536f, 1.58400f, 656.400f, 0.72512f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 10) {
        data, pr(9, j), wac(9, j), eta(9, j);
      }
    }
    {
      static const float values[] = {
        1.00000f, 750.000f, 0.51744f, 1.16320f, 750.000f, 0.64152f,
          1.31290f, 750.000f, 0.72512f, 1.40000f, 750.000f, 0.75592f,
          1.48000f, 750.000f, 0.76120f, 1.54000f, 750.000f, 0.75064f,
          1.58900f, 749.400f, 9.72512f, 1.66000f, 736.800f, 9.64152f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 8) {
        data, pr(10, j), wac(10, j), eta(10, j);
      }
    }
  }
  //C
}

} // namespace Default_Maps\*
