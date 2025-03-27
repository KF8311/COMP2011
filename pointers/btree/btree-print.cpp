#include "btree.h"      /* File: btree-print.cpp */

void print_btree(const btree_node* root, int depth) 
{
    if (root == nullptr)   // Base case
        return;

    print_btree(root->right, depth+1);// Recursion: right subtree

    for (int j = 0; j < depth; j++)   // Print the node data
        cout << '\t';
    cout << root->data << endl;

    print_btree(root->left, depth+1); // Recursion: left subtree
}
