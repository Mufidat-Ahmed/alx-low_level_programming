#include <unistd.h>

/**
 * _putchar - prints the character to stdio
 * @c: character to be printed out
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
