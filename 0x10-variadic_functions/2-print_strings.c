#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints a string followed by a newline
 * @separator: string to be printed between string
 * @n: number of string passed
 * @...: different number of strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *m;
	unsigned int i;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		m = va_arg(string, char *);
		if (m == NULL)
			printf("(nil)");
		else
			printf("%s", m);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
