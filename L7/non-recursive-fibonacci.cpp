int fibonacci(int n) 	/* non-recursive-fibonacci.cpp */
{
    int fn;             // keep track of f(n)
    int fn_1 = 1;       // keep track of f(n-1)
    int fn_2 = 0;       // keep track of f(n-2)

    if (n == 0) return 0; // Base case #1
    if (n == 1) return 1; // Base case #2

    for (int j = 2; j <= n; j++)
    {
        fn = fn_1 + fn_2; // f(n) = f(n-1) + f(n-2)
        
        // Prepare for the calculation of the next fibonacci number
        fn_2 = fn_1;    // f(n-2) = f(n-1)
        fn_1 = fn;      // f(n-1) = f(n)
    }
    
    return fn;
}
