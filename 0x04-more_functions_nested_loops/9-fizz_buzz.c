#include <stdio.h>
#include "main.h"

/**
 * main - print from 1 -100
 * Return: 0 always
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (i % 3 != 0 && i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i == 1)
		{
			printf("%d ", i);
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
