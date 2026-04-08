#include <iostream>

struct Node {
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
    Node *head, *tail;
public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void remove(int val) {
        Node* temp = head;
        while (temp && temp->data != val) temp = temp->next;
        if (!temp) return;
        if (temp->prev) temp->prev->next = temp->next;
        else head = temp->next;
        if (temp->next) temp->next->prev = temp->prev;
        else tail = temp->prev;
        delete temp;
    }

    void display() {
        Node* temp = head;
        while (temp) {
            std::cout << temp->data << " <-> ";
            temp = temp->next;
        }
        std::cout << "NULL" << std::endl;
    }

    void displayReverse() {
        Node* temp = tail;
        while (temp) {
            std::cout << temp->data << " <-> ";
            temp = temp->prev;
        }
        std::cout << "NULL" << std::endl;
    }
};

int main() {
    DoublyLinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.display();
    list.displayReverse();
    list.remove(20);
    list.display();
    return 0;
}