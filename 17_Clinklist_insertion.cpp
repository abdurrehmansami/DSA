#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void linkedListTraversal(Node *head)
{
    Node *ptr = head;
    do
    {
        cout << "Element is " << ptr->data << endl;
        ptr = ptr->next;
    } while (ptr != head);
}

Node *insertAtFirst(Node *head, int data)
// head se start krke last tk gye aur phir kaha last ka next new aur new ka next previus first krdo aur new ko head bnado
{
    Node *newNode = new Node();
    newNode->data = data;

    Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = newNode;
    newNode->next = head;
    head = newNode;
    return head;
}
Node *insertAtLast(Node *head, int data)
// head se start krke last tk gye aur phir kaha last ka next new aur new ka next previus first krdo
{
    Node *newNode = new Node();
    newNode->data = data;

    Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = newNode;
    newNode->next = head;
    return head;
}

int main()
{
    Node *head = nullptr;
    Node *second = nullptr;
    Node *third = nullptr;
    Node *fourth = nullptr;

    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();

    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = head;

    // Insert an element at the beginning of the circular linked list
    head = insertAtFirst(head, 9);
    // Traversal
    cout << "Circular linked list after inserting @ beginning:" << endl;
    linkedListTraversal(head);

    head = insertAtLast(head, 7);
    cout << "Circular linked list after inserting @ last:" << endl;
    linkedListTraversal(head);
    return 0;
}
