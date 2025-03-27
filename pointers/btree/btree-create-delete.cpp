#include "btree.h"      /* File: btree-create-delete.cpp */

btree_node* create_btree_node(int data) 
{
    btree_node* node = new btree_node;
    node->data = data;
    node->left = node->right = nullptr;
    return node;
}

void delete_btree(btree_node*& root) // By recursion
{
    if (root == nullptr) return;     // Base case

    delete_btree(root->left);        // Recursion on the left subtree
    delete_btree(root->right);       // Recursion on the right subtree
    delete root;
    root = nullptr;
}
