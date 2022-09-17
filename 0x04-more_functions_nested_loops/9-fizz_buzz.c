#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers form 1 to 100
 * prints multiples of three as Fizz
 * prints multiples of five as Buzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			_putchar(' ');
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			_putchar(' ');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar(' ');
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
			
		} else
		{
			_puchar(i);
			
		}
	}
	_putchar('\n');
	return (0);
}
