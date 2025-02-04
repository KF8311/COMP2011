int num_factors(int n, int m) /* File: factor.cpp */
{
    if (n % m != 0)     // Base case
        return 0;
    else
        return 1 + num_factors(n/m, m);
}
