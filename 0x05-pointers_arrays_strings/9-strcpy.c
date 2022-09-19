#include "main.h"
/**
 * *_strcpy - to copy the string pointed to by src
 * @dest: points to the buffer
 * Return: the value pointed to
 */

char *_strcpy(char *dest, char *src)
{
	int str, i;

	str = 0;

	while (src[str] != '\0')
	{
		str++;
	}

	for (i = 0; i < str; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
