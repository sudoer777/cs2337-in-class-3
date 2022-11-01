#include <iostream>
#include <stdlib.h>
#include "Node.h"
#include "BST.h"
using namespace std;

int main() {
    BST bst(-1);
    Node** n = new Node*[10];
    //-1,-4,10,-5,5,100,2,7,1,9
    int nums[] = {10,5,100,-4,2,1,7,9};

    for(int i = 0; i < 10; i++){
        n[i] = new Node(nums[i]);
    }

    for(int i = 0; i < 10; i++){
        bst.add(n[i]);
    }



    cout << bst.getHeight() << std::endl;

    cout << bst;

    return 0;
}
