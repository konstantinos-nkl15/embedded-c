#include <stdio.h>
#include <stdint.h>

struct motor
{
    int32_t  position;
    float    speed;
    uint8_t  enabled;
};

int main(void)
{
    struct motor m1;
    m1.position = 1200;
    m1.speed    = 45.5f;
    m1.enabled  = 1;

    struct motor m2 = { .position = -300, .speed = 12.0f };

    // Γράψε εδώ:
    // 1. Τύπωσε τα τρία πεδία του m1, ένα σε κάθε γραμμή
    // 2. Τύπωσε τα τρία πεδία του m2, ένα σε κάθε γραμμή
    printf("%d\n%f\n%u\n\n",m1.position, m1.speed, m1.enabled);
    printf("%d\n%f\n%u\n\n",m2.position, m2.speed, m2.enabled);

    return 0;
}