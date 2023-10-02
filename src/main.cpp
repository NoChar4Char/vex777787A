#include <interfaces_and_device>
#include "task.h"
#include "vex.h"
using namespace vex;
#define Ch3 Contrler.Axis3 position(percent)

competition Competition;

/*void pre_auton(void) { 

}*/ 

void auton(void) {
    
}

void userctrl(void) {
    float rota = 0.8; // change from tesing
    while (1) {

        LA.spin(fwd, 120*(Ch3+Ch1*rota), voltageUnits::MV);
        LB.spin(fwd, 120*(Ch3+Ch1*rota), voltageUnits::MV);
        LC.spin(fwd, 120*(Ch3+Ch1*rota), voltageUnits::MV);

        RA.spin(fwd, 120*(-Ch3+Ch1*rota), voltageUnits::MV);
        RB.spin(fwd, 120*(-Ch3+Ch1*rota), voltageUnits::MV);
        RC.spin(fwd, 120*(-Ch3+Ch1*rota), voltageUnits::MV);

        intake(100*(R1-R2));

        wait(10,msec); // refresh every 10 ms so quickest
    }
}

int main() {
    Competition.autonomous(auton);
    Competition.drivercontrol(userctrl);
    // pre_auton();
    while (1){
        wait(100, msec); //check if auton or userctrl period
    }
 
}