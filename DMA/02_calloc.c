// calloc stands for contiguous allocation
// builtin function in stdlib
// malloc allocates single block of memory while calloc allocates multiple bolcks of memory and each block is of same size
// calloc(5,sizeof(int)); --> this will allocate 5 block of 4 bytes
// malloc(5*sizeof(int)); --> this will allocate 1 block of 20 bytes
// memory block is initialized with 0 when allocated with calloc() but the memory block is initialized with any garbage value when allocated with malloc() 
// it accepts two arguements 
// syntax: calloc(size_t n,size_t size);
// example: calloc(5,sizeof(int));
// returns base address of the first byte of the block in the form of void pointer
#include "stdio.h"
#include "stdlib.h"

int main (int argc, char *argv[])
{
  int n,i,*ptr;
  printf("Enter total no of values: ");
  scanf("%d",&n);
  ptr=(int*)calloc(n,sizeof(int));
  printf("Enter the values: ");
  for ( i = 0; i < n; i++) { // commenting out the scan section shows all values 0 in output
    scanf("%d",(ptr+i)); // internal pointer(base address) + i*sizeof(ptr) 
  }
  printf("The entered values are: ");
  for (i = 0; i < n; i++) {
    printf("%d ",*(ptr+i));
  }
  free(ptr);
  printf("\n");
  return 0;
}
