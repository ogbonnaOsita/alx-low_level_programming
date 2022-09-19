#include "main.h"
/**
 * swap_int - used to swap values ot 2 integers
 * @a: pointer for the 1st value
 * @b: pointer for the second value
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
