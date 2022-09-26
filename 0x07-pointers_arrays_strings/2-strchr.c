#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: the string to search for
 * @c: the char to find
 *
 * Return: the pointer to the first occurence of the char
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
