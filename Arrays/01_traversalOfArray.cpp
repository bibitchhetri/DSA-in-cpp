// visiting each element of the array exactly once is known a traversal of array element
#include "iostream"

int main (int argc, char *argv[])
{
  int a[5],size,i;
  std::cout << "Enter Size of the array: ";
  std::cin >> size;
  if (size>5) {
    std::cout << "Array size out of bound!" << std::endl;   
  }
  else {
    std::cout << "Enter " << size << " elements ";
    for ( i = 0; i < size; i++) {
      std::cin >> a[i]; 
    }
    std::cout << "The elements in array are: ";
    for ( i = 0; i < size; i++) {
      std::cout << " " << a[i];
    }
  }
  std::cout << std::endl;
 return 0;
}
