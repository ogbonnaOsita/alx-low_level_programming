#include "main.h"

/**
 * _strncpy - it copies a string
 * @dest: the string destination
 * @src: the string source
 * @n: the number of bytes to copy
 * Return: the pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
