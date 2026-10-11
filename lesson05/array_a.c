#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint16_t m[5] = {512, 515, 509, 520, 511};

    printf("m[0] = %u  στη διεύθυνση %p\n", m[0], (void *)&m[0]);
    printf("m[1] = %u  στη διεύθυνση %p\n", m[1], (void *)&m[1]);
    printf("m[2] = %u  στη διεύθυνση %p\n", m[2], (void *)&m[2]);

    printf("μέγεθος ενός στοιχείου: %zu bytes\n", sizeof(m[0]));
    printf("μέγεθος όλου του πίνακα: %zu bytes\n", sizeof(m));
    return 0;
}