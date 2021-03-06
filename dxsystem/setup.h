#ifndef SETUP_H
#define SETUP_H

#include "dxsetupmotor.h"
#include "dxmotorsystem.h"
#include "dxsinglemotor.h"

void dxsystemUserDefaultConfig(DXMotorSystem& d);

int dxlSetupSequence();

DXMotorSystem* dxsystemSetup(const int deviceIndex);
DXSingleMotor* dxsinglemotorSetup(const int deviceIndex);
vector<DXMotorSystem*> multidxsystemSetup(const int numPorts);
vector<DXMotorSystem*> multidxsystemSetup(vector<int> portNum);

#endif // SETUP_H
