// structure packing is used pack the empty memory locations caused due to sructure padding
// nowadays it is done by the compiler itself but we can manually do structure packing as well
// performance will be less i.e more CPU cycle is required

#include "stdio.h"
#pragma pack(1) // this allows to access the memory 1byte by byte, no padding would be there

struct abc
{
  char a;
  int b;
  char c;
//  double d; //check for double as well
};

int main (int argc, char *argv[])
{
  struct abc s;
  printf("%lu\n",sizeof(s));
  return 0;
}
