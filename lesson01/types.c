#include <stdio.h>
int main(void)
{    
    char c   = 'A';
    int i    = 42;
    float f  = 3.14f;
    double d = 2.718281828;

    printf("char c: %c  (%zu)\n", c, sizeof(c));
    printf("int:    %d  (%zu bytes)\n", i, sizeof(i));
    printf("float:  %f  (%zu bytes)\n", f, sizeof(f));
    printf("double: %f  (%zu bytes)\n", d, sizeof(d));

    int big = 2147483647;
    big = big + 1;
    printf("%d\n", big);
    
    return 0;
}