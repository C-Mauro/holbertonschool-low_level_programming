#include "main.h"
/**
 *puts_half - print the half of a string.
 *
 * @str: string address.
 */
void puts_half(char *str)
{
	int i;
	int h;

	for (i = 0 ; str[i] != '\0' ; i++)
	;
	if (i % 2 == 0)
	{
		for (h = (i / 2) ; str[h] ; h++)
			_putchar(str[h]);
	}
	if (i % 2 != 0)
	{
		for (h = (i / 2) + 1 ; str[h] ; h++)
			_putchar(str[h]);
	}
	_putchar('\n');
}

