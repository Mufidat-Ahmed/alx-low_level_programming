#include "main.h"

/**
 * _atoi - converts an string to an integer
 * @s: string character to be converted
 * Return: integer
 */

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
