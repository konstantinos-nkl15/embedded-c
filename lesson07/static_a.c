#include <stdio.h>

void button_pressed(void)
{
    // Γράψε εδώ:
    // ένας μετρητής που θυμάται τα πατήματα ανάμεσα στις κλήσεις,
    // αυξάνεται κατά 1 και τυπώνεται
    static int i = 0;
    i = i + 1;
    printf("πατήματα: %d \n",i);
}

int main(void)
{
    button_pressed();
    button_pressed();
    button_pressed();
    return 0;
}