#include <stdio.h>

int main(void)
{
    int      x = -1;
    unsigned u = 1;

    if (x < u)
        printf("-1 < 1\n");
    else
        printf("-1 >= 1 ???\n");
    return 0;
}