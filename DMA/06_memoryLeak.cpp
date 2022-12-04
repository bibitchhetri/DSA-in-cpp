// open a.out process to see memory leak every time you continue
// to prevent memory leak use free()
#include "stdio.h"
#include "stdlib.h"

int main (int argc, char *argv[])
{
  int ch=1, *ptr;
  while (ch<50) {
    printf("Memory leak demo\n");
    ptr=(int*)malloc(40000*sizeof(int));

    printf("continue? press 1 for continue: ");
    scanf("%d",&ch);
  }
  free(ptr); //comment free() to observe memory leak
  return 0;
}
