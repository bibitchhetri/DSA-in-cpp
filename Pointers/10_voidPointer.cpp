// void pointer doesn't have any associated datatype i.e can be converted into any other pointer datatype i.e type casting is required
// it is a generic pointer
// typecasting is requied before dereferencing a void pointer
#include "stdio.h"

int main (int argc, char *argv[])
{
  void *vp;
  int a=5;
  float b=1.56;
  char ch='c';
  vp=&a;
  printf("a=%d\n",*(int*)vp);
  vp=&b;
  printf("b=%f\n",*(float*)vp);
  vp=&ch;
  printf("ch=%c\n",*(char*)vp);
  return 0;
}
