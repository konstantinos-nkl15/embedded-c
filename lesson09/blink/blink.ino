#include <stdio.h>
#include <stdint.h>
void setup(void)
{
    DDRB |= (1<<5);
}

void loop(void)
{
    PORTB ^= (1<<5);
    volatile uint8_t i;

    for (i = 0; i < 10; i++)
    {
        for (  volatile uint8_t j = 0; j < 255; j++)
        {
            for (volatile uint8_t k =0; k<255; k++)
            {
            }
        }
    }
    
}