#ifndef MATH_UTILS_CPP
#define MATH_UTILS_CPP

#include "definitions.cpp"

/*
You MUST use recursion to complete TASK 1. You are NOT allowed to use any for or while loop.
*/

/**
 * Returns the absolute value of x.
 */
double absolute(const double x)
{
  // TODO Task 1.1 BEGIN
  if (x < 0)
    return -x;
  else
    return x;

  // TODO Task 1.1 END
}

/**
 * Indicates if a result from an iterative algorithm is accurate enough.
 * We define "accurate enough" as the difference between the previous and
 * current results to be less than 0.001.
 */
bool is_accurate_enough(const double previous, const double current)
{
  return absolute(previous - current) < 0.001;
}
double newton_recursive(const double x, double guess)
{
  double next_guess = (guess + x / guess) / 2;
  if (is_accurate_enough(guess, next_guess))
    return next_guess;
  else
    return newton_recursive(x, next_guess);
}
/**
 * Returns the square root of x.
 */
double square_root(const double x)
{
  // TODO Task 1.2 BEGIN
  return newton_recursive(x, 1); // x_0 is set to be 1
  // TODO Task 1.2 END
}

/**
 * Returns the value of base raised to the exponent power.
 */
double power(const double base, const int exponent)
{
  // TODO Task 1.3 BEGIN
  if (exponent == 0) // base case
    return 1;
  return base * power(base, exponent - 1);

  // TODO Task 1.3 END
}

/**
 * Returns the factorial of n.
 */
double factorial(const int n)
{
  // TODO Task 1.4 BEGIN
  if (n == 0 || n == 1)
    return 1; // base case, 0! and 1! = 1
  return n * factorial(n - 1);

  // TODO Task 1.4 END
}

#endif // MATH_UTILS_CPP
