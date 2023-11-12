// The "Peek" operation in a stack is used to view the top element of the stack without removing it.
// It allows you to inspect the element at the top of the stack without altering the stack's content.
// This operation is particularly useful when you need to check the value of the top element or perform
// conditional operations based on the top element without modifying the stack.

// *** what is the need of peek operation. why this operation exists?  ***

// Inspecting the Top Element:
// The Peek operation allows you to inspect the element at the top of the stack without removing it.
// This is valuable when you need to check the value or attributes of the top element before deciding
// whether to pop it or perform other operations based on its value.

// Conditional Operations:
// In some scenarios, you may want to perform different actions based on the value or properties of the top element.
// The Peek operation enables you to make informed decisions and apply conditional logic without altering the stack's contents.

// Data Validation:
// Before popping an element from the stack, you can use the Peek operation to validate if the top element matches your expected criteria or conditions.
//  If it doesn't meet your requirements, you can choose not to pop it.
#include <iostream>
using namespace std;

class Stack
{
public:
    int size;
    int top;
    int *arr;

    Stack(int stackSize)
    {
        size = stackSize;
        top = -1;
        arr = new int[size];
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == size - 1;
    }

    void push(int val)
    {
        if (isFull())
        {
            cout << "Stack Overflow! Cannot push " << val << " to the stack" << endl;
        }
        else
        {
            top++;
            arr[top] = val;
        }
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow! Cannot pop from the stack" << endl;
            return -1;
        }
        else
        {
            int val = arr[top];
            top--;
            return val;
        }
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty. Cannot peek." << endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
};

int main()
{
    int stackSize = 10;
    Stack *sp = new Stack(stackSize);

    // Push some elements onto the stack
    sp->push(10);
    sp->push(20);
    sp->push(30);

    // Peek at the top element without removing it
    cout << "Top element: " << sp->peek() << endl;

    // Pop and display elements
    cout << "Popped " << sp->pop() << " from the stack" << endl;
    cout << "Popped " << sp->pop() << " from the stack" << endl;

    delete[] sp->arr; // Deallocate the array
    delete sp;        // Deallocate the stack object

    return 0;
}
