#include "main.h"

/**
 * get_bit - sets the value of a bit to 1 at a given index
 * @index: index of the bit to be set
 * @n: integer to be used
 * Return: value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
