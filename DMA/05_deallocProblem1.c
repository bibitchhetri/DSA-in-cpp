// using DMA we have to manually free the memory otherwise the memory block remains preserved and consumed
#include "stdio.h"
#include "stdlib.h"

int *display(){
  int n,i,*ptr;
  ptr=(int*)malloc(3*sizeof(int));
  printf("Enter the values: ");
  for ( i = 0; i < 3; i++) {
    scanf("%d",(ptr+i)); 
  }
  return ptr;
}

int main (int argc, char *argv[]) {
  int i,*ptr1;
  ptr1=display();
  printf("The entered values are: ");
  for (i = 0; i < 3; i++) {
    printf("%d ",*(ptr1+i));
  }
  free(ptr1);
  printf("\n");
  return 0;
}
