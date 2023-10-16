#ifdef interface_h
#define interface_h

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "v5.h"
#include "v5_vcs.h"

using namespace vex;

brain Brain;
controller Contrler = Contrler(primary);
competition Competition;

motor LA = motor(PORT17, ratio6_1, 1);
motor LB = motor(PORT18, ratio6_1, 0);
motor LC = motor(PORT19, ratio6_1, 1);
motor RA = motor(PORT12, ratio6_1, 1);
motor RB = motor(PORT14, ratio6_1, 0);
motor RC = motor(PORT11, ratio6_1, 1);

MOTOR ITK = motor(PORT16, ratio18_1, 1);
MOTOR ELVR = motor(PORT9, ratio6_1, 1);
MOTOR ELVL = motor(PORT8, ratio6_1, 1);

#endif