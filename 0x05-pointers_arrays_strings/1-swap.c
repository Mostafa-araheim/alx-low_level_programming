#include <stdio.h>

/**
 * swap_int - takes 2 Integers and swaps
 * their values
 * @a : first integer to be swapped
 * @b : second integer to be swapped
 * Return  - nothing
 */
void swap_int(int *a, int *b)
/*this function swaps 2 integers*/
{
*a = *a ^ *b;
*b = *b ^ *a;
*a = *a ^ *b;
}
