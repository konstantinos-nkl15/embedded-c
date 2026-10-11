#include <stdio.h>

int my_strlen(char *s)
{
    int sum = 0;
    for (int i = 0; *(s + i) != '\0'; i++)
    {
        sum = sum + 1;
    }
    return sum;
}

int main(void)
{
    char ok[5]  = "Nano";
    char bad[4] = "Nano";

    printf("ok:  %d\n", my_strlen(ok));
    printf("bad: %d\n", my_strlen(bad));
    return 0;
}