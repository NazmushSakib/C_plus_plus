#include <iostream>
using namespace std;

const int MAX = 4; // Maximum size of the stack

// Stack variables
int stack[MAX];
int top = -1; // Initialize top of stack

// Function to push an element onto the stack
void push(int value) {
    if (top >= MAX - 1) //MAX -1 cause, array[4]={0,1,2,3,4}= means 5 elements while stack size-> stack[3]={0,1,2,3} =4 elements
    {
        cout << "Stack overflow. Cannot push " << value << ".\n";
        return;
    }
    stack[++top] = value; // Increment top and add value
    cout << value << " pushed onto stack.\n";
}

// Function to pop an element from the stack
int pop() {
    if (top < 0) {
        cout << "Stack is empty. Cannot pop.\n";
        return -1; // or throw an exception
    }
    return stack[top--]; // Return top value and decrement top
}

// Function to peek at the top element of the stack
int peek() {
    if (top < 0) {
        cout << "Stack is empty. Cannot peek.\n";
        return -1; // or throw an exception
    }
    return stack[top]; // Return the top value
}
// Function to check if the stack is empty
bool isEmpty() {
    return top < 0;
}

// Main function to demonstrate stack operations
int main() {
    push(10);
    push(20);
    push(30);

    cout << "Top element is: " << peek() << endl;

    cout << pop() << " popped from stack.\n";
    cout << "Top element is: " << peek() << endl;

    cout << pop() << " popped from stack.\n";
    cout << pop() << " popped from stack.\n";
    cout << pop() << " popped from stack.\n"; // Attempt to pop from an empty stack

    return 0;
}
