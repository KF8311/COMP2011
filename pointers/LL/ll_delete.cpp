#include "ll_cnode.h"   /* File: ll_delete.cpp */
// To delete the character c from the linked list.
// Do nothing if the character cannot be found.
void ll_delete(ll_cnode*& head, char c)
{
    ll_cnode* prev = nullptr; // Point to previous ll_cnode
    ll_cnode* current = head; // Point to current ll_cnode
    
    // STEP 1: Find the item to be deleted
    while (current != nullptr && current->data != c) 
    {
        prev = current;      // Advance both pointers
        current = current->next;
    }
    
    if (current != nullptr)  // Data is found
    {   // STEP 2: Bypass the found item
        if (current == head) // Special case: delete the first item
            head = head->next;
        else
            prev->next = current->next;

        delete current;      // STEP 3: Free up the memory of the deleted item
    }
}
