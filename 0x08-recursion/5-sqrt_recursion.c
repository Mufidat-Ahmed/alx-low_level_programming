#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * new_sqrt_recursion - prints the square root of a number
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
 * new_sqrt_recursion - prints the square root of a number
 * @m: int thats repeated
 * @n: natural number to be used
 * Return: square root of n
 */

int new_sqrt_recursion(int n, int m)
{
	m = n * n;

	if (m > n)
	{
		return (-1);
	}
	else if (m == n)
	{
		return (m);
	}
	else
	return (_sqrt_recursion(m));
}
