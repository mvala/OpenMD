<OpenMD version=1>
  <MetaData>
#include "gb.md"
#include "lj.md"


component{
  type = "GBlinear";
  nMol = 2;
}
component{
  type = "C";
  nMol =1;
}



ensemble = NVT;
targetTemp = 1;
tauThermostat = 1000;
forceField = "DUFF";

cutoffRadius = 20.0;
switchingRadius = 18.0;
dt = 1.0;
runTime = 1e5;
useInitialTime = "false";
useInitialExtendedSystemState = "false";

sampleTime = 100;
statusTime = 100;
  </MetaData>
  <Snapshot>
    <FrameData>
        Time: 0
        Hmat: {{ 59.7166, 0, 0 }, { 0, 59.7166, 0 }, { 0, 0, 59.7166 }}
    </FrameData>
    <StuntDoubles>
         0    pvqj                 -7                  0                 -4  0.000000e+00  0.000000e+00  0.000000e+00  5.000000e-01  5.000000e-01  5.000000e-01  5.000000e-01  0.000000e+00  0.000000e+00  0.000000e+00
         1    pvqj                  7                  0                  2  0.000000e+00  0.000000e+00  0.000000e+00  7.071070e-01  7.071070e-01  0.000000e+00  0.000000e+00  0.000000e+00  0.000000e+00  0.000000e+00
         2      pv                  0                  0                  0   0.000000e+00  0.000000e+00  0.000000e+00
    </StuntDoubles>
  </Snapshot>
</OpenMD>
