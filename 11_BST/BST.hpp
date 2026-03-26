#ifndef BST_HPP
#define BST_HPP

#include "BTNode.hpp"


template <typename T>
class BST
{

    public:
    BST();
    bool empty() const;

    void insert(const T& val);

    //  Traversal of the tree
    void inorder() const;
    void preorder() const;
    void postorder() const;

    bool isFullTree() const;

    BTNode<T>* search(const T& val) const;



    private:
    BTNode<T>* root;
    void inorder(BTNode<T>* node) const;
    bool isFullTree(BTNode<T>* node) const;

};


#endif