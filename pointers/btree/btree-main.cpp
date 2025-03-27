#include "btree.h"      /* File: btree-main.cpp */

int main()
{   
    btree_node* root = create_btree_node(10); // Create root node

    root->left = create_btree_node(8);   // Create the left sub-tree
    root->left->left = create_btree_node(5);
    root->left->right = create_btree_node(9);

    root->right = create_btree_node(15); // Create the right sub-tree
    root->right->left = create_btree_node(12);
    root->right->right = create_btree_node(17);

    print_btree(root);  // Print the resulting tree

    delete_btree(root->left);            // Delete the left sub-tree
    cout << "\n\n\n"; print_btree(root); // Print the resulting tree
    return 0;
}
