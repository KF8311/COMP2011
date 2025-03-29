#include <cstddef>
#include <iomanip>
#include <iostream>

#include "ascii_art.h"
#include "img_2d_array.h"

using namespace std;

/**
 * @brief Number to represent a garbage value for a 2D array size.
 */
const int GARBAGE_2D_ARRAY_SIZE = 2011;

/**
 * @brief Read a 2D array and copy it.
 *
 * This tests Task 1.
 */
void main_copy_2d_array()
{
  cout << "Input a 2D array:\n";
  double src[MAX_2D_ARRAY_CAPACITY][MAX_2D_ARRAY_CAPACITY];
  int src_height, src_width;
  read_2d_array(src, src_height, src_width);

  cout << "Copying the 2D array...\n";
  double dest[MAX_2D_ARRAY_CAPACITY][MAX_2D_ARRAY_CAPACITY];
  int dest_height = GARBAGE_2D_ARRAY_SIZE, dest_width = GARBAGE_2D_ARRAY_SIZE;
  copy_2d_array(dest, dest_height, dest_width, src, src_height, src_width);

  if (dest_height == GARBAGE_2D_ARRAY_SIZE || dest_width == GARBAGE_2D_ARRAY_SIZE)
  {
    cout << "Bad resulting 2D array size\n";
  }

  cout << (src_height == dest_height ? "Heights are the same\n" : "Heights are NOT the same\n")
       << (src_width == dest_width ? "Widths are the same\n" : "Widths are NOT the same\n");

  if (src_height != dest_height || src_width != dest_width)
  {
    cout << "Arrays are NOT the same\n";
    return;
  }

  bool same_array = true;
  int data_size = src_height * src_width;

  for (int idx = 0; idx < data_size; ++idx)
  {
    int quot = idx / src_width;
    int rem = idx % src_width;
    if (src[quot][rem] != dest[quot][rem])
    {
      same_array = false;
      break;
    }
  }

  cout << (same_array ? "Arrays are the same\n" : "Arrays are NOT the same\n");
}

/**
 * @brief Read a 2D array and print it.
 *
 * This tests Task 2.
 */
void main_print_2d_array()
{
  cout << "Input a 2D array:\n";
  double array[MAX_2D_ARRAY_CAPACITY][MAX_2D_ARRAY_CAPACITY];
  int height, width;
  read_2d_array(array, height, width);

  cout << "Formatted 2D array:\n";
  print_2d_array(array, height, width);
}

/**
 * @brief Read two sizes of two 2D arrays in the same dimension and broadcast them.
 *
 * This tests Task 2.
 */
void main_broadcast_size()
{
  int left_size = 0;

  do
  {
    cout << "Left size in a dimension: ";
    cin >> left_size;

    if (!cin)
    {
      cin.clear();
      cin.ignore(10000, '\n');
      cout << "Invalid input!\n";
      continue;
    }
    break;
  } while (true);

  int right_size = 0;
  do
  {
    cout << "Right size in the same dimension: ";
    cin >> right_size;

    if (!cin)
    {
      cin.clear();
      cin.ignore(10000, '\n');
      cout << "Invalid input!\n";
      continue;
    }
    break;
  } while (true);

  int size = broadcast_size(left_size, right_size);
  cout << "Broadcasted 2D array size in the same dimension: " << size << '\n'
       << (size == INVALID_2D_ARRAY_SIZE ? "The two sizes in the same dimension are NOT broadcastable\n" : "The two sizes in the same dimension are broadcastable\n");
}

/**
 * @brief Read two sizes of two 2D arrays and broadcast them.
 *
 * This tests Task 3.
 */
void main_broadcast_2d_size()
{
  int left_height = 0;
  do
  {
    cout << "Left height: ";
    cin >> left_height;

    if (!cin)
    {
      cin.clear();
      cin.ignore(10000, '\n');
      cout << "Invalid input!\n";
      continue;
    }
    break;
  } while (true);

  int left_width = 0;
  do
  {
    cout << "Left width: ";
    cin >> left_width;

    if (!cin)
    {
      cin.clear();
      cin.ignore(10000, '\n');
      cout << "Invalid input!\n";
      continue;
    }
    break;
  } while (true);

  int right_height = 0;
  do
  {
    cout << "Right height: ";
    cin >> right_height;

    if (!cin)
    {
      cin.clear();
      cin.ignore(10000, '\n');
      cout << "Invalid input!\n";
      continue;
    }
    break;
  } while (true);

  int right_width = 0;
  do
  {
    cout << "Right width: ";
    cin >> right_width;

    if (!cin)
    {
      cin.clear();
      cin.ignore(10000, '\n');
      cout << "Invalid input!\n";
      continue;
    }
    break;
  } while (true);

  int dest_height = GARBAGE_2D_ARRAY_SIZE, dest_width = GARBAGE_2D_ARRAY_SIZE;

  bool broadcastable = broadcast_2d_size(dest_height, dest_width, left_height, left_width, right_height, right_width);

  if (dest_height == GARBAGE_2D_ARRAY_SIZE || dest_width == GARBAGE_2D_ARRAY_SIZE)
  {
    cout << "Bad resulting 2D array size\n";
    broadcastable = false;
  }

  cout << "Broadcasted 2D array size: (" << dest_height << ", " << dest_width << ")\n"
       << (broadcastable ? "The two 2D arrays are broadcastable\n" : "The two 2D arrays are NOT broadcastable\n");
}

