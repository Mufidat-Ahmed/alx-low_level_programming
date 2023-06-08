#include "main.h"

/**
 * clear_bit - sets the value of a bit to zero
 * @n: integer value to be changed
 * @index: index of the bit to be used
 * Return: 1 or -1 if an error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1ul << index) & *n);
	return (1);
}
