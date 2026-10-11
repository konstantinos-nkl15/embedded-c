#include <stdio.h>
#include <stdint.h>

int main(void)
{
    printf("int8_t : %zu", sizeof(int8_t));
    printf("uint16_t: %zu\n", sizeof(uint16_t));
    printf("int32_t:  %zu\n", sizeof(int32_t));
    printf("uint64_t: %zu\n", sizeof(uint64_t));
    printf("INT16_MAX = %d\n", INT16_MAX);
    printf("UINT8_MAX = %d\n", UINT8_MAX);
    return 0;
}