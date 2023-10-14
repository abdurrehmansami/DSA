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
// CASE 1: DELETING FIRST NODE
Node *deleteFirst(Node *head)
{
    Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
// CASE 2: DELETING NODE AT A GIVE INDEX
Node *deleteAtIndex(Node *head, int index)
{
    Node *p = head;
    Node *q = head->next;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        q = q->next;
        i++;
    }

    p->next = q->next;
    free(q);
}
// CASE 3: DELETING THE LAST NODE
Node *deleteAtLast(Node *head)
{
    Node *p = head;
    Node *q = head->next;
    int i = 0;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
        i++;
    }
    // cout<<q->next;
    p->next = NULL;
    free(q);
    return head;
}

// CASE 4: DELETING NODE WITH A GIVEN VALUE
Node *deleteAtIndex(Node *head, int value)
{
    Node *p = head;
    Node *q = head->next;
    int i = 0;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
        i++;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
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

    cout << "link list before deletion\n"
         << endl;
    traversal(head);

    // head = deleteFirst(head);
    // head = deleteAtIndex(head,2);
    head = deleteAtLast(head);
    cout << "\nlink list after deletion" << endl;
    traversal(head);

    // Cleaning up the memory (freeing the nodes)
    // delete head;
    // delete second;
    // delete third;

    return 0;
}
