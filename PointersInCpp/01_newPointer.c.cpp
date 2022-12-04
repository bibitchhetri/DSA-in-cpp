#include "iostream"

int main (int argc, char *argv[])
{ 
  // basic example
  int a=1;
  int *ptr=&a;
  *ptr=5;
  std::cout << "The value of a is " << *(ptr) << std::endl;

  // new operator
  int *p=new int(40);
  std::cout << "The value at address p is " << *(p) << std::endl;
  
  // dynamic arrays
  int *arr=new int[3];
  arr[0]=10;
  *(arr+1)=20;
  arr[2]=30;
  std::cout << "The value or arr[0] is " << arr[0] << std::endl;
  std::cout << "The value or arr[1] is " << arr[1] << std::endl;
  std::cout << "The value or arr[1] is " << arr[1] << std::endl;

  // delete operator
  delete[] arr;
  std::cout << "The value or arr[0] is " << arr[0] << std::endl;
  std::cout << "The value or arr[1] is " << arr[1] << std::endl;
  std::cout << "The value or arr[1] is " << arr[1] << std::endl;
  arr = NULL;
  return 0;
}
