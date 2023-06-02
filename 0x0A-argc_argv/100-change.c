#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the number of coin
 * @argc: number of arguments contained in function
 * @argv: array of argumets present in function
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int let, i, m = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	let = atoi(argv[1]);

	if (let < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && let >= 0; i++)
	{
		while (let >= coins[i])
		{
			m++;
			let -= coins[i];
		}
	}

	printf("%d\n", m);
	return (0);
}
