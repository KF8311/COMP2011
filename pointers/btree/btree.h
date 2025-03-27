#include <iostream>     /* File: btree.h */
using namespace std;

struct btree_node       // A node in a binary tree
{
    int data;
    btree_node* left;   // Left sub-tree or called left child
    btree_node* right;  // Right sub-tree or called right child
};


// Function declarations
btree_node* create_btree_node(int data);
void delete_btree(btree_node*& tree) ;
void print_btree(const btree_node* tree, int depth = 0);
