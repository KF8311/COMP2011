#include "ll_cnode.h"   /* File: ll_main.cpp */

int main()  // Create the LL-string "met"
{   // Create each of the 3 ll_cnodes
    ll_cnode* mp = new ll_cnode; mp->data = 'm';
    ll_cnode* ep = new ll_cnode; ep->data = 'e';
    ll_cnode* tp = new ll_cnode; tp->data = 't';

    // Hook them up in the required order to create the LL
    mp->next = ep;
    ep->next = tp;
    tp->next = nullptr;
    
    // Traverse the LL and print out the data sequentially
    for (ll_cnode* p = mp; p; p = p->next)
        cout << p->data;
    cout << endl;

    // Clean up
    delete mp; delete ep; delete tp; return 0;
}
