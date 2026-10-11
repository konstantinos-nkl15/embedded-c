#include <stdio.h>

int main(void)
{
    char s[] = "Nano";

    printf("το string: %s\n", s);
    printf("sizeof(s) = %zu\n", sizeof(s));

    for (int i = 0; s[i] != '\0'; i++)
    {
        printf("s[%d] = '%c'  ASCII %d\n", i, s[i], s[i]);
    }
    return 0;
}