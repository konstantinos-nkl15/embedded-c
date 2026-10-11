#include <stdio.h>
#include <stdint.h>

float average(uint16_t *buf, int n)
{
    // Γράψε εδώ το σώμα:
    // άθροισε τα n στοιχεία και επίστρεψε τον μέσο όρο
    uint32_t sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + *(buf +i);
    }

    return (float) sum / (float) n;
}

int main(void)
{
    uint16_t voltage[5] = {512, 515, 509, 520, 511};
    uint16_t current[3] = {100, 104, 99};

    int nv = sizeof(voltage) / sizeof(voltage[0]);
    int nc = sizeof(current) / sizeof(current[0]);

    printf("μέση τάση:  %f\n", average(voltage, nv));
    printf("μέσο ρεύμα: %f\n", average(current, nc));
    return 0;
}