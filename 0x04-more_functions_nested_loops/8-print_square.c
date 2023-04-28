#include "main.h"

/**
 * print_square - print square
 * @size: number of # to be printed
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, n;

		for (i = 0; i <= size; i++)
		{
			for (n = 0; n <= size; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
