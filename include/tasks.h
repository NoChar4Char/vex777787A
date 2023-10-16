#ifdef TASKS_H
#define TASKS_H

#include "declarations_and_definitions.h"

void intake(float v) {
    ITK.spin(fwd, 120*v,voltageUnits::MV);
}

void elev() {
    
}

#endif