#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		printf("%d", n);
		n++;
	}
	return (0);
}
