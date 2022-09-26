#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - it searches a string for any of the bytes
 * @s: the string to search
 * @accept: the string containing the bytes
 * Return: the pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
