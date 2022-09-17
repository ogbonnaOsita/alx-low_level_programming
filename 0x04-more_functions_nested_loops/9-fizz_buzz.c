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
			_puchar(' ');
			_puchar('F');
			_puchar('i');
			_puchar('z');
			_puchar('z');
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			_puchar(' ');
			_puchar('B');
			_puchar('u');
			_puchar('z');
			_puchar('z');
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			_puchar(' ');
			_puchar('F');
			_puchar('i');
			_puchar('z');
			_puchar('z');
			_puchar('B');
			_puchar('u');
			_puchar('z');
			_puchar('z');
			
		} else
		{
			_puchar(i);
			
		}
	}
	printf("\n");
	return (0);
}
