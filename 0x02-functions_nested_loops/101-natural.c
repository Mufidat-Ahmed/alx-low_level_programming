#include <stdio.h>

/**
 * main - list natural numbers
 * Return: Always 0 success
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			j += i;

	}
	printf("%d\n", j);

	return (0);
}
