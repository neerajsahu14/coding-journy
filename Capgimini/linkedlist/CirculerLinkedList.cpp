#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class CircularLinkedList {
private:
    Node* last;

public:
    CircularLinkedList() : last(nullptr) {}

    // Create: Insert at end
    void insert(int data) {
        Node* temp = new Node{data, nullptr};
        if (!last) {
            temp->next = temp;
            last = temp;
        } else {
            temp->next = last->next;
            last->next = temp;
            last = temp;
        }
    }

    // Read: Display all nodes
    void display() {
        if (!last) {
            cout << "List is empty.\n";
            return;
        }
        Node* p = last->next;
        do {
            cout << p->data << " ";
            p = p->next;
        } while (p != last->next);
        cout << endl;
    }

    // Update: Update first occurrence of oldData to newData
    bool update(int oldData, int newData) {
        if (!last) return false;
        Node* p = last->next;
        do {
            if (p->data == oldData) {
                p->data = newData;
                return true;
            }
            p = p->next;
        } while (p != last->next);
        return false;
    }

    // Delete: Delete first occurrence of data
    bool remove(int data) {
        if (!last) return false;
        Node* curr = last->next;
        Node* prev = last;
        do {
            if (curr->data == data) {
                if (curr == last && curr == last->next) {
                    delete curr;
                    last = nullptr;
                } else {
                    prev->next = curr->next;
                    if (curr == last) last = prev;
                    delete curr;
                }
                return true;
            }
            prev = curr;
            curr = curr->next;
        } while (curr != last->next);
        return false;
    }

    ~CircularLinkedList() {
        if (!last) return;
        Node* curr = last->next;
        Node* nextNode;
        while (curr != last) {
            nextNode = curr->next;
            delete curr;
            curr = nextNode;
        }
        delete last;
    }
};

// Example usage
int main() {
    CircularLinkedList cll;
    cll.insert(10);
    cll.insert(20);
    cll.insert(30);
    cll.display(); // 10 20 30

    cll.update(20, 25);
    cll.display(); // 10 25 30

    cll.remove(10);
    cll.display(); // 25 30

    cll.remove(25);
    cll.remove(30);
    cll.display(); // List is empty.

    return 0;
}