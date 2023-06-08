#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: binary of number to be printed
 */

void print_binary(unsigned long int n)
{
	int m = 63, i;
	unsigned long int binary;

	for (; m >= 0; m--)
	{
		binary = n >> m;
	if (binary & 1)
	{
		_putchar('1');
		i++;
	}
	else if (i)
		_putchar('0');
	}
	if (!i)
		_putchar('0');
}
