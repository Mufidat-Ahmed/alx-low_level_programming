#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: integer variable
 * @av: char double pointer variable
 * Return: concatenated string
 */

char *argstostr(int ac, char **av)
{
	char *cat;
	int i, m, j = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (m = 0; av[i][m]; m++)
			k++;
	}
	k += ac;
	cat = malloc(sizeof(char) * k + 1);
		if (cat == NULL)
			return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (m = 0; av[i][m]; m++)
		{
			cat[j] = av[i][m];
			j++;
		}
		if (cat[j] == '\0')
		{
			cat[j++] = '\n';
		}
	}
	return (cat);
}
