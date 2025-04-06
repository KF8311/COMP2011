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
  // void substring(const char source[], const int from, const int to, char destination[])
  // index_of(const char str[], const char pattern[])
  // last_index_of(const char str[], const char pattern[])
  /*
  ! (factorial) has the highest precedence;
  - (negation) has the second-highest precedence;
  sqrt, abs have the third-highest precedence;
  ^ (power) has the fourth-highest precedence;
  * (multiplication) and / (division) have the fifth-highest precedence;
  + (addition) and - (subtraction) have the lowest precedence.
  */
  // TODO Task 4 BEGIN

  // int operator_index;
  // std::cerr << "Invalid expression: '" << raw_expression << "'" << std::endl;
  // std::cerr << "Invalid expression: '" << expression << "'" << std::endl;

  if (last_index_of(expression, "+") != -1 || (last_index_of(expression, "- ") != -1))
  {
    char before_operator[MAX_LEN];
    char after_operator[MAX_LEN];
    char parenthesized_before[MAX_LEN];
    char parenthesized_after[MAX_LEN];
    int operator_index;
    char op[MAX_LEN];
    if ((last_index_of(expression, "+") == -1) && (last_index_of(expression, "- ") == -1))
    {
      return;
    }
    if (last_index_of(expression, "+") == -1)
    {
      operator_index = last_index_of(expression, "- ");
      strcpy(op, "-");
    }
    else if (last_index_of(expression, "- ") == -1)
    {
      operator_index = last_index_of(expression, "+");
      strcpy(op, "+");
    }
    else
    {
      if (last_index_of(expression, "+") > last_index_of(expression, "- "))
      {
        operator_index = last_index_of(expression, "+");
        strcpy(op, "+");
      }
      else
      {
        operator_index = last_index_of(expression, "- ");
        strcpy(op, "-");
      }
    }

    substring(expression, 0, operator_index, before_operator);
    substring(expression, operator_index + 1, strlen(expression), after_operator);

    parenthesize(before_operator, parenthesized_before);
    parenthesize(after_operator, parenthesized_after);

    strcpy(destination, "(");
    strcat(destination, parenthesized_before);
    strcat(destination, " ");
    strcat(destination, op);
    strcat(destination, " ");

    strcat(destination, parenthesized_after);
    strcat(destination, ")");
    return;
  }
  else if (last_index_of(expression, "*") != -1 || last_index_of(expression, "/") != -1)
  {
    char before_operator[MAX_LEN];
    char after_operator[MAX_LEN];
    char parenthesized_before[MAX_LEN];
    char parenthesized_after[MAX_LEN];
    int operator_index;
    char op[MAX_LEN];
    if ((last_index_of(expression, "*") == -1) && (last_index_of(expression, "/") == -1))
    {
      return;
    }
    if (last_index_of(expression, "/") == -1)
    {
      operator_index = last_index_of(expression, "*");
      strcpy(op, "*");
    }
    else if (last_index_of(expression, "*") == -1)
    {
      operator_index = last_index_of(expression, "/");
      strcpy(op, "/");
    }
    else
    {
      if (last_index_of(expression, "/") > last_index_of(expression, "*"))
      {
        operator_index = last_index_of(expression, "/");
        strcpy(op, "/");
      }
      else
      {
        operator_index = last_index_of(expression, "*");
        strcpy(op, "*");
      }
    }

    substring(expression, 0, operator_index, before_operator);
    substring(expression, operator_index + 2, strlen(expression), after_operator);
    parenthesize(before_operator, parenthesized_before);
    parenthesize(after_operator, parenthesized_after);

    strcpy(destination, "(");
    if (strlen(parenthesized_before) != 0)
      strcat(destination, parenthesized_before);
    strcat(destination, " ");
    strcat(destination, op);
    strcat(destination, " ");
    if (strlen(parenthesized_after) != 0)
      strcat(destination, parenthesized_after);
    strcat(destination, ")");
    return;
  }

  else if (index_of(expression, "^") != -1)
  {
    char before_operator[MAX_LEN];
    char after_operator[MAX_LEN];
    char parenthesized_before[MAX_LEN];
    char parenthesized_after[MAX_LEN];
    int operator_index = index_of(expression, "^");
    substring(expression, 0, operator_index, before_operator);
    substring(expression, operator_index + 1, strlen(expression), after_operator);
    parenthesize(before_operator, parenthesized_before);
    parenthesize(after_operator, parenthesized_after);
    strcpy(destination, "(");
    strcat(destination, parenthesized_before);
    strcat(destination, " ^ ");
    strcat(destination, parenthesized_after);
    strcat(destination, ")");
    return;
  }
  /*else if (index_of(expression, "-") != -1)
  {
    char before_operator[MAX_LEN];
    char after_operator[MAX_LEN];
    char parenthesized_before[MAX_LEN];
    char parenthesized_after[MAX_LEN];
    int operator_index;

    operator_index = index_of(expression, "-");
    substring(expression, 0, operator_index, before_operator);
    substring(expression, operator_index + 1, strlen(expression), after_operator);
    parenthesize(before_operator, parenthesized_before);
    parenthesize(after_operator, parenthesized_after);
    strcpy(destination, "");
    strcat(destination, parenthesized_before);
    strcat(destination, "(-");
    strcat(destination, parenthesized_after);
    strcat(destination, ")");
    return;
  }*/
  else if (index_of(expression, "sqrt") != -1 || index_of(expression, "abs") != -1 || index_of(expression, "-") != -1)
  {
    char before_operator[MAX_LEN];
    char after_operator[MAX_LEN];
    char parenthesized_before[MAX_LEN];
    char parenthesized_after[MAX_LEN];
    int operator_index;
    char op[MAX_LEN];
    if (index_of(expression, "sqrt") == -1 && (index_of(expression, "abs") == -1) && (index_of(expression, "-") == -1))
      return;
    else if (index_of(expression, "sqrt") == 0)
    {
      operator_index = index_of(expression, "sqrt");
      strcpy(op, "sqrt");
    }
    else if (index_of(expression, "abs") == 0)
    {
      operator_index = index_of(expression, "abs");
      strcpy(op, "abs");
    }
    else if (index_of(expression, "-") == 0)
    {
      operator_index = index_of(expression, "-");
      strcpy(op, "-");
    }

    substring(expression, 0, operator_index, before_operator);
    substring(expression, operator_index + strlen(op), strlen(expression), after_operator);
    parenthesize(before_operator, parenthesized_before);
    parenthesize(after_operator, parenthesized_after);

    strcpy(destination, "(");
    strcat(destination, parenthesized_before);
    strcat(destination, op);
    if (strlen(op) != 1)
    {
      strcat(destination, " ");
    }
    strcat(destination, parenthesized_after);
    strcat(destination, ")");

    return;
  }

  else if (index_of(expression, "!") != -1)
  {
    char before_operator[MAX_LEN];
    char after_operator[MAX_LEN];
    char parenthesized_before[MAX_LEN];
    char parenthesized_after[MAX_LEN];
    int operator_index = index_of(expression, "!");
    substring(expression, 0, operator_index, before_operator);
    substring(expression, operator_index + 1, strlen(expression), after_operator);
    parenthesize(before_operator, parenthesized_before);
    strcpy(destination, "(");
    strcat(destination, parenthesized_before);
    strcat(destination, "!)");
    if (strlen(after_operator) > 0)
    {
      parenthesize(after_operator, parenthesized_after);
      strcat(destination, " ");
      strcat(destination, parenthesized_after);
    }
    return;
  }

  else
  {
    strcpy(destination, expression);
    return;
  }
  // TODO Task 4 END

  // Only invalid expressions should reach this point
  // because your code should have parenthesized and returned all valid expression forms.
  // If this point is reached, it means the expression
  // is invalid OR there is a bug in your code.
  // This is only for debugging purposes, and we won't test the behavior
  // of your code for invalid expressions.
  // std::cerr << "Invalid expression: '" << expression << "'" << std::endl;
}

#endif // PARENTHESIZER_CPP
