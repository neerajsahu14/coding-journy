#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class SinglyLinkedList {
private:
    Node* head;
public:
    SinglyLinkedList() : head(nullptr) {}

    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    bool update(int oldVal, int newVal) {
        Node* temp = head;
        while (temp) {
            if (temp->data == oldVal) {
                temp->data = newVal;
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    bool remove(int val) {
        if (!head) return false;
        if (head->data == val) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            return true;
        }
        Node* temp = head;
        while (temp->next && temp->next->data != val)
            temp = temp->next;
        if (temp->next) {
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
            return true;
        }
        return false;
    }

    Node* returnNode(){
        return head;
    }

    ~SinglyLinkedList() {
        Node* temp;
        while (head) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    SinglyLinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    cout << "List: ";
    list.display();
    Node* head = list.returnNode();

    list.update(20, 25);
    cout << "After update: ";
    list.display();

    list.remove(10);
    cout << "After delete: ";
    list.display();


    return 0;
}