#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: charater to be evaluated
 * Return: n
 */

char *leet(char *n)
{
	int i, m;
	char k1[] = "aAeEoOlLtT";
	char k2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (m = 0; m < 10; m++)
		{
			if (n[i] == k1[m])
			{
				n[i] == k2[m];
			}
		}
	}
	return (n);
}
