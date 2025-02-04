#include <iostream>     /* File: enum-shapes.cpp */
using namespace std;

int main()
{
    enum shapes { TEXT, LINE, RECT, CIRCLE };
    cout << "supported shapes: " 
         << " TEXT = " << TEXT << " LINE = " << LINE 
         << " RECT = " << RECT << " CIRCLE = " << CIRCLE << endl;
    int myshape; // Why the type of myshape is not shape?
    cin >> myshape;
        
    switch (myshape)
    {
        case TEXT:
            cout << "Call a function to print text" << endl; break;
        case LINE: 
            cout << "Call a function to draw a line" << endl; break;
        case RECT: 
            cout << "Call a function to draw a rectangle" << endl; break;
        case CIRCLE: 
            cout << "Call a function to draw a circle" << endl; break;
        default:
            cerr << "Error: Unsupported shape" << endl; break;
    }
    
    return 0;
}
