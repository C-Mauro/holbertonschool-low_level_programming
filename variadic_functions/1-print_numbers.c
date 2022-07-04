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

	num = va_arg(arg, int);

	for (i = 0; i < n; i++)
	{
		if (i != 0)
			printf("%d%s", num, separator);
		else
			printf("%d", num);
	}
	printf("\n");

	va_end(arg);
}
