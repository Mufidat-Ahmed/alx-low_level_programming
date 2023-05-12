#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: number of arguments argv can recieve
 * @argv: Array containng arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
