#include <iostream>

const int MAX_SIZE = 100;

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() { top = -1; }

    void push(int x) {
        if (top == MAX_SIZE - 1) {
            std::cout << "Error: Stack overflow\n";
            return;
        }
        arr[++top] = x;
    }

    int pop() {
        if (top == -1) {
            std::cout << "Error: Stack underflow\n";
            return -1;
        }
        return arr[top--];
    }

    int peek() {
        if (top == -1) {
            std::cout << "Error: Stack is empty\n";
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() { return top == -1; }

    int size() { return top + 1; }

    void display() {
        std::cout << "Stack: ";
        for (int i = top; i >= 0; i--)
            std::cout << arr[i] << " ";
        std::cout << std::endl;
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.display();

    std::cout << "Top element is: " << s.peek() << std::endl;
    std::cout << "Popped element is: " << s.pop() << std::endl;
    s.display();

    return 0;
}

