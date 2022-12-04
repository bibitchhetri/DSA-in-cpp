// typedef is used in structure to make alias of: struct structName <struct variable> 

#include "stdio.h"

typedef struct Student {
  int roll_no;
  char name[20];
  float marks;
}student; // here student acts as an alias but not as an structure variable

int main (int argc, char *argv[])
{
  student s1={1,"Bibit",90.23};
  student *ptr=&s1;
  printf("%d %s %f\n",ptr->roll_no,ptr->name,ptr->marks);
  return 0;
}

