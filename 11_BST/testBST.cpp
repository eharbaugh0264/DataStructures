#include "BTNode.hpp"
#include "BST.hpp"
#include <iostream>

int main(void)
{
    BST<int> tree;

    tree.insert(10);
    tree.insert(4);
    tree.insert(7);
    tree.insert(9);
    tree.insert(0);
    tree.insert(2);

    //BTNode<int>* root = new BTNode<int>(23);

    //  TODO test isFullTree
    //  TODO search_parent
    //  returns the address of the parent

    
    BTNode<int>* node = tree.search(2);

    if (node) {
        std::cout << "found" << std::endl;
    }
    else
    {
        std::cout << "Not found" << std::endl;
    }

    return 0;
}