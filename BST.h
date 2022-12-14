/*
 * Ethan Reece - EDR220000
 * Stephen George - SXG210258
 */

#ifndef BST_H
#define BST_H
#include <algorithm>

#include <ostream>
#include "Node.h"

class BST
{
private:
    Node* root = nullptr;

public:
    BST(int x) {root = new Node(x);}
    ~BST();
    void add(Node*);
    bool search(int x);
    void insert(Node*);
    Node* deleteNode(int);

    int getHeight();
    int getHeight(Node* n);
    friend std::ostream &operator<<(std::ostream &out, BST bst);
};
#endif // BST_H
