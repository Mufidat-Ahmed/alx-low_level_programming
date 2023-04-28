#include "main.h"

/**
 * print_line - print straight line
 * @n: int to be checked
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (n = 95; n >= 1; n++)
	{
	_putchar(n);
	}
	_putchar('\n');
	}
}
