#ifndef STRING_UTILS_CPP
#define STRING_UTILS_CPP

#include "definitions.cpp"
#include "math_utils.cpp"

/*
You MUST use recursion to complete TASK 2. You are NOT allowed to use any loop.
*/

/**
 * Indicates whether the string 'a' represents the same string value as 'b'.
 * @return true if the values are the same; false otherwise.
 */
bool are_equal_index(const char a[], const char b[], int index)
{
  if (a[index] == '\0' && b[index] == '\0')
    return true;
  else if (a[index] == '\0' || b[index] == '\0')
    return false;
  else if (a[index] != b[index])
    return false;
  return are_equal_index(a, b, index + 1);
}
bool are_equal(const char a[], const char b[])
{
  // TODO Task 2.1 BEGIN
  if (strlen(a) != strlen(b))
    return false;
  return are_equal_index(a, b, 0);

  // TODO Task 2.1 END
}
int index_of_recursive(const char str[], const char pattern[], int index, int word_index)
{
  if (str[index] == '\0')
  {
    return -1;
  }
  else if (str[index] == pattern[word_index])
  {
    if (word_index == static_cast<int>(strlen(pattern) - 1))
    {
      return index - word_index;
    }
    else
    {
      return index_of_recursive(str, pattern, index + 1, word_index + 1);
    }
  }
  else
  {
    return index_of_recursive(str, pattern, index - word_index + 1, 0);
  }
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
  return index_of_recursive(str, pattern, 0, 0);
  // TODO Task 2.2 END
}
int last_index_of_recursive(const char str[], const char pattern[], int index, int word_index)
{ // std::cout<<word_index<<" "<<index<<std::endl;
  if (index < 0)
  {
    return -1;
  }

  else if (str[index] == pattern[word_index])
  {
    if (word_index == 0)
    {
      return index;
    }
    else
    {
      return last_index_of_recursive(str, pattern, index - 1, word_index - 1);
    }
  }
  else
  {
    return last_index_of_recursive(str, pattern, index + (strlen(pattern) - 1 - word_index) - 1, strlen(pattern) - 1);
  }
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
  return last_index_of_recursive(str, pattern, strlen(str) - 1, strlen(pattern) - 1);
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
bool is_number_recursive(const char str[], int index, int dot_count)
{
  if (str[index] == '\0')
  { // the end of string
    if (is_digit(str[index - 1]))
    {
      return true; // 0-9 is fine
    }
    else
    {
      return false; // dot is not fine for last
    }
  }
  else if (is_digit(str[index]))
  {
    return is_number_recursive(str, index + 1, dot_count);
  }
  else if (str[index] == '.')
  {
    if (dot_count >= 1)
      return false;
    return is_number_recursive(str, index + 1, dot_count + 1);
  }
  return false;
}
/**
 * Indicates if the string 'str' represents a number.
 */
bool is_number(const char str[])
{
  // TODO Task 2.4 BEGIN
  if (str[0] == '\0')
    return false;
  else if (str[0] == '0')
  {
    if (str[1] == '\0')
      return true;
    else if (str[1] == '.')
      return is_number_recursive(str, 2, 1);
    return false;
  }
  else if (is_digit(str[0]))
  {
    return is_number_recursive(str, 0, 0);
  }
  return false;
  // TODO Task 2.4 END
}

/**
 * Returns the value of the number represented by the string 'str'.
 */
int find_dot(const char str[], int index)
{
  if (str[index] == '\0')
    return -1;
  else if (str[index] == '.')
    return index;
  else
    return find_dot(str, index + 1);
}
double parse_integer_recursive(const char str[], int index, double sum, const int initial)
{
  if (index == 0)
  {
    return parse_digit(str[index]) * power(10, initial - index) + sum;
  }
  else
  {
    sum += parse_digit(str[index]) * power(10, initial - index);
    return parse_integer_recursive(str, index - 1, sum, initial);
  }
}
double parse_decimal_recursive(const char str[], int index, double sum, const int initial)
{
  if (str[index] == '\0')
  {
    return sum;
  }
  else
  {
    sum += parse_digit(str[index]) / power(10, index - initial);
    // return sum;
    return parse_decimal_recursive(str, index + 1, sum, initial);
  }
}
double parse_number(const char str[])
{
  // TODO Task 2.5 BEGIN
  // power(const double base, const int exponent) can be used
  int dot_index = find_dot(str, 0);
  if (dot_index == -1)
  {
    return parse_integer_recursive(str, strlen(str) - 1, 0, strlen(str) - 1);
  }
  else
  {
    return parse_integer_recursive(str, dot_index - 1, 0, dot_index - 1) + parse_decimal_recursive(str, dot_index + 1, 0, dot_index);
  }

  return 0;
  // TODO Task 2.5 END
}
int find_first_non_space(const char str[], int index)
{
  if (index == static_cast<int>((strlen(str))))
    return -1;
  else if (str[index] != ' ')
    return index;
  return find_first_non_space(str, index + 1);
}
int find_last_non_space(const char str[], int index)
{
  if (index == -1)
    return -1;
  else if (str[index] != ' '&&str[index] != '\0')
    return index;
  return find_last_non_space(str, index - 1);
}
void strcpy_recursive(const char str[], char destination[], int start, int end,int index)
{
  if (start > end)
  {
    return;
  }
  else
  {
    destination[index] = str[start];
    strcpy_recursive( str, destination,start+1, end, index+1);
  }
}
/**
 * Remove all leading and trailing whitespaces from the string 'str', and store
 * the result in 'destination'.
 */
void clear_string(char destination[], int index)
{
  if (destination[index] == '\0')
  {
    return;
  }
  else
  {
    destination[index] = '\0';
    clear_string(destination, index + 1);
  }
}
void trim(const char str[], char destination[])

{
  // TODO Task 2.6 BEGIN
  clear_string(destination, 0);
  int first_non_space = find_first_non_space(str, 0);
  int last_non_space = find_last_non_space(str, strlen(str) - 1);
  if (first_non_space == -1)
  {
    destination[0] = '\0';
  }
  else
  {
    strcpy_recursive(str, destination, first_non_space, last_non_space,0);
  }
  destination[last_non_space-first_non_space+1]='\0';
  return;
  // TODO Task 2.6 END
}

#endif // STRING_UTILS_CPP
