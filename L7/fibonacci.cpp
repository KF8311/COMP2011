int fibonacci(int n)    /* File: fibonacci.cpp */
{
    if (n == 0)         // Base case #1
        return 0;

    if (n == 1)         // Base case #2
        return 1;

    return fibonacci(n-1) + fibonacci(n-2);
}
