#include "ll_cnode.h"   /* File: ll_test.cpp */
int main() 
{
    ll_cnode* ll_string = ll_create("met");
    cout << "length of ll_string = " << ll_length(ll_string) << endl;
    ll_print(ll_string);
    ll_print(ll_search(ll_string, 'e'));

    cout << endl << "After inserting 'a'" << endl;
    ll_insert(ll_string, 'a', 2); ll_print(ll_string);
    cout << endl << "After deleting 'e'" << endl;
    ll_delete(ll_string, 'e'); ll_print(ll_string);
    cout << endl << "After deleting 'm'" << endl;
    ll_delete(ll_string, 'm'); ll_print(ll_string);

    cout << endl << "After inserting 'e'" << endl;
    ll_insert(ll_string, 'e', 9); ll_print(ll_string);
    cout << endl << "After deleting 't'" << endl;
    ll_delete(ll_string, 't'); ll_print(ll_string);
    cout << endl << "After deleting 'e'" << endl;
    ll_delete(ll_string, 'e'); ll_print(ll_string);
    cout << endl << "After deleting 'a'" << endl;
    ll_delete(ll_string, 'a'); ll_print(ll_string);

    cout << endl << "After deleting 'z'" << endl;
    ll_delete(ll_string, 'z'); ll_print(ll_string);
    cout << endl << "After inserting 'h'" << endl;
    ll_insert(ll_string, 'h', 9); ll_print(ll_string);
    cout << endl << "After inserting 'o'" << endl;
    ll_insert(ll_string, 'o', 0); ll_print(ll_string);

    ll_delete_all(ll_string);
    return 0;
}
