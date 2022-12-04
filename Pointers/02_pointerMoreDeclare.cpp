#include <stdio.h>
int main (int argc, char *argv[]) {
  int a=10,b=9,c;
  int *p,*q;
  p=&a,&b;
  //p=(&a,&b);
  printf("Address of a:%x\n",&a);
  printf("Address at p:%x\n",p);
  printf("Address of b:%x\n",&b);
  printf("Address at q:%x\n",q);
  return 0;
}
