int factorial(int n)    /* non-recursive-factorial.cpp */
{
    int result = 1;     // Default value for n = 0 or 1
    if (n < 0)          // Error checking
        return -1;

    for (int j = 2; j <= n; j++) // When n >= 2
            result *= j;
    return result;
}
