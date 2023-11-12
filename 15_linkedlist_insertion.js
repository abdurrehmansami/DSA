// Node class representing a single node in the linked list
class Node {
    constructor(data) {
      this.data = data;
      this.next = null;
    }
  }
  
  // Function to traverse and display the elements of the linked list
  function traversal(head) {
    let current = head;
    while (current !== null) {
      console.log(current.data);
      current = current.next;
    }
  }
  
  // Function to insert a node at the beginning of the linked list
  function insertAtFirst(head, data) {
    const newNode = new Node(data);
    newNode.next = head;
    return newNode;
  }
  
  // Function to insert a node at a specific index in the linked list
  function insertAtIndex(head, data, index) {
    const newNode = new Node(data);
    if (index === 0) {
      newNode.next = head;
      return newNode;
    }
    let current = head;
    let i = 0;
    while (current !== null && i < index - 1) {
      current = current.next;
      i++;
    }
    if (current === null) {
      return head; // Index out of bounds
    }
    newNode.next = current.next;
    current.next = newNode;
    return head;
  }
  
  // Function to insert a node at the end of the linked list
  function insertAtEnd(head, data) {
    const newNode = new Node(data);
    if (head === null) {
      return newNode;
    }
    let current = head;
    while (current.next !== null) {
      current = current.next;
    }
    current.next = newNode;
    return head;
  }
  
  // Creating the nodes
  let head = new Node(10);
  let second = new Node(20);
  let third = new Node(30);
  
  // Connecting the nodes
  head.next = second;
  second.next = third;
  
  // Inserting nodes
  head = insertAtFirst(head, 56);
  head = insertAtIndex(head, 99, 2);
  head = insertAtEnd(head, 22);
  
  console.log("Linked list before deletion:");
  traversal(head);
  