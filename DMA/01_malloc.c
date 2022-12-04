// DMA allocates memory dynamically
// Returns void pointer
// typecasting is required for the void pointer returnes
// malloc stands for memory allocation
#include "stdio.h"
#include "stdlib.h"

int main (int argc, char *argv[])
{
  int n,i,*ptr;
  printf("Enter total no of values: ");
  scanf("%d",&n);
  ptr=(int*)malloc(n*sizeof(int));
  printf("Enter the values: ");
  for ( i = 0; i < n; i++) {
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
