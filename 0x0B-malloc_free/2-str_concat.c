#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer string to be merged
 * @s2: pointer string to be concatenated
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *merged;
	int i = 0, m = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[m] != '\0')
		m++;
	merged = malloc(sizeof(char) * (i + m + 1));
		if (merged == NULL)
			return (NULL);
	while (s1[i] != '\0')
	{
		merged[i] = s1[i];
		i++;
	}
	while (s2[m] != '\0')
	{
		merged[i] = s2[m];
		i++;
		m++;
	}
	merged[i] = '\0';
	return (merged);
}
