#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t a = 100;
    uint8_t b = 200;

    uint8_t sum  = a + b;
    int     wide = a + b;
    printf("sum = %u\n", sum);
    printf("wide = %d\n", wide);

    return 0;
}