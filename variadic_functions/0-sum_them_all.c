#include "variadic_functions.h"
#include "stdarg.h"
/**
 *sum_them_all -sum all the arguments
 *@n: number of arguments
 *Return: the sum of all the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int value, sum;

	va_list arg;

	va_start(arg, n);

	if (n == 0)
		return (0);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		value = va_arg(arg, int);
		sum += value;
	}
	va_end(arg);

		return (sum);
}
