#include "main.h"

/**
 * _puts - used to print a string to stdout
 * @str: points to the string to print
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n);
}
