#include <stdio.h>
#include <math.h>

/**
 * main - find and print the largest prime factor
 * Return: 0 always success
 */

int main(void)
{
	long int i, max, j;

	i = 612852475143;
	max = -1;

	while (i % 2 == 0)
	{
		max = 2;
		i /= 2;
	}
	for (j = 3; j <= sqrt(i); j = j + 2)
	{
		while (i % j  == 0)
		{
			max = j;
			i = i / j;
		}
	}
	if (i > 2)
		max = i;
	printf("%ld\n", max);
	return (0);
}
