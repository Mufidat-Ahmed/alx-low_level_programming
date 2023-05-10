#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The natural number to be used
 * Return: Square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if ((n * n) > n)
	{
		return (-1);
	}
	else
		return (n * n);
}
