// free()
// releases the dynamically allocated memory
// builtin function defined in stdlib.h 
// return type is void i.e void free(pointer)
/*
int *ptr;
ptr=(int*)malloc(2*sizeof(int));
free(ptr);
*/
#include "stdio.h"
#include "stdlib.h"

int *display(){
  int n,i,*ptr;
  ptr=(int*)malloc(3*sizeof(int));
  printf("Enter the values:\n");
  for ( i = 0; i < 3; i++) {
    scanf("%d",(ptr+i)); 
  }
  return ptr;
}

int main (int argc, char *argv[])
{
  int n,i,*ptr;
  printf("Enter total no of values: ");
  scanf("%d",&n);
  ptr=(int*)malloc(n*sizeof(int));
  if(ptr==NULL){
    printf("memory not allocated\n");
  }
  printf("Enter the values: ");
  for ( i = 0; i < n; i++) {
    scanf("%d",(ptr+i)); 
  }
//  free(ptr); // after this garbage value will be printed i.e it makes the pointer a dangiling pointer
  printf("The entered values are: ");
  for (i = 0; i < n; i++) {
    printf("%d ",*(ptr+i));
  }
  free(ptr);
  printf("\n");
  return 0;
}
