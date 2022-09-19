#include "main.h"

/**
 * swap_int - This function swaps the value of two integers
 * @a: takes the value of b
 * @b: takes the value of a
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
