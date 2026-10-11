#include <stdio.h>
#include <stdint.h>
#include <stddef.h>

struct motor
{
    int32_t  position;
    float    speed;
    uint8_t  enabled;
};

struct sample
{
    uint8_t  channel;
    uint32_t value;
    uint8_t  valid;
};

int main(void)
{
    printf("motor:  sizeof = %zu\n", sizeof(struct motor));
    printf("  position @ %zu\n", offsetof(struct motor, position));
    printf("  speed    @ %zu\n", offsetof(struct motor, speed));
    printf("  enabled  @ %zu\n", offsetof(struct motor, enabled));

    printf("sample: sizeof = %zu\n", sizeof(struct sample));
    printf("  channel  @ %zu\n", offsetof(struct sample, channel));
    printf("  value    @ %zu\n", offsetof(struct sample, value));
    printf("  valid    @ %zu\n", offsetof(struct sample, valid));
    return 0;
}
