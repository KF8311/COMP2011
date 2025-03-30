#ifndef PARENTHESIZER_CPP
#define PARENTHESIZER_CPP

#include <cstring>

#include "string_utils.cpp"

/*
You can use for or while loop to complete TASK 4, but it is highly recommended to use recursion.
*/

void parenthesize(const char raw_expression[], char destination[])
{
  char expression[MAX_LEN];
  trim(raw_expression, expression);

  // TODO Task 4 BEGIN

  // TODO Task 4 END

  // Only invalid expressions should reach this point
  // because your code should have parenthesized and returned all valid expression forms.
  // If this point is reached, it means the expression
  // is invalid OR there is a bug in your code.
  // This is only for debugging purposes, and we won't test the behavior
  // of your code for invalid expressions.
  std::cerr << "Invalid expression: '" << expression << "'" << std::endl;
}

#endif // PARENTHESIZER_CPP
