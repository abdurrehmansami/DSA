// Code In C++
#include <iostream>
using namespace std;
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
}
int ind_insertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        /* code */
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index = 1;
    display(arr, size);
    cout << endl;
    size += 1;
    int check_display = ind_insertion(arr, size, element, 100, index);
    if (check_display == 1)
    {
        cout << "Display Successful" << endl;
        display(arr, size);
    }
    else
    {
        cout << "Insertion Failed " << endl;
    }
    return 0;
}