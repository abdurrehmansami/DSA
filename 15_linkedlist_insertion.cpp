#include <iostream>
using namespace std;
// Node structure representing a single node in the linked list
struct Node
{
    int data;
    Node *next;
};
// head ek pointer hai struct node * type ka
// saray nodes kimemory dynamically heap me allocate hui
// Traversing and displaying the elements of the linked list
void traversal(Node *head)
{
    Node *current = head;

    while (current != nullptr)
    {
        std::cout << '\n'
                  << current->data << " "; // Display the data in the current node
        current = current->next;           // Move to the next node
    }
    // std::cout << std::endl;
}
Node *insertAtFirst(Node *head, int data)
{
    Node *ptr = new Node();
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
Node *insertAtIndex(Node *head, int data, int index)
{
    Node *ptr = new Node();
    Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
 
    return head;
}
Node *insertAtEnd(Node *head, int data)
{
    Node *ptr = new Node();
    Node *p = head;
    int i = 0;
    while (p->next != NULL)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}
int main()
{
    // Creating the nodes
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    // Assigning data and next pointers
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = nullptr;

    head = insertAtFirst(head, 56);
    head = insertAtIndex(head, 99, 2);
    head= insertAtEnd(head,22);

    cout<<"link list before deletion"<<endl;
    traversal(head);

    // Cleaning up the memory (freeing the nodes)
    // delete head;
    // delete second;
    // delete third;

    return 0;
}
