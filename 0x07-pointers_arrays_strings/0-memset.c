#include "main.h"
/**
 * _memset - it fills the memory with a const byte
 * @s: the memory area to fill
 * @a: the character to copy
 * @b: the number of times to copy the char
 *
 * Return: it returns the pointer to the memory
 */

char *_memeset(char *s, char a, unsigned int b)
{
	unsigned int i;

	for (i = 0; i < b; i++)
	{
		s[i] = a;
	}
	return (s);
}

