#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed to a program
 * @argc: contains number of arguments passed in argv
 * @argv: Array containing arguments
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
