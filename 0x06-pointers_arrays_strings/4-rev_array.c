#include "main.h"

/**
 * reverse_array - a function that rverses the content of string of array
 * @a: name of array
 * @n: number of element in array
 */

void reverse_array(int *a, int n)
{
	int i, m;

	for (i = 0; i < n--; i++)
	{
		m = a[i];
		a[i] = a[n];
		a[n] = m;
	}
}
