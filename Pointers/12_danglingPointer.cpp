// Dangling pointer: Pointer pointing towards freed memory location
// never leave a pointer dangling or hanging
// initialize pointer with NULL once freed
#include "stdio.h"
#include "stdlib.h"

int main(int argc, char *argv[]) {
  int *ptr = (int *)malloc(sizeof(int));
  *ptr = 10;
  printf("%d\n", *ptr);
  free(ptr);
  ptr = NULL;
  if (ptr == NULL) {
    printf("You cannot dereference it\n");
  } else {
    printf("%d\n", *ptr);
  }
  return 0;
}
