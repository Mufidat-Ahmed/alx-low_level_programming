#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @m: int to be used as an iterator
 * @n: The natural number to be used
 * Return: Square root of n
 */
int new_sqrt_recursion(int n, int m);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (new_sqrt_recursion);
}
/**
 * new_sqrt_recursion - Finds natural numbers
 * @m: int to be used as an iterator
 * @n: The natural number to be used
 * Return: Square root of n
 */
int new_sqrt_recursion(int n, int m)
{
	if (m *  m > n)
		return (-1);
	if (m * m == n)
	{
		return (m);
	}
	return (new_sqrt_recursion(n, m + 1));
}
