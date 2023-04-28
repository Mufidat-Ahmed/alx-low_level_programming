#include "main.h"

/**
 * print_numbers - Print form 0 - 9 followed by newline
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
