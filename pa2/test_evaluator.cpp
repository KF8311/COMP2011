#include <iomanip>
#include <iostream>
#include <cmath>

#include "evaluator.cpp"

using std::abs;
using std::cout;
using std::endl;

bool close_to(const double x, const double y)
{
  const double epsilon = 0.01;
  return abs(x - y) < epsilon; // The STL abs is used instead of your own absolute function
}

void test_evaluate(const char expression[], const double expected)
{
  const double result = evaluate(expression);
  cout << "evaluate(\"" << expression << "\") = " << result << endl;
  if (close_to(result, expected))
  {
    cout << "  => OK" << endl;
  }
  else
  {
    cout << "  => FAIL (expected: " << expected << ")" << endl;
  }
}

int main()
{
  cout << std::fixed << std::setprecision(2) << std::boolalpha;
  test_evaluate("-89", -89);
  test_evaluate("10!", 3628800.00);
  test_evaluate("4!", 24);
  // addition & multiplication
  test_evaluate("2 + 3 * 4", 14);
  test_evaluate("1 - 4 * 7 + 6 / 5", -25.80);
  test_evaluate("-1 * 5", -5);

  // power (right associative)
  test_evaluate("2 ^ 3 ^ 2", 512);
  test_evaluate(" sqrt 49", 7);
  test_evaluate(" sqrt 49", 7);
  test_evaluate("sqrt abs -78", 8.83);

  // unary & constants
  test_evaluate("e + sqrt pi", 4.49);
  test_evaluate("sqrt 8!", 200.8);

  // You should add more test cases.
  test_evaluate("-sqrt abs -49", -7);
  test_evaluate("-sqrt 49", -7);
  test_evaluate("-2 + 3", 1);
  test_evaluate("1 + 2 * 3 ^ 4 - sqrt abs -49 + e", 158.72);
  test_evaluate("10! / 4 * 3 ^ 2", 8164800);
  test_evaluate("6!", 720);
  test_evaluate("42.3 * 4 / 6! + sqrt e * -pi ^ 3 + 2.83", -48.06);
  test_evaluate("1 + 2 * 3 ^ 4 - sqrt abs -49 + e", 158.72);
  test_evaluate("42.3 * 4 / 6! + sqrt e * -pi ^ 3 + 2.83", -48.06);
  test_evaluate("10! / 4 * 3 ^ 2 + sqrt 81 - abs -5", 8164804);
  test_evaluate("3 + 5 * 2 - 8 / 4", 11); // Mixed precedence
  test_evaluate("10 - 2 ^ 3 + 4 * 2", 10); // Power and multiplication
  test_evaluate("2 ^ 3 ^ 2", 512); // Right associative power
  test_evaluate("5! + 3 * 2 - sqrt 16", 122); // Factorial and square root
  test_evaluate("10! / 5! + 2 ^ 3", 30248); // Factorial and power

  // Unary operators with functions
  test_evaluate("-sqrt abs -49", -7); // Negative square root
  test_evaluate("-abs -5 + 10", 5); // Absolute value with unary minus
  test_evaluate("-2 ^ 3", -8); // Negative power
  test_evaluate("sqrt 4 + abs -3", 5); // Square root and absolute value

  test_evaluate("pi * 2", 6.28); // Multiplying pi
  test_evaluate("e ^ 2", 7.39); // Exponentiation with e
  test_evaluate("sqrt pi + e", 4.49); // Square root of pi plus e
  test_evaluate("abs -pi + sqrt 16", 7.14); // Absolute value of pi

  // Edge cases
  test_evaluate("0", 0);
  test_evaluate("-0", 0);
  test_evaluate("-abs -sqrt 49", -7);
  test_evaluate("0 / 0", 0.0 / 0.0);
  test_evaluate("1 / 0", 1.0 / 0.0);
}
