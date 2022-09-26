#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - it prints the sum of the 2 diagonals
 * @: square matrix of which we print the sum of diagonals
 * @size: the size of the matrix
 */

void print_diagsums(int *a, int size)
{
	itn i;

	unsigned int x, y;

	x = 0;
	y = 0;

	for (i = 0; i < size; i++)
	{
		x += a[(size * i) + i];
		y += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", x, y);
}
