// Wild Pointers = Uninitialized pointers are wild pointers that points to any garbage address with garbage value
#include "stdio.h"
#include "stdlib.h"

int main (int argc, char *argv[])
{
//  int *ptr; // wild pointers
//  int *ptr=NULL;
//  int a=9;
//  int *ptr=&a;
 int *ptr=(int*)malloc(sizeof(int)); // no wild pointer issue
  *ptr=67;
  printf("%d\n",*ptr);
  return 0;
}
