#include <iostream>
using namespace std;

#define SIZE 5
int stack[SIZE];
int top = -1;

void isEmpty() {
  if (top == -1) {
    cout << "\n Stack is Empty" << endl;
  } else {
    cout << "\n Stack is not Empty" << endl;
  }
}

void isFull() {
  if (top == SIZE - 1) {
    cout << "\n Stack is Full" << endl;
  } else {
    cout << "\n Stack is not Full" << endl;
  }
}

void push() {
  int item;
  cout << "\n Enter number to push in stack: ";
  cin >> item;
  if (top == SIZE - 1) {
    cout << "\n Stack Overflow!!" << endl;
  } else {
    top++;
    // cout<<"Top = "<<top<<endl;
    stack[top] = item;
  }
}

void pop() {
  int item;
  if (top == -1) {
    cout << "\n Stack Underflow!!" << endl;
  } else {
    item = stack[top];
    top--;
    cout << "\n" << item << " is poped from stack" << endl;
  }
}

void peek() {
  if (top == -1) {
    cout << "\n Stack is empty" << endl;
  } else {
    cout << "\n Element at the top of stack is: " << stack[top] << endl;
  }
}

void display() {
  int i;
  cout << "\n (LIFO) Elements in stack are: ";
  for (int i = top; i >= 0; i--) {
    cout << stack[i] << " ";
  }
  cout << endl;
}

// function to add two numbers

int main() {
  int ch;
  do {
    cout << "\n Enter the operation with stack: \n 1. isEmpty? \n 2. isFull? "
            "\n 3. Push \n 4. Pop \n 5. Peek \n 6. Display \n"
         << endl;
    cin >> ch;
    switch (ch) {
    case 1:
      isEmpty();
      break;
    case 2:
      isFull();
      break;
    case 3:
      push();
      break;
    case 4:
      pop();
      break;
    case 5:
      peek();
      break;
    case 6:
      display();
      break;
    default:
      cout << "\n Invalid Choice!" << endl;
      break;
    }
  } while (ch != 0);
  return 0;
}
