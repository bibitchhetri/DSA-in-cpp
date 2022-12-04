// realloc() --> resize or reallocation
// can increase or decrease the size of memory block
// syntax void* realloc(void *pointer,size_t size);
// reallocation is done without loosing the previous content
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
    scanf("%d",(ptr+i)); 
  }
  printf("Enter updated size of n: ");
  scanf("%d",&n);
  int *ptr1=(int*)realloc(ptr,n*sizeof(int));
  printf("Previous address:%d\nnew address:%d\n",ptr,ptr1);
  printf("The entered values are: ");
  for (i = 0; i < n; i++) {
    printf("%d ",*(ptr1+i));
  }
  free(ptr1);
  printf("\n");
  return 0;
}

