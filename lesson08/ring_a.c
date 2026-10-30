#include <stdio.h>
#include <stdint.h>

#define SIZE 8

struct ring{
    uint8_t buffer[SIZE];
    uint8_t head;
    uint8_t tail;
    uint8_t count;
};
int ring_write( uint8_t input, struct ring *r);
void ring_print( const struct ring *r);
int ring_read( uint8_t *writing_pos, struct ring *r);
int main(void)
{
    int k =0;
    uint8_t value = 0;
    struct ring r ={ {0}, 0, 0, 0}; 
    
    for (int i =0; i < 10; i++)
    {
        k = ring_write((uint8_t) i+1, &r);
        if (k == 1)
        printf("failed to write %d\n ",i);

    }
    ring_print(&r);
    for(int i=0;i<3;i++)
        k = ring_read(&value, &r);
    for (int i =10; i< 12; i++)
    {
        k = ring_write((uint8_t) i+1, &r);
        if (k == 1)
        printf("failed to write %d\n ",i);
    }
    ring_print(&r);




    return 0;
}

int ring_write(uint8_t input, struct ring *r)
{
    if ( r->count < SIZE)
    {
        r->buffer[(*r).head] = input;
        if((r->head + 1) % SIZE !=0)
        {
            (*r).head++;
        }
        else
        r->head = 0;

        r->count++;

        return 0;
    }
    else
    return 1;

}

void ring_print( const struct ring *r)
{
    for(int i = 0; i<SIZE; i++)
    {
        printf("buffer[%d] = %u\n",i, r->buffer[i]);
    }
    printf("\n\nHEAD = %u\n", r->head );
    printf("TAIL = %u\n", r->tail);
    printf("COUNT = %u\n", r->count);
}

int ring_read( uint8_t *writing_pos, struct ring *r)
{
    if (r->count >0)
    {
        *writing_pos = r->buffer[r->tail];
        r->count--;
        if((r->tail+1) % SIZE != 0)
        {
            r->tail++;
        }
        
        else r->tail = 0;
        return 0;
    }
    else
    {
        printf("\nNOTHING TO READ.\n");
        return 1;
    }
}