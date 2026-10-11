#include <stdio.h>
#include <stdint.h>

void print_bin(uint8_t x)
{
    for(int i = 7; i >= 0; i--)
        printf("%d",(x>>i) & 1);
    printf("\n");
}

int main(void)
{
    uint8_t reg = 0;
    int i = 0;

    for(i = 0; i<=7; i++)
    {
        reg = reg^(1<<i);
        print_bin(reg);
        reg = 0;
    }
}