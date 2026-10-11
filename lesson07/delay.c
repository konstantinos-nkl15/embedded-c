#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t i;

    for (i = 0; i < 1000000000u; i++)
    {
        // καθυστέρηση: δεν κάνει τίποτα
    }

    printf("τέλος\n");
    return 0;
}