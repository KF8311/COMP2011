#include "ll_cnode.h"   /* File: ll_insert.cpp */

// To insert character c to the linked list so that after insertion,
// c is the n-th character (counted from zero) in the list.
// If n > current length, append to the end of the list.

void ll_insert(ll_cnode*& head, char c, unsigned n)
{
    // STEP 1: Create the new ll_cnode   
    ll_cnode* new_cnode = ll_create(c);

    // Special case: insert at the beginning
    if (n == 0 || head == nullptr)
    {
        new_cnode->next = head;
        head = new_cnode;
        return;
    }

        
    // STEP 2: Find the node after which the new node is to be added
    ll_cnode* p = head; 
    for (int position = 0; 
         position < n-1  &&  p->next != nullptr; 
         p = p->next, ++position)
         ;

    // STEP 3,4: Insert the new node between
    //           the found node and the next node
    new_cnode->next = p->next; // STEP 3
    p->next = new_cnode;       // STEP 4
}
