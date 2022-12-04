#include "stdio.h"
#include "stdlib.h"

int* func(){
//  int a=10; // this is local variable, which causer ptr to be a Dangling pointer
  static int a = 10; // this makes variable 'a' a global variable which avoids from making a Dangling Pointer
  return &a;
}

int main (int argc, char *argv[])
{
  int *ptr=func();
  printf("%d\n",*ptr);
  return 0;
}
