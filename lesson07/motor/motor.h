#ifndef MOTOR_H
#define MOTOR_H

#include <stdint.h>
struct motor
{
    int32_t  position;
    float    speed;
    uint8_t  enabled;
};

void motor_print(struct motor *m);
void motor_stop(struct motor *m);

#endif
