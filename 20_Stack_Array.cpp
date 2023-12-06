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
};

int main()
{
    int stackSize = 80;
    Stack *s = new Stack(stackSize);
    s->arr[0] = 7;
    s->top++;

    // Check if stack is empty
    if (s->isEmpty())
    {
        cout << "The stack is empty" << endl;
    }
    else
    {
        cout << "The stack is not empty" << endl;
    }

    delete[] s->arr; // Deallocate the array
    delete s;        // Deallocate the stack object

    return 0;
}
