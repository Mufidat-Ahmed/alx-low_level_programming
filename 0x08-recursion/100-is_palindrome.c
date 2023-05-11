#include "main.h"

/**
 * is_palindrome - A function thar finds a palindrome in a string
 * palindrome - finds the palindrome
 * @s: String to be checked
 * strlen_pal - reverse string in char s
 * Return: 1 or 0
 */

int strlen_pal(char *s);
int palindrome(char *s, int i, int m);
int is_palindrome(char *s)
{
	if (*s == 0)
	return (1);
	return (palindrome(s, 0, strlen_pal(s)));
}
/**
 * strlen_pal - reverse string in char s
 * @s: String to be checked
 * Return: string length
 */
int strlen_pal(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlen_pal(s + 1));
}
/**
 * palindrome - finds the palindrome
 * @s: String to be checked
 * @i: int to be repeated
 * @m: length of the string
 * Return: 1 or 0
 */
int palindrome(char *s, int i, int m)
{
	if (*(s + 1) != *(s + m - 1))
			return (0);
			else if (i >= m)
			{
			return (1);
			}
			return (palindrome(s, i + 1, m - 1));
}

