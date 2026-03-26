#include "BST.hpp"


template <typename T>
BST<T>::BST()
{
    root = nullptr;
}


template <typename T>
bool BST<T>::empty() const
{
    return root == nullptr;
}

template <typename T>
void BST<T>::insert(const T& val)
{
    if (empty())
    {
        root = new BTNode<T>(val);
        return;
    }

    //  iterative approach
    BTNode<T>* cur = root;
    BTNode<T>* cur = prev;

    while (cur)
    {
        prev = cur;
        if (cur->data > val)
        {
            cur = cur->left;
        }
        else
        {
            cur = cur->right;
        }
    }
    if (prev->data > value)
    {
        prev->left = new BTNode<T>(val);
    }
    else
    {
        prev->right = new BTNode<T>(val);
    }


}

template <typename T>
void BST<T>::inorder() const
{
    std::cout << "Inorder: [ ";
    inorder(root);
    std:: cout << " ]\n";
}

template <typename T>
void BST<T>::inorder(BTNode<T>* node) const
{
    if (!node)
    {
        return;
    }
    inorder(node->left);
    std::cout << node->data << ' ';
    inorder(node->right);
    //  In main, insert into bst then print using inorder TODO

}

template <typename T>
bool BST<T>::isFullTree() const
{
    return isFUllTree(root);
}


template <typename T>
bool BST<T>::isFullTree(BTNode<T>* node) const
{
    if (!node)
    {
        return true;
    }
    if (node->hasOneChild())
    {
        return false;
    }
    return isFullTree(node->left) && isFullTree(node->right);
    
}

template <typename T>
BTNode<T>* BST<T>::search(const T& val) const
{
    BTNode<T>* cur = root;

    while (cur)
    {
        if (cur->data == val) // found the value
        {
            return cur;
        }
        else if (cur->data > val) //  the value is less thanc current
        {
            cur = cur->left;
        }
        else
        {
            cur = cur->right;
        }
    }
    return nullptr;


}
