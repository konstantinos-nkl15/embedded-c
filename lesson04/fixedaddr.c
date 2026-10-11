#include <stdio.h>
#include <stdint.h>

void print_bin(uint8_t x)
{
    for (int i = 7; i >= 0; i--)
        printf("%d", (x >> i) & 1);
    printf("\n");
}

int main(void)
{
    uint8_t reg = 0x00;
    uintptr_t addr = (uintptr_t)&reg;   // ο "αριθμός του datasheet"

    // ΑΠΟ ΕΔΩ ΚΑΙ ΚΑΤΩ: ούτε reg, ούτε &reg. Μόνο addr.
    uint8_t *p = (uint8_t *)addr;
    // Βήμα 1: φτιάξε τον pointer p από το addr (μία γραμμή, με cast)
    *p |= (1<<5);
    // Βήμα 2: οι τρεις γραμμές σου από την Άσκηση Δ, αυτούσιες

    print_bin(reg);
    return 0;
}