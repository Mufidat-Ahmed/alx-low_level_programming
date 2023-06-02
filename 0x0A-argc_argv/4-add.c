#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - program that prints positive number
 * @argc: Contains number of arguments in argv
 * @argv: arguments contained in function
 * Return: 0
 */

int num(char *str);
int main(int argc, char *argv[])
{
	int m = 1;
	int string;
	int sum = 0;

	while (m < argc)
	{
		if (num(argv[m]))
		{
			string = atoi(argv[m]);
			sum += string;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		m++;
	}
	printf("%d\n", sum);
	return (0);
}
/**
 * num - checks for digit in string
 * @str: pointer array
 * Return: 0
 */
int num(char *str)
{
	unsigned int m = 0;

	while (m < strlen(str))
	{
		if (!isdigit(str[m]))
		{
			return (0);
		}
		m++;
	}
	return (1);
}
