<OpenMD version=2>
  <MetaData>
#include "alkanes.md"


component{
  type = "butane";
  nMol = 32;
}

dt = 1.0;
forceField = "DUFF";
ensemble = NVE;
runTime = 10000.0;
sampleTime = 100.0;
statusTime = 1.0;
cutoffRadius = 9.0;
switchingRadius = 7.0;
cutoffMethod = "switched";

  </MetaData>
  <Snapshot>
    <FrameData>
        Time: 0
        Hmat: {{ 20, 0, 0 }, { 0, 20, 0 }, { 0, 0, 20 }}
    </FrameData>
    <StuntDoubles>
         0      pv          -4.605786          -1.153377           0.626235   9.600000e-04 -1.090000e-04 -3.493000e-03
         1      pv          -3.181701          -1.194119           1.210976  -1.906000e-03  7.500000e-04  3.547000e-03
         2      pv          -2.631995          -2.560619            1.66053  -1.214000e-03  6.700000e-05  6.230000e-04
         3      pv          -1.199907          -2.340753           2.182435  -1.613000e-03  1.222000e-03  1.232000e-03
         4      pv          27.407023          11.833875          10.385983  -3.589000e-03 -7.630000e-04 -1.439000e-03
         5      pv          28.221081          10.811217           9.571686   1.305000e-03  1.383000e-03  7.590000e-04
         6      pv            28.1525          11.194403           8.081698   5.699000e-03  3.168000e-03  1.016000e-03
         7      pv          28.692358          12.585157           7.699654   1.915000e-03  4.575000e-03  7.900000e-04
         8      pv           3.712472           2.861613          -2.072605  -2.823000e-03 -5.340000e-04 -5.720000e-04
         9      pv           3.993282           4.146751          -2.873333  -4.187000e-03 -5.640000e-04 -1.099000e-03
        10      pv           4.097117           3.903458          -4.390444   2.554000e-03  3.483000e-03 -1.287000e-03
        11      pv           5.199353           2.912021           -4.80725  -1.284000e-03 -3.340000e-04 -2.357000e-03
        12      pv           6.736632          18.433243          -2.265795  -3.182000e-03  7.210000e-04  1.560000e-03
        13      pv           5.702306          18.790261           -1.18214  -2.593000e-03  1.530000e-04  2.310000e-03
        14      pv           5.200572          17.525013          -0.461716  -5.820000e-03  1.334000e-03  2.136000e-03
        15      pv            3.98622          17.887591           0.413206  -7.432000e-03  4.810000e-03 -1.542000e-03
        16      pv           9.130333          25.885001           13.19706   8.190000e-04  1.419000e-03  3.630000e-04
        17      pv          10.345611          25.505938          14.063669   5.474000e-03  1.458000e-03 -6.147000e-03
        18      pv          11.585733          26.317249          13.644776   1.924000e-03  7.787000e-03 -4.399000e-03
        19      pv          12.828433          25.918732          14.462382  -6.360000e-03 -5.100000e-05  4.372000e-03
        20      pv          11.365479          -1.287189          18.927876   3.176000e-03 -6.111000e-03 -1.780000e-04
        21      pv          11.675249          -1.937784          17.566859   3.300000e-04 -1.055000e-03 -3.242000e-03
        22      pv          10.474352          -1.917332          16.602998  -8.800000e-04 -4.497000e-03 -1.808000e-03
        23      pv           10.81421          -2.394325          15.178718   2.143000e-03  1.579000e-03 -3.121000e-03
        24      pv          -2.048788          -0.289256           29.34006   1.131000e-03  2.760000e-04 -4.522000e-03
        25      pv          -2.068056           0.766317          30.461217  -1.874000e-03 -4.070000e-04 -3.930000e-03
        26      pv          -2.114285           2.219945           29.95483   4.116000e-03 -2.920000e-04 -4.145000e-03
        27      pv          -3.529562           2.752114          29.662617   3.526000e-03  2.114000e-03  3.091000e-03
        28      pv          10.022124          21.191281           41.94466   7.988000e-03  5.322000e-03 -6.051000e-03
        29      pv           9.135784          21.682493          43.104277   3.135000e-03 -4.569000e-03 -5.571000e-03
        30      pv           9.071494          20.677027          44.268968   6.160000e-04 -2.320000e-04 -1.965000e-03
        31      pv           8.492551          19.295304          43.912224   2.189000e-03 -1.847000e-03  1.738000e-03
        32      pv          20.156196          23.564588           0.315189  -2.250000e-04 -2.154000e-03  8.934000e-03
        33      pv          19.535099          22.171444           0.103084   6.737000e-03 -4.136000e-03  1.567000e-03
        34      pv           19.46115          21.647173          -1.343039   2.778000e-03 -4.129000e-03  1.767000e-03
        35      pv          18.911269          20.214976          -1.477367  -2.440000e-03 -1.788000e-03 -1.835000e-03
        36      pv           2.811525          -3.212675          -3.926644  -1.987000e-03 -4.701000e-03  4.023000e-03
        37      pv            1.69741          -2.208551           -3.57724  -6.630000e-04 -1.689000e-03 -4.120000e-04
        38      pv            0.72742          -2.623649          -2.455449   6.140000e-04  3.652000e-03  2.668000e-03
        39      pv           0.341601          -4.110521          -2.346093   1.156000e-03  2.856000e-03 -6.253000e-03
        40      pv           16.49497           5.043967          17.489577   6.404000e-03  1.294000e-03  5.403000e-03
        41      pv          16.024343           3.717492          18.114538   5.411000e-03  4.670000e-04  2.899000e-03
        42      pv          15.782245           3.900286          19.624364   1.330000e-03 -2.042000e-03  2.549000e-03
        43      pv          15.143116           2.702956          20.352042  -9.710000e-04 -3.200000e-04  3.361000e-03
        44      pv         -17.295298           2.686332           10.53091  -4.586000e-03 -1.660000e-03 -2.529000e-03
        45      pv         -17.113019           3.028295           9.040462  -2.280000e-04  1.513000e-03 -1.268000e-03
        46      pv         -15.941854           4.016862           8.889773   2.826000e-03 -2.363000e-03 -2.959000e-03
        47      pv         -15.515205           4.334781            7.44461  -1.784000e-03  1.366000e-03 -3.500000e-03
        48      pv         -24.280566           6.811101           8.303048  -1.209000e-03  2.966000e-03 -1.885000e-03
        49      pv         -25.820565           6.809612             8.3022  -1.212000e-03  2.070000e-03  4.604000e-03
        50      pv         -26.446668           7.033619           9.691234  -2.373000e-03  7.123000e-03  3.266000e-03
        51      pv         -26.096142           6.108698          10.871595   1.604000e-03  7.260000e-04 -2.928000e-03
        52      pv          12.409212           1.943746          13.913354   4.315000e-03  4.828000e-03 -4.647000e-03
        53      pv          12.199701           1.580109          12.431641  -5.131000e-03 -2.365000e-03 -1.546000e-03
        54      pv          12.439513           2.819991          11.550289   1.604000e-03  2.770000e-04  4.003000e-03
        55      pv          11.933652           2.594561          10.113318   2.420000e-04 -4.462000e-03  5.225000e-03
        56      pv          -5.954249           0.289204           4.573394   1.271000e-03 -2.640000e-04  3.732000e-03
        57      pv          -7.337015           0.250779           5.250212  -9.220000e-04 -9.760000e-04 -7.880000e-04
        58      pv          -7.319935          -0.134109           6.741241   4.916000e-03  4.935000e-03  6.710000e-04
        59      pv           -8.69812          -0.314115           7.404418   3.733000e-03 -1.958000e-03 -3.658000e-03
        60      pv          -0.434315          11.693497          12.276109  -8.457000e-03 -4.560000e-03  1.811000e-03
        61      pv          -0.909188          13.096772          12.696721   4.716000e-03 -4.400000e-05  1.616000e-03
        62      pv            -2.2005          13.520582          11.972498   8.772000e-03  5.692000e-03 -2.259000e-03
        63      pv           -2.87444          14.864342          12.306735   5.925000e-03  3.696000e-03  2.300000e-05
        64      pv           1.339057         -20.460245         -27.197367   2.616000e-03 -1.936000e-03  3.881000e-03
        65      pv           2.086458         -21.452838         -28.107176   4.310000e-04  1.873000e-03 -2.069000e-03
        66      pv           1.078402         -22.526433         -28.557527   2.910000e-04  5.620000e-04  1.369000e-03
        67      pv           1.711571         -23.603529         -29.457839   2.960000e-04  2.890000e-04  1.700000e-03
        68      pv             3.0148          12.950353          12.704075  -1.557000e-03 -5.955000e-03  1.000000e-03
        69      pv           3.746004           11.71347          12.149945   2.242000e-03 -1.620000e-03 -3.662000e-03
        70      pv           3.286028          10.402313           12.81394  -5.090000e-04  7.400000e-05 -2.222000e-03
        71      pv           3.882415           9.107503           12.23137  -3.700000e-05 -1.266000e-03  1.241000e-03
        72      pv           3.945718         -41.636672           4.684608   1.550000e-04 -4.631000e-03 -6.043000e-03
        73      pv           2.597884         -41.756515           5.419852   2.507000e-03  2.202000e-03 -6.180000e-04
        74      pv           2.133492         -40.392807           5.964133   3.180000e-04 -1.220000e-03  6.089000e-03
        75      pv           0.829471         -40.279581           6.775496  -2.671000e-03 -2.881000e-03  1.517000e-03
        76      pv          15.339534         -13.530099           3.943045  -3.382000e-03  3.903000e-03 -2.454000e-03
        77      pv           14.09904         -14.157215           3.280096  -1.111000e-03 -2.464000e-03 -6.800000e-04
        78      pv          13.656056         -15.510344           3.866959  -1.791000e-03 -1.002000e-03  2.178000e-03
        79      pv          12.364478         -16.075815            3.24755   1.274000e-03 -3.400000e-05 -5.098000e-03
        80      pv          10.703436          28.055215          27.395713   5.589000e-03  2.230000e-04 -2.050000e-04
        81      pv          10.574453           26.61968          26.853307  -1.648000e-03 -1.850000e-04  2.596000e-03
        82      pv           9.202161          26.371827          26.199867  -2.069000e-03  2.148000e-03  2.594000e-03
        83      pv           9.017873          24.856471           25.99656  -5.190000e-03  2.374000e-03  3.740000e-03
        84      pv          31.609188          13.682808          -6.316798  -5.718000e-03 -2.352000e-03  4.258000e-03
        85      pv          32.823784           13.01484          -5.645848  -2.397000e-03 -1.166000e-03 -5.730000e-04
        86      pv          33.897557          12.392134          -6.557358  -2.578000e-03 -2.594000e-03  1.900000e-04
        87      pv          33.240044          11.782255          -7.809286  -3.469000e-03  5.713000e-03 -3.388000e-03
        88      pv           0.009928           3.438051          13.739779   2.667000e-03 -4.625000e-03  3.086000e-03
        89      pv          -1.407138           3.992902           13.50385   3.304000e-03 -1.890000e-03  5.696000e-03
        90      pv           -2.41758           3.326526           14.45598  -1.216000e-03  2.007000e-03  3.626000e-03
        91      pv          -2.740005           1.876871          14.048378   2.746000e-03  3.802000e-03 -5.894000e-03
        92      pv          15.816754          32.498504          -0.952291   1.097000e-03 -2.360000e-03  2.205000e-03
        93      pv          14.804895          32.269135           0.185747  -9.790000e-04 -2.130000e-04  7.920000e-04
        94      pv          13.937024          33.442808           0.676553  -2.254000e-03 -9.540000e-04  3.090000e-04
        95      pv          13.058521          33.974776          -0.470984  -2.140000e-04 -2.645000e-03 -2.036000e-03
        96      pv          -0.266605         -16.976512           4.585778   7.900000e-05  3.000000e-05  1.322000e-03
        97      pv          -1.005416         -15.909836           5.415213   1.810000e-04 -2.322000e-03  4.438000e-03
        98      pv          -2.538283         -16.038256           5.341548   5.150000e-04 -3.979000e-03  3.740000e-04
        99      pv          -3.036671         -17.400419           5.858966  -7.200000e-05 -4.306000e-03 -1.054000e-03
       100      pv           12.13541           29.99314          -22.69932  -6.082000e-03  2.304000e-03 -2.847000e-03
       101      pv          13.014106          29.537555         -23.879123  -5.754000e-03  2.292000e-03 -2.598000e-03
       102      pv          14.480142          29.869234         -23.543969  -5.985000e-03  1.006000e-03 -3.140000e-04
       103      pv          15.500784          29.491126         -24.633429   7.400000e-04  6.569000e-03  4.056000e-03
       104      pv          25.692734           3.335067           3.360105  -3.670000e-03 -6.396000e-03  1.011000e-03
       105      pv          24.371116           3.770107           2.700055  -3.191000e-03 -4.847000e-03  1.072000e-03
       106      pv          23.176483            2.80649           2.826124  -5.705000e-03 -2.294000e-03 -3.234000e-03
       107      pv           23.50229            1.32413           2.565239  -2.229000e-03 -1.158000e-03 -5.351000e-03
       108      pv          31.282232          28.259802         -17.524226  -2.348000e-03 -2.215000e-03 -4.132000e-03
       109      pv          32.086433          29.511667         -17.921337   2.603000e-03 -4.186000e-03 -3.200000e-04
       110      pv           33.25829          29.921138         -17.009919   4.770000e-04 -6.389000e-03  3.404000e-03
       111      pv          32.905771          30.209017          -15.53871  -3.135000e-03  3.980000e-03  5.100000e-04
       112      pv          15.758966           10.38881           6.940181   9.590000e-04  2.041000e-03  8.790000e-04
       113      pv          15.291014          11.848681             6.7939  -5.120000e-04  1.639000e-03  1.571000e-03
       114      pv           14.58805          12.304033           8.086222   2.072000e-03  2.600000e-04  3.463000e-03
       115      pv          13.877744          13.668648           8.016277  -2.850000e-04 -1.258000e-03 -2.218000e-03
       116      pv          14.910465          17.287297          14.075561  -1.146000e-03  4.616000e-03 -3.809000e-03
       117      pv           15.54155          17.058416          15.461542   2.451000e-03  2.849000e-03 -5.739000e-03
       118      pv          15.081124          15.780806          16.187712   3.835000e-03  4.101000e-03 -2.658000e-03
       119      pv          15.825661          15.545813          17.515131   1.810000e-04  3.770000e-04 -1.267000e-03
       120      pv          15.870157          15.951116          25.323891   2.388000e-03 -4.867000e-03 -2.427000e-03
       121      pv          17.039554          15.577803          26.253808   3.443000e-03 -1.480000e-04 -1.859000e-03
       122      pv          16.878513          16.235669          27.636876  -6.070000e-04 -9.210000e-04 -1.964000e-03
       123      pv          18.205612          15.941834            28.3608  -2.751000e-03  2.411000e-03  3.318000e-03
       124      pv           9.128503          15.495276          19.814574  -3.356000e-03 -1.665000e-03  5.444000e-03
       125      pv           9.747209          15.359291          21.218251  -2.180000e-04  1.921000e-03  4.409000e-03
       126      pv          11.064377          16.140375          21.381284  -4.080000e-04  2.330000e-03  3.983000e-03
       127      pv          11.520992          16.028228          22.847751   5.829000e-03  1.137000e-03  1.950000e-03
    </StuntDoubles>
  </Snapshot>
</OpenMD>
