#include "main.h"

/**
 * _puts - prints a string
 * @s: char string to be printed
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
