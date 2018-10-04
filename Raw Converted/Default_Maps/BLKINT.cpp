#include <fem.hpp> // Fortran EMulation library of fable module

namespace Default_Maps\* {

using namespace fem::major_types;

struct common_int
{
  arr<float> cn;
  arr<float, 2> pr;
  arr<float, 2> wac;
  arr<float, 2> eta;
  int n;
  arr<int> np;

  common_int() :
    cn(dimension(15), fem::fill0),
    pr(dimension(15, 15), fem::fill0),
    wac(dimension(15, 15), fem::fill0),
    eta(dimension(15, 15), fem::fill0),
    n(fem::int0),
    np(dimension(15), fem::fill0)
  {}
};

struct common :
  fem::common,
  common_int
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

//C        THIS IS A GENERALIZED FAN MAP FOR UNREALISTIC
//C        SUPERSONIC ENGINE
//C
void
blockdata_unnamed(
  common& cmn)
{
  FEM_CMN_SVE(blockdata_unnamed);
  // COMMON int
  arr_ref<float> cn(cmn.cn, dimension(15));
  arr_ref<float, 2> pr(cmn.pr, dimension(15, 15));
  arr_ref<float, 2> wac(cmn.wac, dimension(15, 15));
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
        1.00000f, 121.800f, 0.75592f, 1.01800f, 114.900f, 0.76120f,
          2.04200f, 99.900f, 0.76648f, 1.05760f, 83.400f, 0.75592f,
          1.06720f, 66.603f, 0.72512f, 1.07200f, 43.200f, 0.64152f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 6) {
        data, pr(1, j), wac(1, j), eta(1, j);
      }
    }
    {
      static const float values[] = {
        1.00000f, 43.400f, 0.75592f, 1.03000f, 135.000f, 0.77616f,
          1.06000f, 126.600f, 0.79200f, 1.08760f, 116.700f, 0.79728f,
          1.11280f, 104.700f, 0.80256f, 1.13800f, 91.800f, 0.77616f,
          1.15000f, 78.300f, 0.74008f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 7) {
        data, pr(2, j), wac(2, j), eta(2, j);
      }
    }
    {
      static const float values[] = {
        1.00000f, 166.800f, 0.75064f, 1.03840f, 161.400f, 0.77616f,
          1.07680f, 155.100f, 0.80256f, 1.12000f, 145.800f, 0.82808f,
          1.17400f, 129.900f, 0.84392f, 1.19800f, 120.000f, 0.82808f,
          1.22200f, 106.800f, 0.77616f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 7) {
        data, pr(3, j), wac(3, j), eta(3, j);
      }
    }
    {
      static const float values[] = {
        1.00000f, 191.700f, 0.76536f, 1.05520f, 188.100f, 0.77616f,
          1.13200f, 179.100f, 0.82808f, 1.18600f, 170.100f, 0.85448f,
          1.24000f, 156.600f, 0.88000f, 1.28440f, 138.300f, 0.82808f,
          1.29280f, 133.200f, 0.80786f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 7) {
        data, pr(4, j), wac(4, j), eta(4, j);
      }
    }
    {
      static const float values[] = {
        1.00000f, 219.900f, 0.72512f, 1.09600f, 218.400f, 0.77616f,
          1.17760f, 214.200f, 0.82808f, 1.22200f, 210.300f, 0.85648f,
          1.27600f, 203.600f, 0.88000f, 1.31440f, 196.800f, 0.90112f,
          1.32660f, 194.100f, 0.90376f, 1.33600f, 191.700f, 0.90112f,
          1.36600f, 186.200f, 0.88000f, 1.40080f, 171.300f, 0.82808f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 10) {
        data, pr(5, j), wac(5, j), eta(5, j);
      }
    }
    {
      static const float values[] = {
        1.00000f, 249.900f, 0.68816f, 1.15000f, 249.900f, 0.77616f,
          1.24000f, 246.600f, 0.82808f, 1.30000f, 242.700f, 0.85448f,
          1.36200f, 238.200f, 0.88000f, 1.38280f, 233.400f, 0.90112f,
          1.40800f, 228.300f, 0.91080f, 1.42960f, 224.100f, 0.90112f,
          1.45360f, 216.600f, 0.88000f, 1.49800f, 203.400f, 0.82720f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 10) {
        data, pr(6, j), wac(6, j), eta(6, j);
      }
    }
    {
      static const float values[] = {
        1.00000f, 283.200f, 0.66152f, 1.11400f, 283.200f, 0.72512f,
          1.22800f, 283.200f, 0.77616f, 1.32880f, 279.900f, 0.82808f,
          1.39000f, 276.600f, 0.85888f, 1.43440f, 272.600f, 0.88000f,
          1.69680f, 264.300f, 0.90112f, 1.56240f, 254.700f, 0.88000f,
          1.58680f, 261.800f, 0.82808f, 1.60000f, 237.000f, 0.81752f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 10) {
        data, pr(7, j), wac(7, j), eta(7, j);
      }
    }
    {
      static const float values[] = {
        1.00000f, 316.800f, 0.60016f, 1.06600f, 316.800f, 0.64152f,
          1.20280f, 316.800f, 0.72512f, 1.33120f, 316.500f, 0.77616f,
          1.46160f, 312.900f, 0.82808f, 1.51000f, 308.400f, 0.85888f,
          1.60000f, 300.000f, 0.88000f, 1.64200f, 293.400f, 0.85888f,
          1.67200f, 288.300f, 0.82808f, 1.72000f, 276.600f, 0.78672f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 10) {
        data, pr(8, j), wac(8, j), eta(8, j);
      }
    }
    {
      static const float values[] = {
        1.00000f, 350.100f, 0.56936f, 1.15600f, 350.100f, 0.66152f,
          1.33000f, 350.100f, 0.72512f, 1.48600f, 350.100f, 0.77616f,
          1.60000f, 350.100f, 0.80256f, 1.67200f, 349.200f, 0.80784f,
          1.75000f, 366.800f, 0.80256f, 1.80040f, 341.700f, 0.77616f,
          1.85200f, 333.300f, 0.76536f, 1.87600f, 328.200f, 0.72512f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 10) {
        data, pr(9, j), wac(9, j), eta(9, j);
      }
    }
    {
      static const float values[] = {
        1.00000f, 375.000f, 0.51744f, 1.24480f, 375.000f, 0.64152f,
          1.66800f, 375.000f, 0.72512f, 1.60000f, 375.000f, 0.75592f,
          1.72000f, 375.000f, 0.76120f, 1.81000f, 375.000f, 0.75066f,
          1.87000f, 376.700f, 0.72512f, 1.99000f, 368.400f, 0.64152f
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
