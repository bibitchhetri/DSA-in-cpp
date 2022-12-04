// the process of inserting extra bits/bytes/space between two or more structure variables, just align the data for low CPU cycle/speed in performance is called structure padding
// programmer should write the members of structures in the increasing order of their size
// bytes block is decided with the datatype with largest size
#include "stdio.h"

struct abc
{
//  char c; // char,char,int : takes 8 bytes and 2 CPU cycles
  char a;
  int b;
  char c; // char,int,char : takes 12 bytes and 3 CPU cycle
};

int main (int argc, char *argv[])
{
  struct abc s;
  printf("%lu\n",sizeof(s));
  return 0;
}
