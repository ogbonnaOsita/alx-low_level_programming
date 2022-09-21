#include "main.h"

/**
 * string_toupper - it changes all lowercase letters of a string
 * @s: the string to modify
 * Return: it returns the resulting string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}
