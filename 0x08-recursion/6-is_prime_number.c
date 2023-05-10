#include "main.h"

/**
 * is_prime_number - returns 1 if the integer number is a prime number
 * @n: integer to containg prime number
 * @m: iterator
 * Return: 1 or 0
 */
int prime_number(int n, int m);
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (prime_number(n, n - 1));
}
/**
 * prime_number - gives prime number
 * @m: iterator
 */
int prime_number(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0 && m > 0);
	return (0);
	return (prime_number(n, m - 1));
}
