#ifndef BST_H
#define BST_H
#include "Node.h"
#include <algorithm>

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
};
#endif // BST_H
