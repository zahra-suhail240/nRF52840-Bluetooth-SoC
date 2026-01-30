#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

#include "myfunction.h"

int main(void) {
  int a = 3;
  int b = 4;
  int result = sum(a, b);
  while (1) {
    printk("The sum of %d and %d is %d\n", a, b, result);
    k_msleep(1000);
  }
}