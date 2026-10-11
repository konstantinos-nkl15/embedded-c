#include <stdio.h>
#include <stdint.h>

struct motor
{
    int32_t  position;
    float    speed;
    uint8_t  enabled;
};

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