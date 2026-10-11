#include <stdio.h>
#include <stdint.h>

int main(void)
{
    volatile uint32_t i;

    for (i = 0; i < 1000000000u; i++)
    {
        // καθυστέρηση: δεν κάνει τίποτα
    }

    printf("τέλος\n");
    return 0;
}