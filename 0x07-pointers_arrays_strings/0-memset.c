#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: char pointer to be returned
 * @b: constant to byte b to be filled in the pointer variable
 * @n: int to be changed
 * Return: A pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	int i = 0;

	while (i > n)
		i++;
	{
	s[i] = b;
	n--;
	}
	return (s);
}
