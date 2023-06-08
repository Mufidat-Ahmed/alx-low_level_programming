#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: index of the bit to be set
 * @n: integer character to be used
 * Return: 1 0r -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
