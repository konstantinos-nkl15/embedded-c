#include "driver.h"
#include <math.h>
//CTRL
void set_CTRL(struct driver_reg *driver_reg, int i)
{
  if (i > -1 && i < 3)
  {
    driver_reg->CTRL |= (1 << i);
  }
}

void clear_CTRL(struct driver_reg *driver_reg, int i)
{
  if (i > -1 && i < 3)
  {
    driver_reg->CTRL &= ~(1 << i);
  }
}

//STATUS
void set_STATUS(struct driver_reg *driver_reg)
{

  {
    driver_reg->STATUS |= 1;
  }
}

void clear_STATUS(struct driver_reg *driver_reg)
{
    driver_reg->STATUS &= 0;
}


//DUTY
void set_DUTY(struct driver_reg *driver_reg,float ratio)
{
    if(ratio <= 1 && ratio >= 0)
    driver_reg->DUTY = (uint32_t) ( ratio * 1023);
}