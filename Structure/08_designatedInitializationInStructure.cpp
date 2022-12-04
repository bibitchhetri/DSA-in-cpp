#include "stdio.h"

struct question
{
    int a;
    float b;
    int c;
};

int main (int argc, char *argv[]) {
//  struct question q={1,10,15};//precious initialization
  struct question q = {q.b=1,q.c=10,q.a=15};// such type of initialization is called designated initialization and allows initialization to be done in any order
  printf("%d %f %d\n",q.a,q.b,q.c);
  return 0;
} 
