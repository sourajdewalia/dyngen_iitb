#include <fem.hpp> // Fortran EMulation library of fable module

namespace Default_Maps\* {

using namespace fem::major_types;

struct common_comp
{
  arr<float> cn;
  arr<float, 2> pr;
  arr<float, 2> wac;
  arr<float, 2> eta;
  int n;
  arr<int> np;

  common_comp() :
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
  common_comp
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

//C        BLKCMP
//C        THIS IS GENERALIZED COMPRESSOR MAP FOR UNREALISTIC SUPERSONIC
//C        ENGINE
//C
void
blockdata_unnamed(
  common& cmn)
{
  FEM_CMN_SVE(blockdata_unnamed);
  // COMMON comp
  arr_ref<float> cn(cmn.cn, dimension(15));
  arr_ref<float, 2> pr(cmn.pr, dimension(15, 15));
  arr_ref<float, 2> wac(cmn.wac, dimension(15, 15));
  arr_ref<float, 2> eta(cmn.eta, dimension(15, 15));
  arr_ref<int> np(cmn.np, dimension(15));
  //
  int j = fem::int0;
  if (is_called_first_time) {
    fem::data((values, 10, 2*datum(6), 2*datum(8), 4*datum(10),
      2*datum(8), 5*datum(0))), cmn.n, np;
    {
      fem::data_values data;
      data.values, 0.562f, 0.674f, 0.787f, 0.899f, 1.0f, 1.034f, 1.067f, 1.124f;
      data.values, 1.236f, 1.292f, 5*datum(0.f);
      data, cn;
    }
    {
      static const float values[] = {
        1.00000f, 51.000f, 0.59082f, 1.84000f, 50.200f, 0.62178f,
          2.42800f, 49.500f, 0.64242f, 2.86900f, 48.800f, 0.65274f,
          3.83500f, 46.700f, 0.67338f, 4.54900f, 44.500f, 0.64242f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 6) {
        data, pr(1, j), wac(1, j), eta(1, j);
      }
    }
    {
      static const float values[] = {
        1.00000f, 59.300f, 0.59082f, 1.96600f, 59.300f, 0.64242f,
          3.09300f, 58.800f, 0.69402f, 3.93300f, 57.900f, 0.72498f,
          4.68900f, 56.700f, 0.74562f, 5.52900f, 55.000f, 0.72498f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 6) {
        data, pr(2, j), wac(2, j), eta(2, j);
      }
    }
    {
      static const float values[] = {
        1.00000f, 70.000f, 0.58566f, 1.84000f, 70.000f, 0.64242f,
          2.68000f, 70.000f, 0.68370f, 3.40800f, 69.500f, 0.72498f,
          4.52100f, 68.800f, 0.77744f, 5.64500f, 67.900f, 0.79292f,
          6.31300f, 66.400f, 0.77744f, 6.52300f, 65.700f, 0.76970f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 8) {
        data, pr(3, j), wac(3, j), eta(3, j);
      }
    }
    {
      static const float values[] = {
        1.00000f, 84.800f, 0.58050f, 2.00800f, 84.800f, 0.64242f,
          3.42900f, 84.800f, 0.72498f, 4.60500f, 84.800f, 0.77744f,
          5.69700f, 84.000f, 0.80840f, 6.61400f, 83.300f, 0.82904f,
          7.53800f, 81.700f, 0.80840f, 7.95800f, 80.500f, 0.79292f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 8) {
        data, pr(4, j), wac(4, j), eta(4, j);
      }
    }
    {
      static const float values[] = {
        1.00000f, 101.700f, 0.57190f, 2.51700f, 101.700f, 0.64242f,
          3.98200f, 101.700f, 0.72498f, 5.27700f, 101.700f, 0.77744f,
          6.48800f, 101.200f, 0.80840f, 7.20200f, 101.000f, 0.83936f,
          8.00000f, 100.000f, 0.86000f, 8.56700f, 99.500f, 0.83936f,
          9.38600f, 98.100f, 0.80840f, 9.59600f, 97.400f, 0.80582f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 10) {
        data, pr(5, j), wac(5, j), eta(5, j);
      }
    }
    {
      static const float values[] = {
        1.00000f, 108.100f, 0.57018f, 2.85500f, 108.100f, 0.64242f,
          4.29700f, 108.100f, 0.72498f, 5.61300f, 108.100f, 0.77744f,
          6.93600f, 107.600f, 0.80840f, 7.62200f, 107.100f, 0.83936f,
          8.54600f, 106.700f, 0.86000f, 9.13400f, 106.000f, 0.83936f,
          9.92500f, 104.500f, 0.80840f, 10.21900f, 104.000f, 0.80410f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 10) {
        data, pr(6, j), wac(6, j), eta(6, j);
      }
    }
    {
      static const float values[] = {
        1.00000f, 114.500f, 0.55986f, 3.26100f, 114.500f, 0.64242f,
          4.75900f, 114.500f, 0.72498f, 6.11700f, 114.500f, 0.77744f,
          7.45400f, 114.500f, 0.80840f, 8.30800f, 114.300f, 0.83936f,
          9.21800f, 113.600f, 0.86968f, 9.63800f, 113.300f, 0.83936f,
          10.51300f, 112.600f, 0.80840f, 10.99600f, 112.400f, 0.79808f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 10) {
        data, pr(7, j), wac(7, j), eta(7, j);
      }
    }
    {
      static const float values[] = {
        1.00000f, 122.900f, 0.53922f, 1.68600f, 122.900f, 0.57018f,
          3.84900f, 122.900f, 0.64242f, 5.46600f, 122.000f, 0.72498f,
          6.86600f, 122.900f, 0.77744f, 8.37100f, 122.900f, 0.80840f,
          8.96600f, 122.600f, 0.82388f, 9.88300f, 122.100f, 0.83936f,
          10.91200f, 121.700f, 0.80840f, 11.81500f, 120.700f, 0.77744f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 10) {
        data, pr(8, j), wac(8, j), eta(8, j);
      }
    }
    {
      static const float values[] = {
        1.00000f, 139.800f, 0.47644f, 4.35300f, 139.800f, 0.60114f,
          7.62200f, 139.800f, 0.72498f, 10.21900f, 139.800f,
          0.77744f, 11.05900f, 139.800f, 0.78260f, 11.89900f,
          139.500f, 0.77744f, 13.15900f, 139.300f, 0.72498f,
          13.65600f, 139.000f, 0.69918f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 8) {
        data, pr(9, j), wac(9, j), eta(9, j);
      }
    }
    {
      static const float values[] = {
        1.00000f, 146.200f, 0.46612f, 3.76500f, 146.200f, 0.57018f,
          6.48100f, 146.200f, 0.64242f, 9.17600f, 146.200f, 0.72498f,
          10.21900f, 146.200f, 0.75078f, 11.47900f, 166.200f,
          0.75078f, 12.71100f, 146.200f, 0.72498f, 14.41200f,
          146.200f, 0.64242f
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
