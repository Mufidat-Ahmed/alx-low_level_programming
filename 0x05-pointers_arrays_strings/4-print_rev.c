#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int m = 0, i;

	while (*s != 0)
	{
		m++;
		s++;
	}
	s--;
		for (i = m; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
