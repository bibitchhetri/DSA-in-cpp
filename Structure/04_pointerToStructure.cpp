// Structure pointer points to the address of the memory block that stores the structure
// pointer to the structure stores the address of each instances/object of structure
#include "stdio.h"

struct Student {
  int roll_no;
  char name[20];
  float marks;
};

struct Student s={1,"Bibit",80};

int main (int argc, char *argv[])
{
  struct Student *ptr=&s;
//  scanf("%d %s %f",&ptr->roll_no,ptr->name,&ptr->marks); // valid
  printf("Roll no = %d\nName = %s\nMarks = %f\n",ptr->roll_no,ptr->name,ptr->marks); // accessing using 'this' i.e '->' operator 
  printf("Roll no = %d\nName = %s\nMarks = %f\n",(*ptr).roll_no,(*ptr).name,(*ptr).marks);
  return 0;
}
