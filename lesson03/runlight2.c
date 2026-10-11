#include <stdio.h>
#include <stdint.h>

void print_bin(uint8_t x)
{
    for(int i = 7; i >= 0; i--)
        printf("%d",(x>>i) & 1);
    printf("\n");
}

uint8_t SET(uint8_t x, int i)
{
    uint8_t val = 0;

    if (i<=6 && i>=0)
    {
        val = x | (1<<i);
        return val;
    }
    else
    {
        printf("invalid bit");
        return x;
    }
    
};
uint8_t CLEAR(uint8_t x, int i)
{
    uint8_t val = 0;
    if (i<=6 && i>=0)
    {
        val = x &~(1<<i);
        return val;
    }
    else
    {
        printf("invalid bit");
        return x;
    }
};
int main(void)
{
    uint8_t reg =0b10000000;
    uint8_t reg_c = reg;
    for(int i =0; i<7;i++)
    {
        reg = SET(reg, i);
        if(reg_c != reg)
         print_bin(reg);
        else
        break;
        reg = CLEAR(reg, i);
    }

    return 0;
}