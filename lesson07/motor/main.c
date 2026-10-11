#include <stdio.h>
#include "motor.h"

int main(void)
{
    struct motor m1 = { .position = 1200, .speed = 45.5f, .enabled = 1 };

    printf("πριν:  ");
    motor_print(&m1);

    motor_stop(&m1);

    printf("μετά:  ");
    motor_print(&m1);
    return 0;
}