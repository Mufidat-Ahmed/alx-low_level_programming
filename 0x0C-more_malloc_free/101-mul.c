#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "ERROR"

int _strlen(char *s);
void errors(void);
int is_digit(char *s);

/**
 * main - start of the function
 * @argc: amount of arguments contained in function
 * @argv: number of array of argument contained in function
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int str1, str2, str, i, pick, number1, number2, *result, m = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	str1 = _strlen(s1);
	str2 = _strlen(s2);
	str = str1 + str2 + 1;
	result = malloc(sizeof(int) * str);
	if (!result)
		return (1);
	for (i = 0; i <= str1 + str2; i++)
		result[i] = 0;
	for (str1 = str1 - 1; str1 >= 0; str1--)
	{
		number1 = s1[str1] - '0';
		pick = 0;
		for (str2 = _strlen(s2) - 1; str2 >= 0; str2--)
		{
			number2 = s2[str2] - '0';
			pick += result[str1 + str2 + 1] + (number1 * number2);
			result[str1 + str2 + 1] = pick % 10;
			pick /= 10;
		}
		if (pick > 0)
			result[str1 + str2 + 1] += pick;
	}
	for (i = 0; i < str - 1; i++)
	{
		if (result[i])
			m = 1;
		if (m)
			_putchar(result[i] + '0');
	}
	if (!m)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
/**
 * _strlen - checks the length of string
 * @s: string to be checked
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * errors - prints out the error messages for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * is_digit - checks for nondigit char in string
 * @s: string to be checked
 * Return: 1
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
