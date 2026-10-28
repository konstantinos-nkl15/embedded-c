#include "driver.h"
#include <stdio.h>
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

void print_reg(struct driver_reg *reg_ex)
{
    printf("reg.CRTL   = 0b%8b -- 0d%8u -- 0h%X \n", reg_ex->CTRL,  reg_ex->CTRL,reg_ex->CTRL);
    printf("reg.STATUS = 0b%8b -- 0d%8u -- 0h%X \n", reg_ex->STATUS,  reg_ex->STATUS, reg_ex->STATUS);
    printf("reg.DUTY   = 0b%8b -- 0d%8u -- 0h%X \n", reg_ex->DUTY,  reg_ex->DUTY, reg_ex->DUTY);
}
