#include "stdio.h"

int main (int argc, char *argv[])
{
  int a[5] = {0,1,2,3,4};
  int *p = &a[0];
  printf("Value of a[0] = %d\n",a[0]);
  printf("Address of a[0] = %x\n",&a[0]);
  printf("Value at p = %d\n",*p);
  printf("Address at p = %x\n",p);
  p = p + 2;
  printf("Value of a[2] = %d\n",a[2]);
  printf("Address of a[2] = %x\n",&a[2]);
  printf("Value at p = %d\n",*p);
  printf("Address at p = %x\n",p);
  *p = 20;
  printf("Value of a[2] = %d\n",a[2]);
  printf("Address of a[2] = %x\n",&a[2]);
  printf("Value at p = %d\n",*p);
  printf("Address at p = %x\n",p);
  return 0;
}
