#include "main.h"
/**
 * rev_string - used to reverse a sring
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	char str1;
	int i, len, len1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		str1 = s[i];
		s[i] = s[len1];
		s[len1--] = str1;
	}
}
