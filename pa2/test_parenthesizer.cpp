#include <iostream>

#include "parenthesizer.cpp"

using std::cout;
using std::endl;

void test_parenthesize(const char expression[], const char expected[])
{
  char parenthesized[MAX_LEN];
  parenthesize(expression, parenthesized);
  cout << "parenthesize(\"" << expression << "\") = " << parenthesized << endl;
  if (strcmp(parenthesized, expected) == 0)
  {
    cout << "  => OK" << endl;
  }
  else
  {
    cout << "  => FAIL; expected: " << expected << endl;
  }
}

int main()
{
  test_parenthesize("7 * 8", "(7 * 8)");
  test_parenthesize("19 * 89 / 64 / 114514 ", "(((19 * 89) / 64) / 114514)");
  test_parenthesize("1 * 2 * 3 * 4", "(((1 * 2) * 3) * 4)");
  test_parenthesize("7 / 8", "(7 / 8)");
  test_parenthesize("9 / 8 / 7", "((9 / 8) / 7)");
  test_parenthesize("2 * 3 / 4", "((2 * 3) / 4)");
  test_parenthesize("  114514  ", "114514");
  test_parenthesize("  13!  ", "(13!)");
  test_parenthesize(" 2 ^ 2", "(2 ^ 2)");
  test_parenthesize("  13  !  ", "(13!)");
  test_parenthesize("abs 1","(abs 1)");
  test_parenthesize("abs abs abs abs abs 34","(abs (abs (abs (abs (abs 34)))))");
  test_parenthesize("sqrt sqrt 934","(sqrt (sqrt 934))");
  test_parenthesize(" 1 ^ 2 ^ 3 ^ 4 ","(1 ^ (2 ^ (3 ^ 4)))");
  test_parenthesize("abs abs 1","(abs (abs 1))");
  test_parenthesize("sqrt abs sqrt abs 1","(sqrt (abs (sqrt (abs 1))))");
  //test_parenthesize("4 - 3","(4 - 3)");
  test_parenthesize("sqrt 3","(sqrt 3)");
  test_parenthesize("abs 3","(abs 3)");
  test_parenthesize("abs 3!","(abs (3!))");
  // addition & multiplication
  test_parenthesize("2 + 3 * 4", "(2 + (3 * 4))");

  // power (right associative)
  test_parenthesize("2 ^ 3 ^ 2", "(2 ^ (3 ^ 2))");

  // unary & constants
  test_parenthesize("e + sqrt pi", "(e + (sqrt pi))");

test_parenthesize("-sqrt 3 - 4", "((-(sqrt 3)) - 4)");
test_parenthesize("4 + -1 - 6", "((4 + (-1)) - 6)");
test_parenthesize("sqrt abs -49", "(sqrt (abs (-49)))");
test_parenthesize("sqrt abs 49", "(sqrt (abs 49))");
test_parenthesize("-sqrt abs -49", "(-(sqrt (abs (-49))))");
test_parenthesize("1 + 1", "(1 + 1)");
test_parenthesize("1 + 2 * 3 + 4", "((1 + (2 * 3)) + 4)");
test_parenthesize("abs 3", "(abs 3)");
test_parenthesize("-3 + 14", "((-3) + 14)");
test_parenthesize("1 + abs 3 * -4 / 7 - sqrt 8!", "((1 + (((abs 3) * (-4)) / 7)) - (sqrt (8!)))");
test_parenthesize("19 * 89 / 64 / 114514 ", "(((19 * 89) / 64) / 114514)");
test_parenthesize("e + sqrt pi", "(e + (sqrt pi))");


test_parenthesize("-abs 3", "(-(abs 3))");




test_parenthesize("-sqrt abs -49", "(-(sqrt (abs (-49))))");
test_parenthesize("-sqrt 49", "(-(sqrt 49))");
test_parenthesize("-2 + 3", "((-2) + 3)");
test_parenthesize("1 + 2 * 3 ^ 4 - sqrt abs -49 + e", "(((1 + (2 * (3 ^ 4))) - (sqrt (abs (-49)))) + e)");
test_parenthesize("10! / 4 * 3 ^ 2", "(((10!) / 4) * (3 ^ 2))");
test_parenthesize("6!", "(6!)");
test_parenthesize("42.3 * 4 / 6! + sqrt e * -pi ^ 3 + 2.83", "((((42.3 * 4) / (6!)) + ((sqrt e) * ((-pi) ^ 3))) + 2.83)");
test_parenthesize("3! + sqrt 16 * abs -5 / 2 ^ 3 - 10", "(((3!) + (((sqrt 16) * (abs (-5))) / (2 ^ 3))) - 10)");
test_parenthesize("sqrt 36 + abs -42 / 2! ^ 2 - 10 + 4 ^ 2!", "((((sqrt 36) + ((abs (-42)) / ((2!) ^ 2))) - 10) + (4 ^ (2!)))");
test_parenthesize("3! * 4 ^ 2 / 8 - abs -5 + sqrt 9 - 10 ^ 2 / 5", "((((((3!) * (4 ^ 2)) / 8) - (abs (-5))) + (sqrt 9)) - ((10 ^ 2) / 5))");
test_parenthesize("-2 ^ 4! + abs -7 * sqrt 49 / 5 - 3! + 5", "(((((-2) ^ (4!)) + (((abs (-7)) * (sqrt 49)) / 5)) - (3!)) + 5)");
test_parenthesize("1 !", "(1!)");

  // You should add more test cases.
}
