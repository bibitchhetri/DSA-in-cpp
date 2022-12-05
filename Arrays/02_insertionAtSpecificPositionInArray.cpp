// insertion of random element in a given position of an existing array
// in unsorted array
/*
a[size]=a[pos-1];
a[pos-1]=num;
*/
#include "iostream"

int main (int argc, char *argv[])
{
  int a[20],size,num,pos,i;
  std::cout << "Enter Size of the array: ";
  std::cin >> size;
  if (size>20) {
    std::cout << "Array size out of bound!" << std::endl;   
  }
  else {
    std::cout << "Enter " << size << " elements: ";
    for ( i = 0; i < size; i++) {
      std::cin >> a[i]; 
    }
    std::cout << "The elements in array are: ";
    for ( i = 0; i < size; i++) {
      std::cout << a[i] << " ";
    }
    std::cout << std::endl << "Enter the element you want to insert in the array: ";
    std::cin >> num;
    std::cout << "Enter the position where you want to insert: ";
    std::cin >> pos;
    if(pos<=0||pos>size+1){
      std::cout << "Invalid position" << std::endl;
    }
    else {
      for ( i = size-1; i >= pos-1; i--) {
        a[i+1]=a[i];
      }
      a[pos-1]=num;
      size++;
      std::cout << "The elements in array after insertion are: ";
      for ( i = 0; i < size; i++) {
        std::cout << a[i] << " ";
      }
    }
  }
  std::cout << std::endl;
 return 0;
}
