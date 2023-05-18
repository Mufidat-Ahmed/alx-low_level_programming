#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string to be merged
 * @s2: string to be merged
 * @n: number of bytes from s2 to be merged with s1
 * Return: m
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int i = 0, l = 0, cat1 = 0, cat2 = 0;

	while (s1 && s1[cat1])
		cat1++;
	while (s2 && s2[cat2])
		cat2++;
	if (n < cat2)
		m = malloc(sizeof(char) * (cat1 + n + 1));
	else
		m = malloc(sizeof(char) * (cat1 + cat2 + 1));
	if (!m)
		return (NULL);
	while (i < cat1)
	{
		m[i] = s1[i];
		i++;
	}
	while (n < cat2 && i < (cat1 + n))
		m[i++] = s2[l++];
	while (n >= cat2 && i < (cat1 + cat2))
		m[i++] = s2[l++];
	m[i] = '\0';
	return (m);
}
