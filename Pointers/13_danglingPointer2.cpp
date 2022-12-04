#include "stdio.h"
#include "stdlib.h"

int main (int argc, char *argv[])
{
  int *ptr=NULL;
  {
    int a=5;
    ptr=&a;
    printf("a=%d\n",*ptr);
  }
  printf("a=%d\n",*ptr); // it acts as a Dangling Pointer as the variable 'a' is out of block/scope from the pointer address
  return 0;
}
