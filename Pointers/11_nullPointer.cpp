// int *ptr = NULL;
// int *ptr = 0;
// NULL pointer pointes to 0th memory location that is reserved
// NULL pointer doesn't point to any valid object/value, it is reserved memory location and can't be dereferenced
// Used in memory allocation and error handling
// better to initialize pointer with NULL rather than leaving it uninitialized

#include "stdio.h"

int main (int argc, char *argv[])
{
  int a=3;
  int *ptr1=NULL;
  int *ptr2;
  int *ptr3=NULL;
  if (ptr1==NULL) {
    printf("This is null pointer\n");
  }
  else {
    printf("Value of ptr1 = %d\n",*ptr1);
  }
  printf("Garbage value of ptr2 = %d\n",ptr2);  //prints garbage value
  if (ptr1==ptr3) {
    printf("ptr1 and ptr2 both are NULL\n");    
  } 
  else {
    printf("Not NULL\n");
  }
  return 0;
}
