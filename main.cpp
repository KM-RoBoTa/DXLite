#include <iostream>

#include "dxsystem/setup.h"
#include "dxsystem/additionaltools.h"
using namespace std;

#define IS_RADIAN true
#define IS_DEGREE false
#define ANGLE_TYPE IS_DEGREE

int main()
{
    cout << "Hello World!" << endl;
    cout << "Press 'Y' to continue:";
    while(!getYorN());

    // Start of Initializing DXMotorSystem
    DXMotorSystem d = *dxsystemSetup(0);
    int numMotors = d.getNumMotors();
    cout << numMotors << " motors detected." << endl;

    while(true)
    {
        vector<int> position = d.getAllPosition();
        for (int i = 0; i < numMotors; i++)
        {
            cout << "Motor #" << i << ":" << endl;
            cout << "    Model:" << d.getModel(i) << endl;
            cout << "    Position:" << position[i] << endl;
        }

        cout << "Continue?: ";
        if(!getYorN())
            break;

        cout << "New angles for motors..." << endl;
        vector<int> goalPosition(d.getNumMotors(),-1);
        int angle;
        for (int i = 0; i < numMotors; i++)
        {
            cout << "    New Angle (degrees) for Motor #" << i << ":";
            angle = getInt();
            goalPosition[i] = angle2Position(angle, d.getModel(i), ANGLE_TYPE);
        }
        d.setAllPosition(goalPosition);
    }
    return 0;
}

