#include "main.h"

/**
 * puts_half - print half of string followed by a new line
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i = 0, j, k;

	for (j = 0; str[j] != '\0'; j++)
		i++;
	k = (i / 2);
	if ((i % 2) == 1)
		k = ((i + 1) / 2);

	for (j = k; str[j] != '\0'; j++)
	_putchar(str[j]);
	_putchar('\n');
}
