#include <stdio.h>

int my_strlen(char *s)
{
    int  sum = 0;
    for( int i = 0; *(s+i)!='\0'; i++)
    {
        sum = sum + 1;
    }
    return sum;
}

int main(void)
{
    char a[] = "Nano";
    char b[] = "Arduino Nano 33 IoT";
    char c[] = "";

    printf("\"%s\" -> %d\n", a, my_strlen(a));
    printf("\"%s\" -> %d\n", b, my_strlen(b));
    printf("\"%s\" -> %d\n", c, my_strlen(c));
    return 0;
}