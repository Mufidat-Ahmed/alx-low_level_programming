#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: int to be swapped
 * @b: int to be swapped
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
