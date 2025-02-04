double power(double x, int n) /* File: power.cpp */
{
    if (x == 0.0) 	// Special case
	return 0.0;

    if (n == 0) 	// Base case
	return 1;

    if (n < 0)
	return 1.0/power(x, -n);
    else
    	return x * power(x, n-1);
}
