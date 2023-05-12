#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to a program
 * @argc: contains number of arguments passed in argv
 * @argv: Array containing arguments
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
