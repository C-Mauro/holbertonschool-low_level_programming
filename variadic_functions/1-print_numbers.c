#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers -print numbers
 *@separator: separator(pointer)
 *@n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;

	va_list arg;

	va_start(arg, n);

	if (separator == NULL)
		separator = "";

	num = 0;
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d%s", num, separator);

		else
			printf("%d", num);

		num = va_arg(arg, int);
	}
	printf("\n");

	va_end(arg);
}
