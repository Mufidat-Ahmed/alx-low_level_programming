#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: list of argument types
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *m = "";

	va_list all;

	va_start(all, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'f':
					printf("%s%f", m, va_arg(all, double));
					break;
				case 'i':
					printf("%s%d", m, va_arg(all, int));
					break;
				case 'c':
					printf("%s%c", m, va_arg(all, int));
					break;
				case 's':
					string = va_arg(all, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", m, string);
					break;
				default:
					i++;
					continue;
			}
			m = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(all);
}
