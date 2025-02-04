#include <iostream>	/* File: draw-tree.cpp */
using namespace std;	

int max(int a, int b) { return (a > b) ? a : b; }

void print_one_row(int num_leading_spaces, int num_symbols, char symbol)
{
    for (int j = 0; j < num_leading_spaces; ++j)
        cout << ' ';
    
    for (int j = 0; j < num_symbols; ++j)
        cout << symbol;

    cout << endl;
}

void print_leaves(int tree_height, char leaf_symbol)
{
    for (int row = 0, num_leading_spaces = tree_height;
         row < tree_height; 
         ++row, --num_leading_spaces)
        print_one_row(num_leading_spaces, 2*row+1, leaf_symbol);
}
    
void print_trunk(int tree_width, int trunk_height, int trunk_width, char trunk_symbol)
{
    int num_leading_spaces = (tree_width - trunk_width)/2;

    for (int row = 0; row < trunk_height; ++row)
        print_one_row(num_leading_spaces, trunk_width, trunk_symbol);
}

void print_pot(int tree_width, int pot_height, int pot_base_width, char pot_symbol)
{
    int num_leading_spaces = (tree_width - pot_base_width)/2;
    int row = pot_height, width = pot_base_width;
    while (row > 0)
    {
        print_one_row(num_leading_spaces, width, pot_symbol);
        --row; 
        ++num_leading_spaces;
        width -= 2;
    }
}

/* The leaves have 2n+1 symbols on the n-th row. 
 * The trunk is just a rectangle: width = height = 2/3 of tree's height. 
 * pot's height = 1/3 of tree's. pot's width = 2/3 of tree's. 
 *
 ************ The exact formulas are not important! ************
 */
void print_tree(int tree_height, char leaf_symbol, char trunk_symbol, char pot_symbol)
{
    int tree_width = 2*tree_height + 1;
    int trunk_width = max(1, tree_width/6); 
    int trunk_height = max(1, tree_height/3);
    int pot_width = tree_width * 2/3;
    int pot_base_width = (pot_width % 2) ? pot_width : pot_width + 1;
    int pot_height = max(2, tree_height/3);

    print_leaves(tree_height, leaf_symbol);
    print_trunk(tree_width, trunk_height, trunk_width, trunk_symbol);
    print_pot(tree_width, pot_height, pot_base_width, pot_symbol);
}
    
int main()	
{
    char leaf_symbol, trunk_symbol, pot_symbol;
    int tree_height;
    
    cout << "Enter the character symbols for tree, trunk, and pot: "; 
    cin >> leaf_symbol >> trunk_symbol >> pot_symbol;
    cout << "Enter height of the tree (an odd integer, please): "; 
    cin >> tree_height;
    
    cout << endl << endl << endl; 
    print_tree(tree_height, leaf_symbol, trunk_symbol, pot_symbol);
    return 0;
}
