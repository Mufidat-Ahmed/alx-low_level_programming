#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet in lowercaser 10 times
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char alpha;

	while (i < 11)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		 _putchar('\n');
		i++;
	}
}
