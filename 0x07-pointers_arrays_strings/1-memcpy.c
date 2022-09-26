#include "main.h"
/**
 * *_memcpy - it copies a memory area
 * @dest: the destination memory area
 * @src: the source area to copy from
 * @n: the number of bytes to copy
 *
 * Return: returns the pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned  int n)
{
	unsigned int i;

	for (i = 0;  i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
