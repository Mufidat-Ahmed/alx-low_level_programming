#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: char pointer to be scanned for the substring needle
 * @needle: char pointer to be located
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		haystack++;
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
			return (haystack);
	}
	return (0);
}
