<OpenMD version=1>
  <MetaData>
#include "gb.md"
#include "lj.md"


component{
  type = "C";
  nMol =1;
}
component{
  type = "GBlinear";
  nMol = 1;
}



ensemble = NVT;
targetTemp = 0.001;
tauThermostat = 1000;
forceField = "DUFF";

cutoffRadius = 20.0;
switchingRadius = 18.0;
dt = 1.0;
runTime = 1e5;
useInitialTime = "false";
useInitialExtendedSystemState = "false";

//thermalTime = 10;
sampleTime = 100;
statusTime = 100;
  </MetaData>
  <Snapshot>
    <FrameData>
        Time: 0
        Hmat: {{ 69.7166, 0, 0 }, { 0, 69.7166, 0 }, { 0, 0, 69.7166 }}
    </FrameData>
    <StuntDoubles>
         0      pv                  0                  0                  0   0.000000e+00  0.000000e+00  0.000000e+00
         1    pvqj                  5                  0                  1  0.000000e+00  0.000000e+00  0.000000e+00  1.000000e+00  0.000000e+00  0.000000e+00  0.000000e+00  0.000000e+00  0.000000e+00  0.000000e+00
    </StuntDoubles>
  </Snapshot>
</OpenMD>
