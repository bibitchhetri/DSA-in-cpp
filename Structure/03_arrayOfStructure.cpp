#include "stdio.h"
 
struct Student {
  int roll_no;
  char name[20];
  float marks;
};

int main (int argc, char *argv[])
{
  struct Student s[3]; //array of structure 
  printf("Enter roll_no, name and marks of student\n");
  for (int i = 0;  i < 3;  i++) {
    scanf("%d %s %f",&s[i].roll_no,s[i].name,&s[i].marks);
  }
  for (int i = 0;  i < 3;  i++) {
    printf("%d %s %f",s[i].roll_no,s[i].name,s[i].marks);
  }
  return 0;
}     
