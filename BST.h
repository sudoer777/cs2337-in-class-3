#ifndef BST_H
#define BST_H
#include "node.h"


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
};
#endif // BST_H
