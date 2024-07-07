#include <iostream>

// Node class representing a single element in the linked list
class Node {
public:
    int data;       // Data held by the node
    Node* next;     // Pointer to the next node in the list

    // Constructor to initialize a node
    Node(int value) : data(value), next(nullptr) {}
};

// LinkedList class to manage the linked list
class LinkedList {
private:
    Node* head;     // Pointer to the first node in the list

public:
    // Constructor to initialize an empty linked list
    LinkedList() : head(nullptr) {}

    // Destructor to clean up memory
    ~LinkedList();

    // Method to add a node at the end of the list
    void append(int value);

    // Method to display the linked list
    void display() const;
};

// Destructor to clean up memory
LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

// Method to add a node at the end of the list
void LinkedList::append(int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Method to display the linked list
void LinkedList::display() const {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}

int main() {
    // Create a LinkedList object
    LinkedList list;

    // Append nodes to the linked list
    list.append(10);
    list.append(20);
    list.append(30);
    list.append(40);

    // Display the linked list
    list.display();

    return 0;
}
