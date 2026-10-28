#include <stdio.h>
#include "driver.h"

int main(void)
{
    uint32_t fake_mem[3] = {0}; 

    //DECLARATION OF REG
    struct driver_reg *reg_ex = (struct driver_reg *) fake_mem;
    print_reg(reg_ex);

    //TRIAL OF set. FUNCTIONS with
    set_CTRL(reg_ex, 2);
    set_STATUS(reg_ex);
    print_reg(reg_ex);

    return 0;
}