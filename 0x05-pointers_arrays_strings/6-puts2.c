#include "main.h"

/**
 * puts2 - print charactes of a new string
 * @str: string to be printed
 */

void puts2(char *str)
{
	int i = 0;
	char *m = str;
	int j = 0, k;

	while (*m != '\0')
	{
		m++;
		i++;
	}
	j = i - 1;
	for (k = 0; k <= j; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
