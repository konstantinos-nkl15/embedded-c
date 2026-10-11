#include <stdio.h>
#include "motor.h"

void motor_print(struct motor *m)
{
    // Γράψε εδώ: τύπωσε position, speed, enabled σε μία γραμμή
    printf("position: %d\nspeed: %f\nenabled: %u", (*m).position,(*m).speed,(*m).enabled);
}

void motor_stop(struct motor *m)
{
    // Γράψε εδώ: enabled = 0 και speed = 0, μέσω του m
    (*m).speed    = 0;
    (*m).enabled  = 0;
}