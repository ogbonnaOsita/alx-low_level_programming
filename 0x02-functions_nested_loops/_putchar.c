#include <unistd.h>
/**
 * main - the program writes the char a
 * Return: Always 1 (Success)
 */

int _putchar(char a)
{
	return (write(1, &a, 1));
}
