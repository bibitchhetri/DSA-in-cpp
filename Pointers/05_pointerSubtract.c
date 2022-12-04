// Subtraction of pointer variable can be done to find the difference 
// between the two elements in an array
// - during arithmetic Subtraction if pointer goes out of range it gives
// a garbage value
#include "stdio.h"

int main (int argc, char *argv[])
{
  int a[]={0,1,2,3,4};
  int *p=a;
  int *q=&a[3];
  printf("p-q = %d\n",p-q);
  printf("q-p = %d\n",q-p);
  printf("value of q = %d\n",*q);
  q = q-2;
  printf("value of q = %d\n",*q);
  p = p+2;
  printf("value of p = %d\n",*p);
  q = q-4;
  printf("value of q = %d\n",*q);
  return 0;
}