/**
 * @brief Read two 2D arrays and perform a specified arithmetic operation on them element-wise.
 * Optionally, it can also print out ASCII arts of the 2D arrays.
 *
 * This tests Task 4.
 */
void main_oper_2d_array()
{
  char op_raw = 0;
  ops_2d_array op = ADD;

  do
  {
    cout << "Input the arithmetic operation as one character (+-*/): ";
    cin >> op_raw;

    switch (op_raw)
    {
    case '+':
      op = ADD;
      break;
    case '-':
      op = SUBTRACT;
      break;
    case '*':
      op = MULTIPLY;
      break;
    case '/':
      op = DIVIDE;
      break;
    default:
      cin.clear();
      cin.ignore(10000, '\n');
      cout << "Invalid input!\n";
      continue;
    }
    break;
  } while (true);

  cout << "Input the left 2D array:\n";
  double left[MAX_2D_ARRAY_CAPACITY][MAX_2D_ARRAY_CAPACITY];
  int left_height, left_width;
  read_2d_array(left, left_height, left_width);

  cout << "Input the right 2D array:\n";
  double right[MAX_2D_ARRAY_CAPACITY][MAX_2D_ARRAY_CAPACITY];
  int right_height, right_width;
  read_2d_array(right, right_height, right_width);

  cout << "Calculating...\n";
  double dest[MAX_2D_ARRAY_CAPACITY][MAX_2D_ARRAY_CAPACITY];
  int dest_height = GARBAGE_2D_ARRAY_SIZE , dest_width = GARBAGE_2D_ARRAY_SIZE;
  bool broadcastable = oper_2d_array(op, dest, dest_height, dest_width, left, left_height, left_width, right, right_height, right_width);

  cout << "Resulting 2D array:\n";
  if (dest_height == GARBAGE_2D_ARRAY_SIZE || dest_width == GARBAGE_2D_ARRAY_SIZE)
  {
    cout << "Bad resulting 2D array size\n";
    broadcastable = false;
  }
  if (!broadcastable)
  {
    cout << "The two 2D arrays are NOT broadcastable\n";
    return;
  }
  // print_2d_array(cout, dest, dest_height, dest_width);
  print_2d_array(dest, dest_height, dest_width);

  char view_as_ascii_art=0;
  do
  {
    cout << "Do you want to view the 2D arrays as ASCII arts? (n: no/y: 0-1/z: 0-255): ";
    cin >> view_as_ascii_art;

    switch (view_as_ascii_art)
    {
    case 'n':
    case 'N':
      view_as_ascii_art = 'n';
      break;
    case 'y':
    case 'Y':
      view_as_ascii_art = 'y';
      break;
    case 'z':
    case 'Z':
      view_as_ascii_art = 'z';
      break;
    default:
      cin.clear();
      cin.ignore(10000, '\n');
      cout << "Invalid input!\n";
      continue;
    }
    break;
  } while (true);

  if (view_as_ascii_art == 'n')
  {
    return;
  }

  double multiplier = (view_as_ascii_art == 'z') ? (1. / 255.) : 1;
  cout << "Left 2D array:\n";
  print_2d_array_ascii_art(multiplier, left, left_height, left_width);
  cout << "Right 2D array:\n";
  print_2d_array_ascii_art(multiplier, right, right_height, right_width);
  cout << "Resulting 2D array:\n";
  print_2d_array_ascii_art(multiplier, dest, dest_height, dest_width);
}

/**
 * @brief Main program.
 *
 * @return int Always 0 for grading purposes.
 */
int main()
{
  cout << fixed << showpoint << setprecision(6); // Always show 6 decimal places.

  int option=0;
  do
  {
    cout << "Welcome to 2D array calculator! Choose an option from below:\n"
                 "1. Copy a 2D array\n"
                 "2. Print a 2D array\n"
                 "3. Broadcast two sizes in the same dimension\n"
                 "4. Broadcast two 2D arrays and get the resulting 2D array size\n"
                 "5. Perform arithmetic operations on two 2D arrays (and view them as ASCII arts)\n"
                 "Your option: ";
    cin >> option;
    if (!cin || option < 1 || option > 5)
    {
      cin.clear();
      cin.ignore(10000, '\n');
      cout << "Invalid input!\n";
      continue;
    }
    break;
  } while (true);

  switch (option)
  {
  case 1:
    main_copy_2d_array();
    break;
  case 2:
    main_print_2d_array();
    break;
  case 3:
    main_broadcast_size();
    break;
  case 4:
    main_broadcast_2d_size();
    break;
  case 5:
    main_oper_2d_array();
    break;
  default:
    cout << "Unexpected code\n";
  }

  return 0;
}
