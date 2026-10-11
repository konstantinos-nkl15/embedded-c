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
    uint8_t reg = 0x00;   // ο "register", όλα τα bits 0

    reg |= (1 << 3);      print_bin(reg);   // 1: SET bit 3
    reg |= (1 << 7);      print_bin(reg);   // 2: SET bit 7
    reg |= (1 << 3);      print_bin(reg);   // 3: SET bit 3 ξανά
    reg &= ~(1 << 3);     print_bin(reg);   // 4: CLEAR bit 3
    reg ^= (1 << 0);      print_bin(reg);   // 5: TOGGLE bit 0
    reg ^= (1 << 0);      print_bin(reg);   // 6: TOGGLE bit 0 ξανά

    if (reg & (1 << 7))                     // CHECK bit 7
        printf("bit 7: 1\n");
    else
        printf("bit 7: 0\n");

    if (reg & (1 << 3))                     // CHECK bit 3
        printf("bit 3: 1\n");
    else
        printf("bit 3: 0\n");

    return 0;
}