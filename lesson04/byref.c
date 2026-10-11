#include <stdio.h>
#include <stdint.h>

void print_bin(uint8_t x)
{
    for (int i = 7; i >= 0; i--)
        printf("%d", (x >> i) & 1);
    printf("\n");
}

void set_bit(uint8_t *x, int n)
{
    *x|=(1<<n);
}

int main(void)
{
    uint8_t reg = 0x00;

    set_bit(&reg, 3);
    set_bit(&reg, 7);

    printf("στη main: ");
    print_bin(reg);
    return 0;
}