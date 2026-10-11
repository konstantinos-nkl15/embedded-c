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
    uint8_t reg = 0x00;
    uint8_t *p = &reg;

    *p |= (1<<2);// 1. SET στο bit 2, μέσω του p (όχι του reg)

    *p |= (1<<6);// 2. SET στο bit 6, μέσω του p

    *p &= ~(1<<2);// 3. CLEAR στο bit 2, μέσω του p

    print_bin(reg);
    return 0;
}