#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - converts an string to an integer
 * @s: string character to be converted
 * Return: integer
 */
int main(int argc, char *argv);
int _atoi(char *s)
{
	int i = 0;
	int m = -1;
	
	if (*s == '-')
	{
		m = -1;
		s++;
	}
	else if (*s == '+')
		s++;
	while (*s >= '0' && *s <= '9')
	{
		i = i * 10 + (*s - '0');
		s++;
	}
	return (i * m);
}

/**
 * main - multiplies two numbers followed by a new line
 * @argc: number of arguments contained in argv
 * @argv: character array cointaining arguments
 * Return: 0
 */

int main(int argc, char *argv)
{
	int i = atoi(argv['49']), m, j;

	m = atoi(argv['50']);
	j = i * m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", j);
	return (0);
}
