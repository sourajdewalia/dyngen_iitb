#include <fem.hpp> // Fortran EMulation library of fable module

namespace Default_Maps\* {

using namespace fem::major_types;

struct common_hturb
{
  arr<float> tff;
  arr<float, 2> cn;
  arr<float, 2> dh;
  arr<float, 2> eta;
  int n;
  arr<int> np;

  common_hturb() :
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
  common_hturb
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

//C
//C        Performance data for inner-turbine map (BLOCK DATA)
//C
void
blockdata_unnamed(
  common& cmn)
{
  FEM_CMN_SVE(blockdata_unnamed);
  // COMMON hturb
  arr_ref<float> tff(cmn.tff, dimension(15));
  arr_ref<float, 2> cn(cmn.cn, dimension(15, 15));
  arr_ref<float, 2> dh(cmn.dh, dimension(15, 15));
  arr_ref<float, 2> eta(cmn.eta, dimension(15, 15));
  arr_ref<int> np(cmn.np, dimension(15));
  //
  int j = fem::int0;
  if (is_called_first_time) {
    fem::data((values, 10, 9*datum(15), 12, 5*datum(0.f))), cmn.n, np;
    {
      fem::data_values data;
      data.values, 39.670f, 42.990f, 47.660f, 48.610f, 49.175f,
        49.600f, 50.000f, 50.425f;
      data.values, 50.920f, 51.575f, 5*datum(0.f);
      data, tff;
    }
    {
      static const float values[] = {
        0.1872f, 0.0032f, 0.6219f, 0.3372f, 0.0057f, 0.7078f,
          0.5156f, 0.0086f, 0.7868f, 0.7128f, 0.0108f, 0.8090f,
          0.9382f, 0.0133f, 0.8090f, 1.1662f, 0.0152f, 0.7963f,
          1.3138f, 0.0166f, 0.7779f, 1.5382f, 0.0174f, 0.7622f,
          1.7266f, 0.0179f, 0.7078f, 1.9326f, 0.0176f, 0.7635f,
          2.1500f, 0.0167f, 0.6068f, 2.6058f, 0.0166f, 0.5309f,
          2.5892f, 0.0120f, 0.6773f, 2.7862f, 0.0082f, 0.6065f,
          2.9460f, 0.0034f, 0.3034f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 15) {
        data, cn(1, j), dh(1, j), eta(1, j);
      }
    }
    {
      static const float values[] = {
        0.1872f, 0.0038f, 0.6068f, 0.3942f, 0.0080f, 0.7078f,
          0.5816f, 0.0113f, 0.8090f, 0.7128f, 0.0136f, 0.8292f,
          0.8662f, 0.0156f, 0.8363f, 0.9806f, 0.0176f, 0.8393f,
          1.1068f, 0.0192f, 0.8368f, 1.2756f, 0.0212f, 0.8302f,
          1.6650f, 0.0228f, 0.8256f, 1.7068f, 0.0268f, 0.8090f,
          1.9696f, 0.0260f, 0.7696f, 2.2706f, 0.0261f, 0.7078f,
          2.6970f, 0.0261f, 0.6068f, 3.0960f, 0.0188f, 0.5056f,
          3.3776f, 0.0128f, 0.6197f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 15) {
        data, cn(2, j), dh(2, j), eta(2, j);
      }
    }
    {
      static const float values[] = {
        0.1872f, 0.0046f, 0.5766f, 0.4362f, 0.0100f, 0.7078f,
          0.6568f, 0.0166f, 0.8090f, 0.8726f, 0.0186f, 0.8494f,
          1.0696f, 0.0216f, 0.8543f, 1.2382f, 0.0260f, 0.8515f,
          1.4638f, 0.0268f, 0.8494f, 1.6882f, 0.0292f, 0.8409f,
          1.9696f, 0.0316f, 0.8262f, 2.2138f, 0.0331f, 0.8090f,
          2.5220f, 0.0344f, 0.7579f, 2.8050f, 0.0346f, 0.7078f,
          3.0392f, 0.0340f, 0.6652f, 3.2648f, 0.0324f, 0.6068f,
          3.3776f, 0.0312f, 0.5865f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 15) {
        data, cn(3, j), dh(3, j), eta(3, j);
      }
    }
    {
      static const float values[] = {
        0.1872f, 0.0052f, 0.5643f, 0.2550f, 0.0068f, 0.6068f,
          0.6786f, 0.0120f, 0.7078f, 0.6962f, 0.0164f, 0.8090f,
          0.9168f, 0.0206f, 0.8496f, 1.1462f, 0.0244f, 0.8596f,
          1.3882f, 0.0280f, 0.8596f, 1.5618f, 0.0304f, 0.8575f,
          1.8010f, 0.0336f, 0.8535f, 1.9794f, 0.0356f, 0.8696f,
          2.2796f, 0.0388f, 0.8363f, 2.5138f, 0.0412f, 0.8262f,
          2.8336f, 0.0661f, 0.8090f, 3.1622f, 0.0672f, 0.7797f,
          3.3774f, 0.0494f, 0.7586f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 15) {
        data, cn(4, j), dh(4, j), eta(4, j);
      }
    }
    {
      static const float values[] = {
        0.1872f, 0.0056f, 0.5562f, 0.3000f, 0.0088f, 0.6068f,
          0.5256f, 0.0166f, 0.7078f, 0.7500f, 0.0192f, 0.8090f,
          0.9756f, 0.0236f, 0.8696f, 1.2756f, 0.0288f, 0.8697f,
          1.6826f, 0.0321f, 0.8696f, 1.7638f, 0.0360f, 0.8662f,
          2.0450f, 0.0400f, 0.8615f, 2.3362f, 0.0444f, 0.8555f,
          2.6450f, 0.0496f, 0.8520f, 2.8706f, 0.0540f, 0.8494f,
          3.0764f, 0.0596f, 0.8494f, 3.1520f, 0.0640f, 0.8532f,
          3.1618f, 0.0661f, 0.8570f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 15) {
        data, cn(5, j), dh(5, j), eta(5, j);
      }
    }
    {
      static const float values[] = {
        0.1872f, 0.0068f, 0.5309f, 0.3568f, 0.0120f, 0.6068f,
          0.6196f, 0.0192f, 0.7078f, 0.8628f, 0.0252f, 0.8090f,
          1.0932f, 0.0300f, 0.8696f, 1.2852f, 0.0360f, 0.8697f,
          1.5010f, 0.0386f, 0.8819f, 1.6882f, 0.0621f, 0.8899f,
          1.9138f, 0.0672f, 0.8940f, 2.1266f, 0.0526f, 0.8969f,
          2.2706f, 0.0566f, 0.8975f, 2.6226f, 0.0612f, 0.8976f,
          2.6950f, 0.0660f, 0.8908f, 2.5372f, 0.0668f, 0.8937f,
          2.5558f, 0.0698f, 0.8896f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 15) {
        data, cn(6, j), dh(6, j), eta(6, j);
      }
    }
    {
      static const float values[] = {
        0.1872f, 0.0080f, 0.5062f, 0.6316f, 0.0166f, 0.6068f,
          0.6866f, 0.0236f, 0.7078f, 0.9568f, 0.0308f, 0.8090f,
          1.2010f, 0.0372f, 0.8696f, 1.3836f, 0.0616f, 0.8697f,
          1.5108f, 0.0448f, 0.8797f, 1.6186f, 0.0676f, 0.8899f,
          1.7650f, 0.0510f, 0.8954f, 1.8618f, 0.0544f, 0.9000f,
          1.9558f, 0.0576f, 0.9010f, 2.0000f, 0.0600f, 0.9000f,
          2.0650f, 0.0626f, 0.8980f, 2.0826f, 0.0660f, 0.8925f,
          2.1010f, 0.0700f, 0.8793f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 15) {
        data, cn(7, j), dh(7, j), eta(7, j);
      }
    }
    {
      static const float values[] = {
        0.1872f, 0.0088f, 0.5051f, 0.6836f, 0.0196f, 0.6068f,
          0.7314f, 0.0272f, 0.7078f, 0.8814f, 0.0316f, 0.7665f,
          1.0226f, 0.0356f, 0.8090f, 1.1662f, 0.0392f, 0.8292f,
          1.2806f, 0.0432f, 0.8696f, 1.3696f, 0.0660f, 0.8596f,
          1.6638f, 0.0488f, 0.8697f, 1.5950f, 0.0528f, 0.8608f,
          1.6766f, 0.0560f, 0.8868f, 1.7650f, 0.0596f, 0.8848f,
          1.8010f, 0.0640f, 0.8788f, 1.8156f, 0.0664f, 0.8697f,
          1.8196f, 0.0693f, 0.8590f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 15) {
        data, cn(8, j), dh(8, j), eta(8, j);
      }
    }
    {
      static const float values[] = {
        0.1872f, 0.0093f, 0.6909f, 0.3372f, 0.0159f, 0.5380f,
          0.5366f, 0.0232f, 0.6068f, 0.6756f, 0.0286f, 0.6573f,
          0.8068f, 0.0330f, 0.7078f, 0.9196f, 0.0368f, 0.7463f,
          1.0128f, 0.0400f, 0.7776f, 1.1254f, 0.0442f, 0.8090f,
          1.2196f, 0.0480f, 0.8191f, 1.3138f, 0.0524f, 0.8302f,
          1.3696f, 0.0556f, 0.8347f, 1.6068f, 0.0580f, 0.8363f,
          1.4650f, 0.0612f, 0.8322f, 1.4638f, 0.0640f, 0.8241f,
          1.6676f, 0.0668f, 0.8090f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 15) {
        data, cn(9, j), dh(9, j), eta(9, j);
      }
    }
    {
      static const float values[] = {
        0.1872f, 0.0132f, 0.6257f, 0.2816f, 0.0180f, 0.6767f,
          0.3804f, 0.0228f, 0.5056f, 0.6686f, 0.0268f, 0.5359f,
          0.5628f, 0.0316f, 0.5683f, 0.6382f, 0.0352f, 0.5961f,
          0.6892f, 0.0380f, 0.6068f, 0.7362f, 0.0612f, 0.6178f,
          0.7696f, 0.0640f, 0.6240f, 0.8068f, 0.0676f, 0.6310f,
          0.8256f, 0.0506f, 0.6265f, 0.8306f, 0.0530f, 0.6118f
      };
      fem::data_of_type<float> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(j, 1, 12) {
        data, cn(10, j), dh(10, j), eta(10, j);
      }
    }
  }
  //C
}

} // namespace Default_Maps\*
