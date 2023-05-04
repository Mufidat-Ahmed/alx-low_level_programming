#include "main.h"

/**
 * cap_string - capitalises all words of a string
 * Return: n
 * @n: string to br scanned
 */

char *cap_string(char *n)
{
	int index = 0;

	while (n[index])
	{
		while (!(n[index] >= 97 && n[index] <= 122))
			index++;
		if (n[index - 1] == ' ' ||
				n[index - 1] == '\t' ||
				n[index - 1] == '\n' ||
				n[index - 1] == ',' ||
				n[index - 1] == ';' ||
				n[index - 1] == '.' ||
				n[index - 1] == '!' ||
				n[index - 1] == '?' ||
				n[index - 1] == '"' ||
				n[index - 1] == '(' ||
				n[index - 1] == ')' ||
				n[index - 1] == '{' ||
				n[index - 1] == '}' ||
				index == 0)
			n[index] -= 32;
		index++;
	}
	return (n);
}
