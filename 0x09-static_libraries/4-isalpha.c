#include "main.h"

/**
 * _isalpha - checks if character is alphabet
 * @c: character to be checked
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (0);
}
