#include "main.h"
#include <stdlib.h>

int count(char *s);
/**
 * strtow - splitsa strimgs into words
 * @str: string to be splitted
 * Return: null
 */

char **strtow(char *str)
{
	char **split, *tow;
	int i, k = 0, m = 0, string, j = 0, start, end;

	while (*(str + m))
		m++;
	string = count(str);
	if (string == 0)
		return (NULL);

	split = (char **) malloc(sizeof(char *) * (string + 1));
	if (split == NULL)
		return (NULL);

	for (i = 0; i <= m; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j)
			{
				end = i;
				tow = (char *) malloc(sizeof(char) * (j + 1));
				if (tow == NULL)
					return (NULL);
				while (start < end)
					*tow++ = str[start++];
				*tow = '\0';
				split[k] = tow - j;
				k++;
				j = 0;
			}
		}
		else if (j++ == 0)
			start = i;
	}
	split[k] = NULL;
	return (split);
}
/**
 * count - counts the number of words
 * @s: string to be counted
 * Return: counted word
 */
int count(char *s)
{
	int words = 0, c, z = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			words = 0;
		else if (words == 0)
		{
			words = 1;
			z++;
		}
	}
	return (z);
}
