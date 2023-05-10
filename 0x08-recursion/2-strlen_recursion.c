#include "main.h"

/**
 * _strlen_recursion - A function that returns the lenght of a string
 * @s: char pointer string containing the lenght of string to be returned
 * Return: m
 */

int _strlen_recursion(char *s)
{
	int m = 0;

	if (*s)
	{
		m++;
		m += _strlen_recursion(s + 1);
	}
	return (m);
}
