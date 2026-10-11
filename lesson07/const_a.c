#include <stdio.h>
#include <stdint.h>

float average(const uint16_t *buf, int n)
{
    uint32_t sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + buf[i];
    }
    //buf[0] = 0;   // <-- "κατά λάθος" αλλαγή
    return (float)sum / n;
}

int main(void)
{
    const uint16_t m[5] = {512, 515, 509, 520, 511};

    printf("μέσος όρος: %f\n", average(m, 5));
    return 0;
}