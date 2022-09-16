#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @c: number of times to print the character _
 */

void print_line(int c)
{
	if (c <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= c; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

