#include <fem.hpp> // Fortran EMulation library of fable module

namespace Default_Maps\* {

using namespace fem::major_types;

struct common_lturb
{
  arr<float> tff;
  arr<float, 2> cn;
  arr<float, 2> dh;
  arr<float, 2> eta;
  int n;
  arr<int> np;

  common_lturb() :
    tff(dimension(15), fem::fill0),
    cn(dimension(15, 15), fem::fill0),
    dh(dimension(15, 15), fem::fill0),
    eta(dimension(15, 15), fem::fill0),
    n(fem::int0),
    np(dimension(15), fem::fill0)
  {}
};

struct common :
  fem::common,
  common_lturb
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

void
blockdata_unnamed(
  common& cmn)
{
  FEM_CMN_SVE(blockdata_unnamed);
  // COMMON lturb
  arr_ref<float> tff(cmn.tff, dimension(15));
  arr_ref<float, 2> cn(cmn.cn, dimension(15, 15));
  arr_ref<float, 2> dh(cmn.dh, dimension(15, 15));
  arr_ref<float, 2> eta(cmn.eta, dimension(15, 15));
  arr_ref<int> np(cmn.np, dimension(15));
  //
  int j = fem::int0;
  if (is_called_first_time) {
    fem::data((values, 11, 9*datum(15), 12, 9, 4*datum(0))), cmn.n, np;
    {
      fem::data_values data;
      data.values, 88.670f, 102.795f, 116.835f, 129.330f, 1461.045f,
        145.725f, 150.000f, 153.365f;
      data.values, 156.605f, 159.780f, 163.170f, 4*datum(0.0f);
      data, tff;
    }
    {
      static const float values[] = {
        0.3682f, 0.0018f, 0.7120f, 0.5336f, 0.0026f, 0.7300f,
          0.7365f, 0.0035f, 0.7472f, 0.9756f, 0.0044f, 0.7300f,
          1.2166f, 0.0051f, 0.7160f, 1.6173f, 0.0056f, 0.7000f,
          1.6201f, 0.0059f, 0.6850f, 1.7673f, 0.0061f, 0.6730f,
          2.0267f, 0.0062f, 0.6452f, 2.2827f, 0.0061f, 0.6200f,
          2.6665f, 0.0057f, 0.6000f, 2.6137f, 0.0053f, 0.5750f,
          2.8166f, 0.0044f, 0.5310f, 2.9656f, 0.0035f, 0.5000f,
          3.3138f, 0.0001f, 0.3850f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 15) {
        data, cn(1, j), dh(1, j), eta(1, j);
      }
    }
    {
      static const float values[] = {
        0.3682f, 0.0026f, 0.8000f, 0.5518f, 0.0039f, 0.8100f,
          0.7919f, 0.0054f, 0.8200f, 1.0672f, 0.0069f, 0.6300f,
          1.2882f, 0.0080f, 0.8300f, 1.6446f, 0.0087f, 0.8290f,
          1.6937f, 0.0096f, 0.8100f, 1.8956f, 0.0101f, 0.8000f,
          2.0619f, 0.0104f, 0.7850f, 2.2273f, 0.0107f, 0.7600f,
          2.3747f, 0.0108f, 0.7650f, 2.6229f, 0.0106f, 0.7000f,
          2.8720f, 0.0101f, 0.6800f, 3.0555f, 0.0094f, 0.6650f,
          3.3138f, 0.0077f, 0.5900f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 15) {
        data, cn(2, j), dh(2, j), eta(2, j);
      }
    }
    {
      static const float values[] = {
        0.3682f, 0.0031f, 0.8000f, 0.5911f, 0.0051f, 0.8300f,
          0.8655f, 0.0071f, 0.8600f, 1.0764f, 0.0087f, 0.8630f,
          1.2519f, 0.0099f, 0.8670f, 1.4356f, 0.0111f, 0.8700f,
          1.6201f, 0.0122f, 0.8720f, 1.8609f, 0.0134f, 0.8720f,
          2.0247f, 0.0143f, 0.8700f, 2.2655f, 0.0152f, 0.8670f,
          2.6302f, 0.0157f, 0.8600f, 2.5956f, 0.0162f, 0.8500f,
          2.7791f, 0.0166f, 0.8300f, 3.0555f, 0.0167f, 0.8000f,
          3.3138f, 0.0164f, 0.7600f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 15) {
        data, cn(3, j), dh(3, j), eta(3, j);
      }
    }
    {
      static const float values[] = {
        0.3682f, 0.0033f, 0.7995f, 0.6237f, 0.0038f, 0.8000f,
          0.6810f, 0.0061f, 0.8600f, 0.8837f, 0.0078f, 0.8600f,
          1.1047f, 0.0096f, 0.8680f, 1.2882f, 0.0110f, 0.8730f,
          1.5090f, 0.0126f, 0.8800f, 1.7682f, 0.0161f, 0.8830f,
          2.0429f, 0.0159f, 0.8835f, 2.2091f, 0.0166f, 0.8830f,
          2.3747f, 0.0176f, 0.8800f, 2.6067f, 0.0183f, 0.8740f,
          2.8720f, 0.0191f, 0.8600f, 3.1291f, 0.0195f, 0.8350f,
          3.3138f, 0.0197f, 0.8200f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 15) {
        data, cn(4, j), dh(4, j), eta(4, j);
      }
    }
    {
      static const float values[] = {
        0.3682f, 0.0036f, 0.7750f, 0.5065f, 0.0049f, 0.6000f,
          0.8000f, 0.7365f, 0.0071f, 0.8680f, 0.9756f, 0.8600f,
          1.2882f, 0.0119f, 0.8750f, 1.5647f, 0.0161f, 0.8900f,
          1.7301f, 0.0155f, 0.8912f, 1.9690f, 0.0172f, 0.8960f,
          2.0983f, 0.0181f, 0.8955f, 2.2637f, 0.0192f, 0.8970f,
          2.6332f, 0.0202f, 0.8961f, 2.6691f, 0.0214f, 0.8900f,
          2.9656f, 0.0226f, 0.8790f, 3.1866f, 0.0235f, 0.8671f,
          3.3138f, 0.0239f, 0.8600f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 15) {
        data, cn(5, j), dh(5, j), eta(5, j);
      }
    }
    {
      static const float values[] = {
        0.3682f, 0.0038f, 0.7600f, 0.6164f, 0.0064f, 0.8000f,
          0.8372f, 0.0087f, 0.8450f, 1.1067f, 0.0113f, 0.8600f,
          1.2882f, 0.0130f, 0.8730f, 1.5283f, 0.0152f, 0.8900f,
          1.7482f, 0.0171f, 0.8950f, 1.9509f, 0.0187f, 0.9000f,
          2.2133f, 0.0209f, 0.9005f, 2.6302f, 0.0226f, 0.9010f,
          2.6510f, 0.0266f, 0.9004f, 2.8619f, 0.0259f, 0.9000f,
          3.1386f, 0.0286f, 0.8900f, 3.2586f, 0.0303f, 0.8800f,
          3.3138f, 0.0319f, 0.8735f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 15) {
        data, cn(6, j), dh(6, j), eta(6, j);
      }
    }
    {
      static const float values[] = {
        0.3682f, 0.0044f, 0.7310f, 0.7728f, 0.0089f, 0.8000f,
          1.0129f, 0.0115f, 0.8300f, 1.2659f, 0.0141f, 0.8600f,
          1.6729f, 0.0162f, 0.8750f, 1.6785f, 0.0181f, 0.8900f,
          1.8409f, 0.0197f, 0.8930f, 2.0267f, 0.0216f, 0.8975f,
          2.1901f, 0.0235f, 0.8999f, 2.3000f, 0.0250f, 0.9000f,
          2.3929f, 0.0265f, 0.8980f, 2.5038f, 0.0284f, 0.8937f,
          2.5583f, 0.0296f, 0.8900f, 2.6137f, 0.0316f, 0.8799f,
          2.6319f, 0.0329f, 0.8710f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 15) {
        data, cn(7, j), dh(7, j), eta(7, j);
      }
    }
    {
      static const float values[] = {
        0.3682f, 0.0068f, 0.7100f, 0.6072f, 0.0078f, 0.7450f,
          0.7919f, 0.0102f, 0.7680f, 0.9756f, 0.0124f, 0.8000f,
          1.2337f, 0.0153f, 0.8380f, 1.6548f, 0.0177f, 0.8600f,
          1.6383f, 0.0201f, 0.8712f, 1.8609f, 0.0226f, 0.8780f,
          1.9509f, 0.0262f, 0.8800f, 2.0801f, 0.0261f, 0.8775f,
          2.1537f, 0.0274f, 0.8760f, 2.2091f, 0.0285f, 0.8722f,
          2.2637f, 0.0299f, 0.8660f, 2.3009f, 0.0314f, 0.8600f,
          2.3051f, 0.0321f, 0.8480f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 15) {
        data, cn(8, j), dh(8, j), eta(8, j);
      }
    }
    {
      static const float values[] = {
        0.3682f, 0.0054f, 0.6780f, 0.5518f, 0.0080f, 0.7000f,
          0.6629f, 0.0096f, 0.7125f, 0.8282f, 0.0119f, 0.7350f,
          1.0129f, 0.0141f, 0.7690f, 1.1691f, 0.0160f, 0.8000f,
          1.2337f, 0.0169f, 0.8060f, 1.3809f, 0.0188f, 0.8225f,
          1.5283f, 0.0209f, 0.8395f, 1.6201f, 0.0223f, 0.8450f,
          1.7482f, 0.0244f, 0.8470f, 1.8409f, 0.0263f, 0.8445f,
          1.8954f, 0.0279f, 0.8330f, 1.9147f, 0.0289f, 0.8235f,
          1.9237f, 0.0303f, 0.8080f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 15) {
        data, cn(9, j), dh(9, j), eta(9, j);
      }
    }
    {
      static const float values[] = {
        0.3682f, 0.0061f, 0.6380f, 0.4782f, 0.0078f, 0.6550f,
          0.6447f, 0.3104f, 0.6700f, 0.7546f, 0.0122f, 0.6850f,
          0.8655f, 0.0139f, 0.7000f, 0.9754f, 0.0157f, 0.7110f,
          1.1047f, 0.0181f, 0.7180f, 1.2015f, 0.0201f, 0.7180f,
          1.2701f, 0.0217f, 3.7170f, 1.3073f, 0.9230f, 0.7140f,
          1.3365f, 0.0244f, 0.7000f, 1.3407f, 0.0251f, 0.6890f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 12) {
        data, cn(10, j), dh(10, j), eta(10, j);
      }
    }
    {
      static const float values[] = {
        0.3682f, 0.0069f, 0.6000f, 0.4418f, 0.0086f, 0.6000f,
          0.5518f, 0.0106f, 0.6120f, 0.6447f, 0.0123f, 0.6170f,
          0.7365f, 0.0141f, 0.6210f, 0.8282f, 0.0159f, 0.6258f,
          0.8837f, 0.0172f, 0.6250f, 0.9391f, 0.0186f, 0.6230f,
          0.9715f, 0.0201f, 0.6009f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 9) {
        data, cn(11, j), dh(11, j), eta(11, j);
      }
    }
  }
  //C
}

} // namespace Default_Maps\*
