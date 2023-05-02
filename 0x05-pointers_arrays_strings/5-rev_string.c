#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char str = s[0];
	int j = -1, i, len;

	while (s[j] != 0);
	j++;
		for (i = 0; i < j; i++)
		{
			str = s[i];
			s[i] = s[j];
			s[j] = str;
			j--;
		}
}
