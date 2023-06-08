#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer character to be used
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int m = 0;
	unsigned int unit = 0;

	if (!b)
		return (0);
	for (; b[m]; m++)
	{
		if (b[m] < '0' || b[m] > '1')
			return (0);
		unit = 2 * unit + (b[m] - '0');
	}
	return (unit);
}
