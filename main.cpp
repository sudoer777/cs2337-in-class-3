#include <iostream>
#include <stdlib.h>
#include "Node.h"
#include "BST.h"
using namespace std;

int main() {
    BST bst(-1);
    int nums[] = {10,5,100,-4,2,1,7,9, 67};

    for(auto num : nums) {
        auto node = new Node(num);
        bst.add(node);
    }

    cout << bst.getHeight() << std::endl;

    cout << bst;

    return 0;
}
