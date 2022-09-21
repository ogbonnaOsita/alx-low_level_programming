#include "main.h"
/**
 * _strcmp - it compares 2 strings
 * @string1: the first string
 * @string2: the second string
 * Return: 0 if string1 is less than string2
 * 0 if they are equal
 */

int _strcmp(char *string1, char *string2)
{
	while (*string1 == *string2)
	{
		if (*string1 == '\0')
		{
			return (0);
		}
		string1++;
		string2++;
	}
	return (*string1 - *string2);
}
