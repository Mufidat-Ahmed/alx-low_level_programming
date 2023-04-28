#include "main.h"

/**
 * print_line - print straight line
 * @n: int to be checked
 */

void print_line(int n)
{
	for (n = 45; n >= 1; n++)
	{
		if (n <= 0)
			_putchar('\n');
	}
	_putchar(n);
	_putchar('\n');
}
