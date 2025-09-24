#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int data) {
        val = data;
        next = NULL;
    }
};

int main() {
    Node* n = new Node(10);  // Single node

    Node* temp = n;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;

    delete n; // Free memory
    return 0;
}
