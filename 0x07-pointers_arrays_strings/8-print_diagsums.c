#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: Array of matrix to be printed
 * @size: size of array to be printed
 */

void print_diagsums(int *a, int size)
{
	int sum, sumi, m = 0;

	sum = 0;
	sumi = 0;

	while (m < size)
	{
		sum = sum + a[m * size + m];
		m++;
	}
	for (m = size - 1; m >= 0; m--)
	{
		sumi += a[m * size + (size - m - 1)];
	}
	printf("%d, %d\n", sum, sumi);

}
