#include "main.h"
#include <stdio.h>

/**
 * *_strstr - it locates a substring
 * @haystack: the string to search 
 * @needle: the substring to look for
 *
 * Return: the pointer to the  beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
	
}_
