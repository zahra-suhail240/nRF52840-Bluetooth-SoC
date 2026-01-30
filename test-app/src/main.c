#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

#ifdef CONFIG_MYFUNCTION
#include "myfunction.h"
#endif

int main(void) {

  int a = 3;
  int b = 4;
  int result = sum(a, b);
  while (1) {

#ifdef CONFIG_MYFUNCTION
    printk("The sum of %d and %d is %d\n", a, b, result);
#else
    printk("My Function is disabled. Enable CONFIG_MYFUNCTION to use it.\n"); 
    return 0;
#endif
    k_msleep(1000);
  }
  
}