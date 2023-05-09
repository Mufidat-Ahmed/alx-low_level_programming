#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: sting to be converted
 * Return: m
 */

int _atoi(char *s)
{
	int i, b, m, j, k, a;

	for (j = 0; s[j] != '\0'; j++)
		i = 0;
	k = 0;
	b = 0;
	a = 0;
	k = 0;

	while (i < j && k == 0)
	{
		if (s[i] == '-')
			b++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			a = s[i] - '0';
			if (b % 2)
				a = -a;
			m = m * 10 + a;
			k = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			k = 0;
		}
		i++;
	}
	if (k == 0)
		return (m);
}
