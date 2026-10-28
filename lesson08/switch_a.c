#include <stdio.h>

enum motor_state{
    STOPPED,
    RUNNING,
    FAULT
};
void print_state(enum motor_state s);
int main(void)
{
    print_state(RUNNING);
    print_state(STOPPED);
    print_state(FAULT);

    return 0;
}
void print_state(enum motor_state s)
{
    switch (s){
        case STOPPED :
        printf("Motor stopped\n");
        break;
        case RUNNING :
        printf("Motor running\n");
        break;
        case  FAULT  :
        printf("FAULT!\n");
        break;
    }
};