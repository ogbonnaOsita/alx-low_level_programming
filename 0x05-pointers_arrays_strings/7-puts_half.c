#include "main.h"
/**
 * puts_half - to print the half of a string
 * @str: the string to print
 */

void puts_half(char *str)
{
	int str1, n, i;

	str1 = 0;

	while (str[str1] != '\0')
	{
		str1++;
	}

	if (str1 % 2 == 0)
	{
		for (i = str1 / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (str1 % 2)
	{
		for (n = (str1 - 1) / 2; n < str1 - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
