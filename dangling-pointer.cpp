
int* create_and_init(int value) /* File: dangling-pointer.cpp */
{
    int x = value;      // x is a local variable
    int* p = &x;        // p is also a local variable
    return p;
}

int main() 
{
    int* ip = create_and_init(10);
    cout << *ip << endl;
    return 0;
}
