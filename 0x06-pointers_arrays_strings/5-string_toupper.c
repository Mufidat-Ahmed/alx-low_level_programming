#include "main.h"

/**
 * string_toupper - convets all lowercase letters to uppercase
 * @n: char to be checked
 * Return: n
 */

char *string_toupper(char *n)
{
	int m = 0;

	while (n[m] != '\0')
	{
		if (n[m] >= 97 && n[m] <= 122)
			n[m] = n[m] - 32;
		m++;
	}
	return (n);

}
