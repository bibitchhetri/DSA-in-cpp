#include <iostream>

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = nullptr;
    }
};

class Stack {
private:
    Node *top;

public:
    Stack() { top = nullptr; }

    void push(int x) {
        Node *temp = new Node(x);
        temp->next = top;
        top = temp;
    }

    int pop() {
        if (top == nullptr) {
            std::cout << "Error: Stack underflow\n";
            return -1;
        }
        int x = top->data;
        Node *temp = top;
        top = top->next;
        delete temp;
        return x;
    }

    int peek() {
        if (top == nullptr) {
            std::cout << "Error: Stack is empty\n";
            return -1;
        }
        return top->data;
    }

    bool isEmpty() { return top == nullptr; }

    void display() {
        std::cout << "Stack: ";
        Node *p = top;
        while (p != nullptr) {
            std::cout << p->data << " ";
            p = p->next;
        }
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

