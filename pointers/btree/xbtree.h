#include <iostream>     /* File: btree.h */
using namespace std;

struct btree_node       // A node in a binary tree
{
    int data;
    btree_node* left;   // Left sub-tree or called left child
    btree_node* right;  // Right sub-tree or called right child
};
