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
// p me head dal kr last tk jatay phir p(last)->nextcko new krte aur new->next ko head aurr new ko head declare krdete
{
    Node *newNode = new Node();
    newNode->data = data;

    Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    // p now represents the last one
    p->next = newNode;
    newNode->next = head;
    head = newNode;
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

    cout << "Circular Linked list before insertion:" << endl;
    linkedListTraversal(head);

    head = insertAtFirst(head, 54);
    head = insertAtFirst(head, 58);
    head = insertAtFirst(head, 59);

    cout << "Circular Linked list after insertion:" << endl;
    linkedListTraversal(head);

    return 0;
}
