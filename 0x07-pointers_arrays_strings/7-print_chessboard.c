#include "main.h"

/**
 * print_chessboard - A function that prints the ches board
 * @a: array containing 8 characters
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, m;

	while (i < 8)
	{
		for (m = 0; m < 8; m++)
		{
			_putchar(a[i][m]);
		}
		i++;
		_putchar('\n');
	}
}
