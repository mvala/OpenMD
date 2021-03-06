<OpenMD version=1>
  <MetaData>
#include "lj.md"


component{
  type = "Ar";
  nMol = 108;
}


forceField = "LJ";
targetTemp = 119.8;


ensemble = "NVT";
tauThermostat = 1e3;
dt = 1.0;
runTime = 1;

sampleTime = 100;
statusTime = 1;

thermalTime = 100.0;
tempSet = "false";

cutoffRadius  = 8.0;
switchingRadius = 8.0;

  </MetaData>
  <Snapshot>
    <FrameData>
        Time: 0
        Hmat: {{ 17.1431, 0, 0 }, { 0, 17.1431, 0 }, { 0, 0, 17.1431 }}
    </FrameData>
    <StuntDoubles>
         0      pv           1.012626          -0.117121           -0.58296  -2.779000e-03 -4.740000e-04  3.745000e-03
         1      pv           3.333614           2.448988           0.290653   3.520000e-04  1.080000e-03  7.660000e-04
         2      pv          -0.142696            2.63276           1.774969  -2.645000e-03  1.331000e-03 -1.590000e-03
         3      pv           2.258165           0.082854           2.865801   1.876000e-03 -4.490000e-04  2.540000e-04
         4      pv            -0.5973           0.826776           5.410843   2.310000e-04  1.503000e-03  1.961000e-03
         5      pv           1.831497           2.975482           6.054888  -2.790000e-03 -1.212000e-03 -1.900000e-03
         6      pv           0.677293           2.173889           9.308338  -1.919000e-03 -2.530000e-03  1.600000e-04
         7      pv           2.712353          -1.058929           9.271634   1.633000e-03  6.700000e-05 -2.410000e-03
         8      pv          -0.219978          -0.580745          11.316337   5.390000e-04 -1.885000e-03  1.415000e-03
         9      pv            2.99841           3.458163          11.643155  -7.000000e-06  2.796000e-03  7.460000e-04
        10      pv          -0.174439           2.294757          13.534695  -5.630000e-04 -1.562000e-03 -1.309000e-03
        11      pv           3.830565          -0.078228          15.051064   4.980000e-04  7.770000e-04  1.398000e-03
        12      pv          -0.334391           5.264623          -0.433242  -4.360000e-04  2.457000e-03  6.120000e-04
        13      pv           2.511932           8.276077           0.074461  -1.883000e-03 -1.690000e-04  5.270000e-04
        14      pv            0.02581           10.11912           2.375356  -1.076000e-03 -7.840000e-04 -1.490000e-03
        15      pv           2.994394           5.721626            2.65779  -2.664000e-03 -2.913000e-03 -1.646000e-03
        16      pv           0.320696           6.647778           5.099935   8.730000e-04  4.017000e-03  7.480000e-04
        17      pv           3.142674           8.533196           6.526666   2.707000e-03 -3.060000e-04 -1.607000e-03
        18      pv            0.16607            9.66105           8.770818  -1.773000e-03 -1.710000e-04 -2.436000e-03
        19      pv           2.413982           5.815471           9.130208  -1.725000e-03 -1.528000e-03  1.155000e-03
        20      pv          -0.957337           5.042937           10.84209   2.214000e-03  3.193000e-03  1.478000e-03
        21      pv           3.909093           8.562991          11.538046  -2.570000e-04 -4.364000e-03  3.980000e-04
        22      pv           -0.28891           7.528485           13.97886  -7.650000e-04 -2.552000e-03 -1.290000e-04
        23      pv           2.849106           5.546767          14.845168   9.120000e-04 -9.860000e-04  1.379000e-03
        24      pv          -0.256996          10.472728          -0.916031   8.250000e-04 -5.110000e-04  4.510000e-04
        25      pv           2.945464          14.234977             0.0863  -1.300000e-03  2.295000e-03  3.083000e-03
        26      pv           0.311311          13.620832           2.993768   1.176000e-03 -2.952000e-03  1.250000e-04
        27      pv           3.337067          12.036989            2.92501   1.978000e-03  7.850000e-04  1.920000e-04
        28      pv           0.094459          11.569355           5.891582   1.025000e-03  1.265000e-03 -1.535000e-03
        29      pv            1.57335          15.119531           5.816944  -1.340000e-04  3.800000e-04  2.649000e-03
        30      pv          -0.243805          13.988948            8.60596  -1.265000e-03  2.302000e-03 -5.980000e-04
        31      pv           3.700451          11.389051           9.411774   4.480000e-04 -2.352000e-03 -5.650000e-04
        32      pv           1.089954          11.845551          11.400332   1.200000e-03 -6.010000e-04  3.650000e-04
        33      pv           3.813617          14.101522          12.232472   8.410000e-04  1.371000e-03  9.800000e-04
        34      pv           0.309019          14.590027          14.109671   6.100000e-04 -9.490000e-04 -2.224000e-03
        35      pv           3.648504          10.962774          14.029705   2.697000e-03 -2.689000e-03 -2.300000e-04
        36      pv           6.560756          -0.120257          -0.037335   4.700000e-04  2.699000e-03  5.870000e-04
        37      pv           8.274152           2.827511          -0.388637  -6.720000e-04  1.176000e-03 -1.986000e-03
        38      pv            5.10292           3.173346           3.551963   1.154000e-03  9.370000e-04  1.560000e-03
        39      pv           8.268822            0.05461           3.591502  -8.160000e-04 -4.380000e-04 -1.517000e-03
        40      pv           4.805326           0.201183           6.122358  -4.000000e-05  6.340000e-04 -1.838000e-03
        41      pv           8.086377           2.916935           5.534707   1.454000e-03  2.740000e-04 -1.320000e-04
        42      pv           5.352439            3.67053           8.452231   7.000000e-06  1.740000e-04 -8.780000e-04
        43      pv           7.769881           0.864288           8.651854   2.142000e-03 -1.335000e-03  1.056000e-03
        44      pv           5.527369           0.491213          11.326557  -5.300000e-05  1.358000e-03 -1.040000e-03
        45      pv           9.288215           1.970066          11.598072   1.968000e-03 -8.100000e-05 -1.609000e-03
        46      pv           5.377162           3.205091          14.339674  -1.280000e-04  3.390000e-04 -3.040000e-04
        47      pv           8.388905          -0.010605          14.232112   3.470000e-04  6.840000e-04  2.470000e-04
        48      pv           5.698404           5.383852           0.623183   2.080000e-04 -2.614000e-03 -6.290000e-04
        49      pv           8.057789           7.677149           0.259358  -2.772000e-03  1.670000e-03  1.099000e-03
        50      pv           5.584626           8.283784            2.68634  -2.180000e-04  2.658000e-03 -1.250000e-04
        51      pv           8.892524           4.849453           2.952673  -1.843000e-03 -4.620000e-04  1.400000e-04
        52      pv           6.015614           6.040359           5.680563   9.840000e-04  2.260000e-04 -4.960000e-04
        53      pv            7.01026          10.231306           6.260881  -8.420000e-04 -1.576000e-03  9.460000e-04
        54      pv              6.263           7.779661           8.979243  -1.716000e-03  9.450000e-04  3.890000e-04
        55      pv           8.881437           5.187757            8.45946  -4.190000e-04  1.000000e-03  3.540000e-04
        56      pv           6.118838           5.155257          11.289875   1.111000e-03  2.918000e-03 -5.230000e-04
        57      pv           9.856862           8.533675          10.690271   8.120000e-04  2.389000e-03  2.282000e-03
        58      pv           5.629109            7.43084          14.727695   1.088000e-03  3.840000e-04  8.110000e-04
        59      pv           8.725957           5.714425          13.875294   9.770000e-04 -2.543000e-03 -2.950000e-04
        60      pv           5.249041          10.719522           0.029992   1.062000e-03  1.126000e-03 -1.072000e-03
        61      pv           9.612061          14.822379           0.824556   1.754000e-03 -1.957000e-03 -5.370000e-04
        62      pv           5.526259          14.376458           3.341998  -6.810000e-04  5.340000e-04 -2.543000e-03
        63      pv           8.252704          11.936417           2.823153   1.324000e-03  9.130000e-04 -4.280000e-04
        64      pv            4.12732          12.869712            6.28211   3.000000e-06  1.402000e-03 -7.180000e-04
        65      pv           8.255577          14.463279           6.296057   1.235000e-03  2.400000e-05 -1.523000e-03
        66      pv           5.811773          14.624799           9.219007  -2.262000e-03 -3.237000e-03 -1.860000e-03
        67      pv           9.555069          11.334202           8.248991  -7.260000e-04  8.000000e-06 -1.472000e-03
        68      pv            6.96412          10.931958          11.154364   1.491000e-03  9.760000e-04 -4.380000e-04
        69      pv           8.875298          14.391489          10.786899   3.275000e-03  2.185000e-03  4.066000e-03
        70      pv           6.552771          13.660835          15.003521  -2.438000e-03  1.400000e-04 -2.880000e-04
        71      pv           8.549633          10.455755          14.767936  -9.980000e-04 -4.360000e-04  1.637000e-03
        72      pv          11.534878           0.452126          -0.842571   2.005000e-03 -2.355000e-03  1.610000e-04
        73      pv          14.286555           2.413645          -1.237791   9.030000e-04 -6.040000e-04  1.157000e-03
        74      pv          11.199531           2.221925           1.853502  -2.683000e-03  1.010000e-03  1.747000e-03
        75      pv          14.659031          -0.265361           2.178353  -1.470000e-04 -2.660000e-03 -9.370000e-04
        76      pv          13.105946           1.978743           4.543231   8.050000e-04  8.060000e-04 -9.170000e-04
        77      pv          15.126326           3.774111           7.174575  -1.241000e-03  2.485000e-03  1.717000e-03
        78      pv          11.242292           2.663211           8.565186   2.025000e-03 -6.500000e-05 -2.920000e-04
        79      pv          13.665103           0.169402           8.239239   4.600000e-05  2.782000e-03 -1.907000e-03
        80      pv          11.460788          -0.638794          12.387694   1.512000e-03  1.341000e-03 -8.180000e-04
        81      pv          14.269468           2.048059          11.607201  -5.293000e-03 -1.227000e-03  3.139000e-03
        82      pv          11.199256            3.09583          14.322731  -3.241000e-03  4.740000e-04  1.484000e-03
        83      pv           14.45851          -0.392267          14.013448   4.400000e-05  8.170000e-04 -7.460000e-04
        84      pv          11.808848           5.128811           0.213271   1.030000e-03  1.284000e-03 -1.241000e-03
        85      pv          14.124804           8.329053           0.347723  -1.311000e-03 -1.730000e-04 -2.371000e-03
        86      pv          10.865366           8.801039           2.919093   1.004000e-03 -2.933000e-03  2.770000e-04
        87      pv          14.647288           5.305829           2.657213   1.129000e-03 -1.816000e-03  2.039000e-03
        88      pv          11.921946           5.416675           5.866698  -1.292000e-03 -2.397000e-03  5.360000e-04
        89      pv          14.201551           9.043037             4.8429   2.042000e-03  8.160000e-04 -7.400000e-04
        90      pv           10.02184            8.18781           6.372648   2.931000e-03 -8.300000e-05  3.056000e-03
        91      pv          14.802961           7.108016           7.777867   1.486000e-03  7.610000e-04  1.333000e-03
        92      pv          11.660731           4.940758          10.938249   3.420000e-04 -1.818000e-03 -2.132000e-03
        93      pv          14.041291           8.994877          11.596204   5.040000e-04 -3.070000e-04 -3.271000e-03
        94      pv          11.993852           8.277129          14.739459   2.250000e-04  1.070000e-04 -2.673000e-03
        95      pv          13.773937           5.790119          13.633849  -2.160000e-04  2.509000e-03 -1.649000e-03
        96      pv          11.276155           11.97771           -0.00913   1.100000e-04  9.800000e-04  5.280000e-04
        97      pv          13.805842          14.209721           0.319118   3.550000e-04 -2.276000e-03 -2.220000e-04
        98      pv          11.462834          15.501085           3.594934   2.072000e-03  2.450000e-04  4.458000e-03
        99      pv          13.511288          12.024046            3.10192  -1.722000e-03  5.480000e-04 -1.500000e-04
       100      pv          11.158048          11.518529           5.405592   1.294000e-03 -2.170000e-04 -5.010000e-04
       101      pv           14.33279           14.47548           6.137423   8.100000e-05  1.185000e-03  7.960000e-04
       102      pv          11.261677          14.699702           8.279857   6.840000e-04 -7.410000e-04 -9.400000e-04
       103      pv          13.558249          10.810157           8.324759  -4.073000e-03  8.920000e-04  1.349000e-03
       104      pv          11.090678          11.664875          12.020252  -9.300000e-05 -3.756000e-03 -4.370000e-04
       105      pv          14.526208          13.582357          10.888594  -1.723000e-03 -2.148000e-03 -1.533000e-03
       106      pv          10.509987          13.918961          14.563391  -1.990000e-03 -1.523000e-03  1.689000e-03
       107      pv          14.409635          12.403795          13.931267  -2.499000e-03  1.285000e-03  1.700000e-04
    </StuntDoubles>
  </Snapshot>
</OpenMD>
