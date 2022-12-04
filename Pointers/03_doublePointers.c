#include <stdio.h>

int main (int argc, char *argv[])
{
  int a = 10;
  int *p = &a;
  int *(*q) = &p;
  printf("value at a = %d\n",a);
  printf("dereferencing p = %d\n",*p);
  printf("dereferencing q = %d\n",*(*q));
  *p = 20;
  printf("value at a = %d\n",a);
  printf("dereferencing p = %d\n",*p);
  printf("dereferencing q = %d\n",*(*q));
  *(*q) = 30; 
  printf("value at a = %d\n",a);
  printf("dereferencing p = %d\n",*p);
  printf("dereferencing q = %d\n",*(*q));

  printf("address of a : %x\n",&a);
  printf("address stored at p : %x\n",p);
  printf("address of p : %x\n",&p);
  printf("address stored at q : %x\n",q);
  return 0;
}
