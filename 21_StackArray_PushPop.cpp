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
};

int main()
{
    int stackSize = 10;
    Stack *sp = new Stack(stackSize);

    cout << "Before pushing, Full: " << sp->isFull() << endl;
    cout << "Before pushing, Empty: " << sp->isEmpty() << endl;
    cout << "Stack has been created successfully" << endl;

    sp->push(1);
    sp->push(23);
    sp->push(99);
    sp->push(75);
    sp->push(3);
    sp->push(64);
    sp->push(57);
    sp->push(46);
    sp->push(89);
    sp->push(6);
    sp->push(22); // 11th element, so can't be pushed

    cout << "after pushing, Full: " << sp->isFull() << endl;
    cout << "after pushing, Empty: " << sp->isEmpty() << endl;

    cout << "popping " << sp->pop() << " from the stack" << endl;
    cout << "popping " << sp->pop() << " from the stack" << endl;
    cout << "popping " << sp->pop() << " from the stack" << endl;

    delete[] sp->arr; // Deallocate the array
    delete sp;        // Deallocate the stack object

    return 0;
}
