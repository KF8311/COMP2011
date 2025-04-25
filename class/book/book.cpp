#include "book.h"       /* File: book.cpp */
void create_books()
{
    Book y("Love", "HKUST", 88);
    Book* p = new Book [3]; 
    p[0].set("book1", "author1", 1);
    p[1].set("book2", "author2", 2);
    p[2].set("book3", "author3", 3);

    delete [] p; cout << endl;
    return;
}

int main()    /* An app written by an application programmer */
{
    Book x("Sapiens", "Y. N. Harari", 1000);
    Book* z = new Book("Outliers", "Gladwell", 300);
    create_books(); cout << endl;
    delete z; cout << endl;
    return 0;
}
