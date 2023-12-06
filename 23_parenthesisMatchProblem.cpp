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

int chkParenthesis(Stack *sp, int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == '(')
        {
            sp->push(arr[i]);
        }
        else if (arr[i] == ')')
        {
            if (sp->isEmpty())
            {
                // Unbalanced parentheses
                return 0;
            }
            sp->pop();
        }
    }

    // Check if the stack is empty after processing all elements
    return sp->isEmpty() ? 1 : 0;
}

int main()
{
    int stackSize = 7;
    Stack *sp = new Stack(stackSize);
    int arr[] = {1, 2, '(', 4, 5, 6, ')'};

    cout << "Before pushing, Full: " << sp->isFull() << endl;
    cout << "Before pushing, Empty: " << sp->isEmpty() << endl;
    cout << "Stack has been created successfully" << endl;

    cout << "after pushing, Full: " << sp->isFull() << endl;
    cout << "after pushing, Empty: " << sp->isEmpty() << endl;

    // cout << "popping " << sp->pop() << " from the stack" << endl;
    // cout << "popping " << sp->pop() << " from the stack" << endl;
    // cout << "popping " << sp->pop() << " from the stack" << endl;

    int result = chkParenthesis(sp, arr, sizeof(arr) / sizeof(arr[0]));

    if (result)
    {
        cout << "Parentheses are balanced." << endl;
    }
    else
    {
        cout << "Parentheses are not balanced." << endl;
    }

    // delete[] sp->arr; // Deallocate the array
    // delete sp;        // Deallocate the stack object

    return 0;
}
