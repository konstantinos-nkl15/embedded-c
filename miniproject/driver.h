#include <stdint.h>
#ifndef  DRIVER_H
#define  DRIVER_H

struct  driver_reg {
   volatile uint32_t CTRL;
   volatile uint32_t STATUS;
   volatile uint32_t DUTY;
};

void set_CTRL(struct driver_reg *driver_reg, int i);
void clear_CTRL(struct driver_reg *driver_reg, int i);

void set_STATUS(struct driver_reg *driver_reg);
void clear_STATUS(struct driver_reg *driver_reg);
#endif