// Structure is a User defined datatype that groups elements of/ variable of different different datatype under a single name 
// Structure is a collection of one or more variables of different different datatypes that are grouped together under a single name 
// Structure is just a template i.e memory is not allocated for declaring a structure 
// Once a variable name is given accessing the structure then the memory is allocated i.e object of structure is made then only memory is allocated
// Size of memory allocated is calculated by adding all the datatypes defined within the structure itself
// Seprate memory is allocated for each objets of structure
// example declaring variables/objects of structure
#include "stdio.h"

struct Student
{
  int roll_no;
  char name[20];
  float marks;
}s1;

struct // we can declare structure this way but this doesn't allow making further instances of this strtucutre than that is implicitly declared ex: s2 
{
  int roll_no;
  char name[20];
  float marks;
}s2;

int main (int argc, char *argv[])
{
  struct Student s3; 
  printf("Size of struct Student = %lu\n",sizeof(struct Student));
  printf("Size of struct Student using its object s1 = %lu\n",sizeof(s2));
  return 0;
}
