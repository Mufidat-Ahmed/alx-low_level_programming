#include "main.h"

/**
 * _strstr - finds the first occurance of needle in haystack
 * @haystack: Pointer string to be found in needle
 * @needle: pointer string to be searched
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *i = haystack;
		char *m = needle;

		while (*i == *m && *m != '\0')
		{
			i++;
			m++;
		}
		if (*m == '\0')
			return (haystack);
	}
	return (0);
}
