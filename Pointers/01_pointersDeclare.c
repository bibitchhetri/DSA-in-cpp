// & = referencing operator
// * = dereferencing operator
#include <stdio.h>

int main (int argc, char *argv[]){
  int a=10,b=9;
  int *p,*q,c;   // *ptr = (value at address) while dereferencing
  p=&a;
  q=&b;
  c=*p;
  printf("Value of a=%d\n",a);
  printf("Value of a=%d\n",*p);
  printf("Address of a:%x\n",&a);
  printf("Address of a:%x\n",p);  
  
  printf("Value of b=%d\n",b);
  printf("Value of b=%d\n",*q);
  printf("Address of a:%x\n",&b);
  printf("Address of b:%x\n",q);
  
  printf("Value of c=%d\n",c);

  return 0;
}
