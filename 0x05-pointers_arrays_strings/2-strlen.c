#include "main.h"

/**
 * _strlen - Returns the lenght of a string
 * @s: string lenght to be returned
 * Return: lenght
 */

int _strlen(char *s)
{
	int m = 0;

	while (*s != '\0')
	{
		m++;
		s++;
	}
	return (m);
}
