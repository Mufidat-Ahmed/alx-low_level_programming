#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * new_sqrt - Returns the natural square root of a number
 * @n: The natural number to be used
 * @m: iterator
 * Return: Square root of n
 */

int new_sqrt(int n, int m);

int _sqrt_recursion(int n)
{
	return (new_sqrt(n, 1));
}

/**
 * new_sqrt - Returns the natural square root of a number
 * @n: The natural number to be used
 * @m: iterator
 * Return: Square root of n
 */

int new_sqrt(int n, int m)
{
	int i = m * m;

	if (n < 0)
		return (-1);
	else if (i > n)
	{
		return (-1);
	}
	else if (i == n)
	{
		return (m);
	}
	return (new_sqrt(n, m + 1));
}
