#include <iostream>
#include "Node.h"
#include "BST.h"
using namespace std;

int main() {
    BST bst(5);

    Node* n1 = new Node(6);
    bst.add(n1);

    Node* n2 = new Node(7);
    bst.add(n2);

    Node* n4 = new Node(3);
    bst.add(n4);

    Node* n5 = new Node(9);
    bst.add(n5);

    cout << bst.getHeight();

    return 0;
}
