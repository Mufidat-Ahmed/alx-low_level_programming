#include "main.h"

/**
 * flip_bits - Returns no of bits needed to flip from one number to another
 * @n: bits to be fliped
 * @m: bit to be fliped
 * Return: number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, bit = 0;
	unsigned long int flip;
	unsigned long int pow = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		flip = pow >> i;
		if (flip & 1)
			bit++;
	}
	return (bit);
}
