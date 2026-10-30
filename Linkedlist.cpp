#include <iostream>

using namespace std;

// Define the structure for a Linked List node
struct Node {
    int data;
    Node* next;

    // Constructor to initialize a node
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Insert a new node at the end of the list
    void insert(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Display the elements of the linked list
    void display() {
        if (head == nullptr) {
            cout << "The list is empty." << endl;
            return;
        }
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;

    // Inserting elements
    list.insert(10);
    list.insert(20);
    list.insert(30);

    // Displaying the list
    cout << "Linked List: ";
    list.display();

    return 0;
}
