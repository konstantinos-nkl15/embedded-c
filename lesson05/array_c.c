#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint16_t m[5] = {512, 515, 509, 520, 511};
    uint16_t *p = m;

    printf("p     = %p\n", (void *)p);
    printf("p + 1 = %p\n", (void *)(p + 1));
    printf("p + 2 = %p\n", (void *)(p + 2));

    printf("*p       = %u\n", *p);
    printf("*(p + 2) = %u\n", *(p + 2));
    printf("p[3]     = %u\n", p[3]);
    return 0;
}