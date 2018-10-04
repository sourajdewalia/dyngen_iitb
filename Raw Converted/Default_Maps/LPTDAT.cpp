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
      data.values, 70.776f, 82.236f, 93.468f, 103.464f, 112.836f,
        116.583f, 120.000f, 122.676f;
      data.values, 125.124f, 127.824f, 130.536f, 4*datum(0.f);
      data, tff;
    }
    {
      static const float values[] = {
        0.3522f, 0.0016f, 0.7120f, 0.5106f, 0.0023f, 0.7300f,
          0.7046f, 0.0031f, 0.7672f, 0.9330f, 0.0038f, 0.7300f,
          1.1618f, 0.0065f, 0.7160f, 1.3556f, 0.0049f, 0.7000f,
          1.5697f, 0.0052f, 0.6850f, 1.6905f, 0.0056f, 0.6730f,
          1.9367f, 0.0055f, 0.6452f, 2.1835f, 0.0056f, 0.6200f,
          2.3593f, 0.0051f, 0.6000f, 2.5001f, 0.0047f, 0.5750f,
          2.6961f, 0.0038f, 0.5310f, 2.8175f, 0.0031f, 0.5000f,
          3.1698f, 0.0001f, 0.3850f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 15) {
        data, cn(1, j), dh(1, j), eta(1, j);
      }
    }
    {
      static const float values[] = {
        0.3522f, 0.0023f, 0.8000f, 0.5278f, 0.0035f, 0.8100f,
          0.7575f, 0.0067f, 0.8200f, 1.0208f, 0.0061f, 0.8300f,
          1.2322f, 0.0070f, 0.8300f, 1.3818f, 0.0076f, 0.8290f,
          1.6201f, 0.0084f, 0.8100f, 1.8130f, 0.0089f, 0.8000f,
          1.9723f, 0.0092f, 0.7850f, 2.1305f, 0.0096f, 0.7600f,
          2.2715f, 0.0095f, 0.7650f, 2.5089f, 0.0093f, 0.7000f,
          2.7471f, 0.0089f, 0.6800f, 2.9227f, 0.0083f, 0.6450f,
          3.1698f, 0.0068f, 0.5900f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 15) {
        data, cn(2, j), dh(2, j), eta(2, j);
      }
    }
    {
      static const float values[] = {
        0.3522f, 0.0027f, 0.8000f, 0.5654f, 0.0045f, 0.8300f,
          0.8279f, 0.0063f, 0.8600f, 1.0296f, 0.0076f, 0.8630f,
          1.1975f, 0.0087f, 0.8670f, 1.3730f, 0.0098f, 0.8700f,
          1.5697f, 0.0107f, 0.8720f, 1.7609f, 0.0118f, 0.8720f,
          1.9367f, 0.0126f, 0.8700f, 2.1679f, 0.0134f, 0.8670f,
          2.3245f, 0.0139f, 0.8600f, 2.4827f, 0.0162f, 0.8500f,
          2.6583f, 0.0146f, 0.8300f, 2.9227f, 0.0167f, 0.8000f,
          3.1698f, 0.0145f, 0.7600f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 15) {
        data, cn(3, j), dh(3, j), eta(3, j);
      }
    }
    {
      static const float values[] = {
        0.3522f, 0.0029f, 0.7995f, 0.6052f, 0.0034f, 0.8000f,
          0.6514f, 0.0054f, 0.8400f, 0.8452f, 0.0069f, 0.8600f,
          1.0567f, 0.0084f, 0.8680f, 1.2322f, 0.0097f, 0.8730f,
          1.4634f, 0.0111f, 0.8800f, 1.6722f, 0.0124f, 0.8830f,
          1.9560f, 0.0160f, 0.8835f, 2.1131f, 0.0146f, 0.8830f,
          2.2715f, 0.0153f, 0.8800f, 2.6915f, 0.0161f, 0.8740f,
          2.7471f, 0.0168f, 0.8600f, 2.9931f, 0.0172f, 0.8350f,
          3.1698f, 0.0173f, 0.8200f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 15) {
        data, cn(4, j), dh(4, j), eta(4, j);
      }
    }
    {
      static const float values[] = {
        0.3522f, 0.0031f, 0.7750f, 0.4844f, 0.0043f, 0.8000f,
          0.7044f, 0.0062f, 0.8480f, 0.9330f, 0.0081f, 0.8600f,
          1.2322f, 0.0105f, 0.8750f, 1.4967f, 0.0124f, 0.8900f,
          1.6568f, 0.0136f, 0.8912f, 1.8834f, 0.0152f, 0.8940f,
          2.0071f, 0.0157f, 0.8955f, 2.1652f, 0.0169f, 0.8970f,
          2.3274f, 0.0178f, 0.8961f, 2.5531f, 0.0189f, 0.8900f,
          2.8175f, 0.0199f, 0.8790f, 3.0461f, 0.0207f, 0.8671f,
          3.1698f, 0.0210f, 0.8600f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 15) {
        data, cn(5, j), dh(5, j), eta(5, j);
      }
    }
    {
      static const float values[] = {
        0.3522f, 0.0034f, 0.7600f, 0.5896f, 0.0057f, 0.8000f,
          0.8008f, 0.0076f, 0.8450f, 1.0567f, 0.0100f, 0.8600f,
          1.2322f, 0.0114f, 0.8730f, 1.4619f, 0.0134f, 0.8900f,
          1.6722f, 0.0150f, 0.8950f, 1.8660f, 0.0165f, 0.9000f,
          2.1171f, 0.0184f, 0.9005f, 2.3245f, 0.0199f, 0.9010f,
          2.5357f, 0.0214f, 0.9004f, 2.7375f, 0.0228f, 0.9000f,
          3.0019f, 0.0251f, 0.8900f, 3.1167f, 0.0267f, 0.8800f,
          3.1698f, 0.0280f, 0.8735f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 15) {
        data, cn(6, j), dh(6, j), eta(6, j);
      }
    }
    {
      static const float values[] = {
        0.3522f, 0.0038f, 0.7310f, 0.7392f, 0.0078f, 0.8000f,
          0.9689f, 0.0101f, 0.8300f, 1.2109f, 0.0126f, 0.8600f,
          1.4089f, 0.0142f, 0.8750f, 1.6056f, 0.0159f, 0.8900f,
          1.7609f, 0.0173f, 0.8930f, 1.9367f, 0.0190f, 0.8975f,
          2.0948f, 0.0207f, 0.8999f, 2.2000f, 0.0220f, 0.9000f,
          2.2889f, 0.0233f, 0.8980f, 2.3949f, 0.0250f, 0.8937f,
          2.4471f, 0.0261f, 0.8900f, 2.5001f, 0.0276f, 0.8799f,
          2.5175f, 0.0290f, 0.8710f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 15) {
        data, cn(7, j), dh(7, j), eta(7, j);
      }
    }
    {
      static const float values[] = {
        0.3522f, 0.0042f, 0.7100f, 0.5808f, 0.0069f, 0.7450f,
          0.7575f, 0.0090f, 0.7680f, 0.9330f, 0.0109f, 0.8000f,
          1.1801f, 0.0135f, 0.8380f, 1.3915f, 0.0156f, 0.8600f,
          1.5671f, 0.0177f, 0.8712f, 1.7609f, 0.0199f, 0.8780f,
          1.8660f, 0.0213f, 0.8800f, 1.9897f, 0.0230f, 0.8775f,
          2.0601f, 0.0261f, 0.8760f, 2.1131f, 0.0251f, 0.8722f,
          2.1652f, 0.0263f, 0.8660f, 2.2009f, 0.0276f, 0.8600f,
          2.2048f, 0.0283f, 0.8480f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 15) {
        data, cn(8, j), dh(8, j), eta(8, j);
      }
    }
    {
      static const float values[] = {
        0.3522f, 0.0047f, 0.6780f, 0.5278f, 0.0070f, 0.7000f,
          0.6360f, 0.0084f, 0.7125f, 0.7922f, 0.0104f, 0.7350f,
          0.9689f, 0.0124f, 0.7690f, 1.1183f, 0.0141f, 0.8000f,
          1.1801f, 0.0148f, 0.8060f, 1.3209f, 0.0166f, 0.8225f,
          1.4619f, 0.0184f, 0.8395f, 1.5497f, 0.0196f, 0.8450f,
          1.6722f, 0.0216f, 0.8470f, 1.7609f, 0.0232f, 0.8445f,
          1.8130f, 0.0245f, 0.8330f, 1.8315f, 0.0255f, 0.8235f,
          1.8401f, 0.0267f, 0.8080f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 15) {
        data, cn(9, j), dh(9, j), eta(9, j);
      }
    }
    {
      static const float values[] = {
        0.3522f, 0.0056f, 0.6380f, 0.4574f, 0.0069f, 0.6550f,
          0.6167f, 0.0092f, 0.6700f, 0.7218f, 0.0107f, 0.6850f,
          0.8279f, 0.0123f, 0.7000f, 0.9330f, 0.0138f, 0.7110f,
          1.0567f, 0.0159f, 0.7180f, 1.1493f, 0.0177f, 0.7180f,
          1.2148f, 0.0191f, 0.7170f, 1.2505f, 0.0202f, 0.7140f,
          1.2786f, 0.0214f, 0.7000f, 1.2824f, 0.0221f, 0.6890f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 12) {
        data, cn(10, j), dh(10, j), eta(10, j);
      }
    }
    {
      static const float values[] = {
        0.3522f, 0.0061f, 0.6000f, 0.4226f, 0.0075f, 0.6000f,
          0.5278f, 0.0093f, 0.6120f, 0.6167f, 0.0108f, 0.6170f,
          0.7044f, 0.0124f, 0.6210f, 0.7922f, 0.0160f, 0.6258f,
          0.8452f, 0.0151f, 0.6250f, 0.8983f, 0.0164f, 0.6230f,
          0.9293f, 0.0177f, 0.6009f
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
