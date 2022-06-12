#include "main.h"
/**
 *more_numbers -print numbers 1 to 14, ten times.
 *
 *
 */
void more_numbers(void)
{
	int n;
	int n2;

	for (n = 1 ; n <= 10 ; n++)
{
	for (n2 = 0 ; n2 <= 14 ; n2++)
	{
		if (n2 > 9)
		{
		_putchar(n2 / 10 + '0');
		}

		_putchar(n2 % 10 + '0');
	}
	_putchar('\n');
}
}
