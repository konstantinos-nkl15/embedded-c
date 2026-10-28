#include <stdio.h>
enum motor_state{
    STOPPED,
    RUNNING,
    FAULT
};
enum motor_event{
    EV_STOP,
    EV_START,
    EV_OVERCURRENT,
    EV_RESET
};
void switch_state(enum motor_state *s, enum motor_event e);
void print_state(enum motor_state s);

int main(void)
{
    enum motor_state state = STOPPED;
    enum motor_event events[7] = {EV_START, EV_START, EV_OVERCURRENT, EV_START, EV_RESET, EV_START, EV_STOP};
    for (int i = 0; i < (int) ( sizeof(events) / 4 ); i++)
    { 
        switch_state(&state, events[i]);
        print_state(state);
    }
    return 0;
}

void switch_state(enum motor_state *s, enum motor_event e)
{
    switch (*s) { 
        case STOPPED :
        switch (e){
            case EV_START :
            *s = RUNNING;
            break;
            
            default :
            break;
        }
        break;
        case RUNNING :
        switch (e){
            case EV_STOP :
            *s = STOPPED;
            break;
            case EV_OVERCURRENT :
            *s = FAULT;
            break;

            default :
            break;
        }
        break;
        case FAULT :
        switch (e){
            case EV_RESET :
            *s = STOPPED;
            break;
            default :
            break;
        }
        break;
    }

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
}