#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings -print string
 * @separator: separator (pointer)
 * @n: number of arguments (strings)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list arg;

	va_start(arg, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char*);
		if (str == 0)
			printf("nil");

		if (i != n - 1)
			printf("%s%s", str, separator);

		else
			printf("%s", str);
	}
	printf("\n");

	va_end(arg);
}
