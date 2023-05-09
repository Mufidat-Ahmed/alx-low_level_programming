#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: char pointer to be scanned for the substring needle
 * @needle: char pointer to be located
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
	}
	return (0);
}
