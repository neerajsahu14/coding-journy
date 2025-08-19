#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Node {
public:
    shared_ptr<Node> next;
    weak_ptr<Node> prev; // Using weak_ptr to break circular reference

    int value;

    Node(int val) : value(val) {
        cout << "Node " << value << " Constructor\n";
    }
    ~Node() {
        cout << "Node " << value << " Destructor\n";
    }
};

int main() {
    shared_ptr<Node> node1 = make_shared<Node>(1);
    shared_ptr<Node> node2 = make_shared<Node>(2);

    node1->next = node2; // node1 now points to node2
    node2->prev = node1; // node2 now has a weak reference to node1

    cout << "Node1 use count: " << node1.use_count() << "\n"; // Output: 1 (only node1 owns Node 1)
    cout << "Node2 use count: " << node2.use_count() << "\n"; // Output: 1 (only node2 owns Node 2)

    // Try to access node1 via node2's weak_ptr
    if (shared_ptr<Node> temp_node1 = node2->prev.lock()) {
        cout << "Accessed Node 1 from Node 2 (value: " << temp_node1->value << ")\n";
    } else {
        cout << "Node 1 no longer exists.\n";
    }

    // Let's create a circular reference with shared_ptr (BAD!)
    // If we used shared_ptr for 'prev', neither node would be destroyed.
    // shared_ptr<Node> nodeA = make_shared<Node>(10);
    // shared_ptr<Node> nodeB = make_shared<Node>(20);
    // nodeA->next = nodeB;
    // nodeB->next = nodeA; // This creates a cycle! nodeA and nodeB will never be destroyed

    // The objects will be destroyed correctly because of weak_ptr
    // When main ends, node1 and node2 go out of scope.
    // Their use counts drop to 0, and their destructors are called.

    return 0;
}