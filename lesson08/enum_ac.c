#include <stdio.h>

enum motor_state{
    STOPPED,
    RUNNING,
    FAULT
};

int main(void)
{
    enum motor_state s = STOPPED;
    printf("STOPPED = %d\n", STOPPED);
    printf("RUNNING = %d\n", RUNNING);
    printf("FAULT   = %d\n", FAULT);
    printf("s       = %d\n", s);

    s = FAULT;
    printf("s       = %d\n", s);
    printf("sizeof(s) = %zu\n", sizeof(s)); 
    return 0;
}