#include <stdio.h>

/**
 * main - print the fibonacci sequence
 * Return: 0 success
 */

int main(void)
{
	int i;
	unsigned long int j, n, new, sum;

	j = 1;
	n = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		new = j + n;
		j = n;
		n = new;
	}

	printf("%lu\n", sum);

	return (0);

}
