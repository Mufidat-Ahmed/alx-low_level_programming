#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: the name that the function prints out
 * @f: points to the function print_name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
