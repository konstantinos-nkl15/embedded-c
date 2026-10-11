#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint16_t m[5] = {512, 515, 509, 520, 511};
    int n = sizeof(m) / sizeof(m[0]);   // πλήθος στοιχείων

    uint32_t sum = 0;

    // Γράψε εδώ έναν βρόχο που προσθέτει όλα τα στοιχεία στο sum
    for (int i = 0; i < n; i++)
    {
        sum = sum + m[1];
    }

    // Γράψε εδώ τον υπολογισμό του μέσου όρου και την εκτύπωσή του
    printf("Average m: %f",(float) sum/(float) n);
    return 0;
}