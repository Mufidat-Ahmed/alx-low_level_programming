#include "main.h"

/**
 * get_endianness - Function that checks endianness
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *m = (char *) & i;

	return (*m);
}
