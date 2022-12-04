// Union are just similar to structures in almost all sense in terms of syntax
// Difference : Datatypes under Structure has their own seprate memory location with individual sizes while Datatypes under Union share the same memory location with size of the datatype having highest size 

#include "stdio.h"

union abc
{
  int a;
  char b;
  float c;
};

int main (int argc, char *argv[])
{
  union abc u;
  union abc *ptr=&u;
  u.a=1;
  u.b='A';
  u.c=79.90;
  printf("a value is %d\n",ptr->a);
  printf("b value is %c\n",ptr->b);
  printf("c value is %f\n",ptr->c);
  return 0;
}
