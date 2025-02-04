int factorial(int n)    /* factorial2.cpp */
{
    if (n < 0)          // Error checking
        return -1;
    if (n == 0)         // Base case; ending case too!
        return 1;
    return n * factorial(n-1); // Recursive case
}
