#ifndef ASCII_ART_HPP
#define ASCII_ART_HPP

#include "img_2d_array.h"

/**
 * @brief Print a 2D array as ASCII art.
 *
 * @param os Output stream to print to.
 * @param multiplier Multiplier to scale the values of the 2D array before printing.
 * @param src 2D array to print.
 * @param src_height Height of the 2D array to print.
 * @param src_width Width of the 2D array to print.
 */
void print_2d_array_ascii_art(double multiplier, const double src[MAX_2D_ARRAY_CAPACITY][MAX_2D_ARRAY_CAPACITY], int src_height, int src_width);

#endif // ASCII_ART_HPP
