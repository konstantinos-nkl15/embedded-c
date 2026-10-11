#include <stdio.h>
#include <stdint.h>

void print_bin(uint8_t x)
{
    for (int i = 7; i >= 0; i--)
        printf("%d", (x >> i) & 1);
    printf("\n");
}

int main(void)
{
    uint8_t a = 0xCA;   // 1100 1010
    uint8_t b = 0x0F;   // 0000 1111

    printf("a      = "); print_bin(a);
    printf("b      = "); print_bin(b);
    printf("a & b  = "); print_bin(a & b);
    printf("a | b  = "); print_bin(a | b);
    printf("a ^ b  = "); print_bin(a ^ b);
    printf("~a     = "); print_bin(~a);
    printf("a << 2 = "); print_bin(a << 2);
    printf("a >> 3 = "); print_bin(a >> 3);
    return 0;
}