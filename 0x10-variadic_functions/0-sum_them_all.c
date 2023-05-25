#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: integer to be summed
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list m;
	unsigned int j, sum;

	va_start(m, n);

	for (j = 0; j < n; j++)
		sum += va_arg(m, int);
	va_end(m);
	return (sum);
}
