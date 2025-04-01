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
  // std::cerr << "DEBUG: evaluating: " << expression << std::endl;

  // Evaluate numbers.
  if (is_number(expression))
    return parse_number(expression); // base case

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
  if ((index = max(last_index_of(expression, " * "),
                   last_index_of(expression, " / "))) > 0)
  {
    // Addition and subtraction are provided as examples.
    if (index == last_index_of(expression, " * "))
    {
      substring(expression, 0, index, lhs);
      substring(expression, index + 3, strlen(expression), rhs);
      return evaluate(lhs) * evaluate(rhs);
    }

    if (index == last_index_of(expression, " / "))
    {
      substring(expression, 0, index, lhs);
      substring(expression, index + 3, strlen(expression), rhs);
      if (evaluate(rhs) == 0)
      {
        if (evaluate(lhs) == 0){
          return 0.0 / 0.0; // NaN
        }
        return evaluate(lhs) / 0.0;
      }
      else
        return evaluate(lhs) / evaluate(rhs);
    }
  }
  if ((index = index_of(expression, " ^ ")) > 0)
  {
    substring(expression, 0, index, lhs);
    substring(expression, index + 3, strlen(expression), rhs);
    return power(evaluate(lhs), evaluate(rhs));
  }
  // std::cerr << index_of(expression, "abs") << index_of(expression, "sqrt")<<index_of(expression, "-");
  if (index_of(expression, "sqrt") != -1 || index_of(expression, "abs") != -1 || index_of(expression, "-") != -1)
  {
    // substring(expression, 0, index, lhs);
    if (index_of(expression, "sqrt") == 0)
    {
      index = index_of(expression, "sqrt");
      substring(expression, index + 4, strlen(expression), rhs);
      return square_root(evaluate(rhs));
    }
    else if (index_of(expression, "abs") == 0)
    {
      index = index_of(expression, "abs");
      substring(expression, index + 3, strlen(expression), rhs);
      return absolute(evaluate(rhs));
    }
    else if (index_of(expression, "-") == 0)
    {
      index = index_of(expression, "-");
      substring(expression, index + 1, strlen(expression), rhs);
      return -1 * evaluate(rhs);
    }
  }
  if (index_of(expression, "!") != -1)
  {
    index = index_of(expression, "!");
    //std::cerr << index;
    substring(expression, 0, index, lhs);
    return factorial(evaluate(lhs));
  }
  if (expression[0] == 'e')
  {
    return E;
  }
  if (expression[0] == 'p' && expression[1] == 'i')
  {
    return PI;
  }

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
