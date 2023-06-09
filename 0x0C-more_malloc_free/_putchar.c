#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a character to stout
 * @c: character string to be printed
 * Return: character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
