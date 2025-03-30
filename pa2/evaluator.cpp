#ifndef EVALUATOR_CPP
#define EVALUATOR_CPP

#include <cstring>
#include <iostream>

#include "string_utils.cpp"

/*
You can use for or while loop to complete TASK 3, but it is highly recommended to use recursion.
*/

double evaluate(const char raw_expression[])
{
  char expression[MAX_LEN];
  trim(raw_expression, expression);

  // Print debug information.
  // Note that this only prints the information in the interactive mode.
  if (DEBUG)
  {
    std::cerr << "DEBUG: evaluating: " << expression << std::endl;
  }

  // Evaluate numbers.
  if (is_number(expression))
    return parse_number(expression);

  char lhs[MAX_LEN];
  char rhs[MAX_LEN];
  int index;

  // Evaluate Binary Operators
  // +, -, * /, power
  if ((index = max(last_index_of(expression, " + "),
                   last_index_of(expression, " - "))) > 0)
  {
    // Addition and subtraction are provided as examples.
    if (index == last_index_of(expression, " + "))
    {
      substring(expression, 0, index, lhs);
      substring(expression, index + 3, strlen(expression), rhs);
      return evaluate(lhs) + evaluate(rhs);
    }

    if (index == last_index_of(expression, " - "))
    {
      substring(expression, 0, index, lhs);
      substring(expression, index + 3, strlen(expression), rhs);
      return evaluate(lhs) - evaluate(rhs);
    }
  }
  // TODO Task 3 BEGIN

  // TODO Task 3 END

  // Only invalid expressions should reach this point
  // because your code should have evaluated all valid expression forms.
  // If this point is reached, it means the expression
  // is invalid OR there is a bug in your code.
  // This is only for debugging purposes, and we won't test the behavior
  // of your code for invalid expressions.
  std::cerr << "Invalid expression: '" << expression << "'" << std::endl;
  return 0.0 / 0.0; // NaN
}

#endif // EVALUATOR_CPP
