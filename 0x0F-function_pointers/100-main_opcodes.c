#include "function_pointers.h"
#include <stdio.h>

/**
 * main - prints the opcode of its main function
 * @argc: number of arguments accepted by argv
 * @argv: aray that accepts arguments
 * Return: the operation code of the main function or 0
 */

int main(int argc, char *argv[])
{
	int code, i;
	char *opcode;

	if (argc != 2)
	{
		printf("Error\n");
			exit(1);
	}
	code = atoi(argv[1]);
	if (code < 1)
	{
		printf("Error\n");
		exit(2);
	}
	opcode = (char *)main;

	for  (i = 0; i < code; i++)
	{
		if (i == code - 1)
		{
			printf("%02hhx\n", opcode[i]);
			break;
		}
		printf("%02hhx ", opcode[i]);
	}
	return (0);
}
