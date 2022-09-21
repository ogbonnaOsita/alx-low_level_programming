#include "main.h"

/**
 * reverse_array - it reverses an array of integers
 * @a: the array to be reversed
 * @n: the number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i, j, t;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[j];
		a[j--] = t;
	}
}
