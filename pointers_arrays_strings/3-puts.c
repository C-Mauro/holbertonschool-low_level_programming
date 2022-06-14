#include "main.h"
/**
 *_puts -print the string
 *
 *@str: string.
 */
void _puts(char *str)
{
	 int i;

		for (i = 0 ; str[i] != '\0' ; )
	{
			_putchar(*str++);

	}
	_putchar('\n');
}
