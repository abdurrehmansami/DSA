#include <iostream>

// Node structure representing a single node in the linked list
struct Node
{
    int data;
    Node *next;
};

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
    // head ek pointer hai struct node * type ka
    // saray nodes kimemory dynamically heap me allocate hui
    // Traversing and displaying the elements of the linked list
    Node *current = head;
    while (current != nullptr)
    {
        std::cout << '\n'
                  << current->data << " "; // Display the data in the current node
        current = current->next;           // Move to the next node
    }
    std::cout << std::endl;

    // Cleaning up the memory (freeing the nodes)
    // delete head;
    // delete second;
    // delete third;

    return 0;
}

// CURRENT DEFINED
// current is a pointer of type Node*, which means it can store the memory address of a Node structure.

// Initially, current is assigned the memory address of the head node, which is the first node of the linked list.

// The while loop is used to traverse the linked list. As long as current is pointing to a valid node (i.e., not nullptr), the loop continues.

// Inside the loop, we use current->data to access the data member of the current node and display it using std::cout.

// After displaying the data of the current node, we update the current pointer to point to the next node in the sequence using current = current->next.

// The loop continues this process until current becomes nullptr, which indicates that we have reached the end of the linked list.

// In summary, current is used as a traversal pointer to traverse the linked list from the head node to the last node, displaying the data of each node in the process.
// USING CLASS

// #include <iostream>

// class Node {
// public:
//     int data;
//     Node* next;

//     // Constructor to initialize data and next pointer
//     Node(int value) {
//         data = value;
//         next = nullptr;
//     }
// };

// int main() {
//     // Creating three nodes: head, second, and third
//     Node* head = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);

//     // Linking the nodes to form the linked list
//     head->next = second;
//     second->next = third;

//     // Traversing and displaying the elements of the linked list
//     Node* current = head;
//     while (current != nullptr) {
//         std::cout << current->data << " "; // Display the data in the current node
//         current = current->next; // Move to the next node
//     }
//     std::cout << std::endl;

//     // Cleaning up the memory (freeing the nodes)
//     delete head;
//     delete second;
//     delete third;

//     return 0;
// }
