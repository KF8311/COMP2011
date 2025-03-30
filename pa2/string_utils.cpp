#ifndef STRING_UTILS_CPP
#define STRING_UTILS_CPP

#include "definitions.cpp"
#include "math_utils.cpp"

/*
You MUST use recursion to complete TASK 2. You are NOT allowed to use any for or while loop.
*/

/**
 * Indicates whether the string 'a' represents the same string value as 'b'.
 * @return true if the values are the same; false otherwise.
 */
bool are_equal(const char a[], const char b[])
{
  // TODO Task 2.1 BEGIN

  // TODO Task 2.1 END
}

/**
 * Returns the index of the *first* character of the *first* pattern occurrence in the string.
 *
 * E.g. str = "This is the pattern 1 and pattern 2", pattern = "pattern"
 * index_of should return 12 (... pattern 1 and pattern 2)
 *                                ^
 */
int index_of(const char str[], const char pattern[])
{
  // TODO Task 2.2 BEGIN

  // TODO Task 2.2 END
}

/**
 * Returns the index of the *first* character of the *last* pattern occurrence in the string.
 *
 * E.g. str = "This is the pattern 1 and pattern 2", pattern = "pattern"
 * index_of should return 26 (... pattern 1 and pattern 2)   ==> different from index_of
 *                                              ^
 */
int last_index_of(const char str[], const char pattern[])
{
  // TODO Task 2.3 BEGIN

  // TODO Task 2.3 END
}

/**
 * Indicates if the character 'c' is a digit.
 *
 * If 'c' is one of the characters '0', '1', ..., '9', then it is a digit; and
 * this function returns true; otherwise, it returns false.
 */
bool is_digit(const char c) { return c >= '0' && c <= '9'; }

/**
 * Returns the integer value of the digit character 'c'.
 *
 * If 'c' is one of the characters '0', '1', ..., '9', then it returns the
 * corresponding integer value of the digit, i.e., 0, 1, ..., 9.
 */
int parse_digit(const char c) { return c - '0'; }

/**
 * Indicates if the string 'str' represents a number.
 */
bool is_number(const char str[])
{
  // TODO Task 2.4 BEGIN

  // TODO Task 2.4 END
}

/**
 * Returns the value of the number represented by the string 'str'.
 */
double parse_number(const char str[])
{
  // TODO Task 2.5 BEGIN

  // TODO Task 2.5 END
}

/**
 * Remove all leading and trailing whitespaces from the string 'str', and store
 * the result in 'destination'.
 */
void trim(const char str[], char destination[])
{
  // TODO Task 2.6 BEGIN

  // TODO Task 2.6 END
}

#endif // STRING_UTILS_CPP
