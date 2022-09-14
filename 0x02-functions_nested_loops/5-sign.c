#include "main.h"
/**
 * print_sign - prints the sign of a number
 * #number: the integer to check
 * Return 1 for number > 0, 0 for number equals to 0, and -1 for number less than 0
 */

int print_sign(int number)
{
	if (number > 0)
	{
		_putchar('+');
		return(1);
	}else if (number == 0)
	{
		_putchar(48);
		return (0);
	}else if (number < 0)
	{
		_putchar('-');
	}
	return (-1);
}
