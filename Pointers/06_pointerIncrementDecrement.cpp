// we cannot perform incre-decre operation on internal pointer of an array
// i.e ptr 'a' but can be performed ++ and -- operation on normal pointer variable
#include "stdio.h"

int main (int argc, char *argv[])
{
  int a[]={0,1,2,3,4};
  int *p=a;
  printf("PreIncrement\n");
  printf("%d %d\n",*(++p),*(++p));
  printf("%d \n",*p);
  
  printf("PostIncrement\n");
  printf("%d %d\n",*(p++),*(p++));
  printf("%d \n",*p);
  
  printf("PreDecrement\n");
  printf("%d %d\n",*(--p),*(--p));
  printf("%d \n",*p);

  printf("PostDecrement\n");
  printf("%d %d\n",*(p--),*(p--));
  printf("%d \n",*p);

  return 0;
}
