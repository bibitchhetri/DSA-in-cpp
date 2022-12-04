#include "stdio.h"

struct Student
{
  int roll_no;
  char name[20];
  float marks;
}s={1,"Bibit",90.12};//this is also fine

struct Student s1 = {2,"Avi",80.54}; // outside of main can also be initialized

int main (int argc, char *argv[])
{
  struct Student s2 = {3,"Janam",85.3};// order should match
  struct Student s3 = {4};//this is partial initialization and by default int and float will be initialized with 0 and string and char with NULL
  struct Student s4;
  struct Student s5;
  s5 = s1; // this is valid
  //s5 == s2; // invalid
  //s5 > s2; //invalid
  //s5 < s2; //invalid
  //s1.roll_no == s2.roll_no; // valid

  //Run time initialization
  printf("Enter (roll_no,name,marks) for s4\n");
  scanf("%d %s %f",&s4.roll_no,s4.name,&s4.marks);
  //Accessing of Structure
  printf("%d %s %f\n",s1.roll_no,s1.name,s1.marks);
  printf("%d %s %f\n",s4.roll_no,s4.name,s4.marks);
  return 0;
}
