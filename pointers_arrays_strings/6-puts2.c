#include "main.h"
/**
 *puts2 -print each other characters of a string.
 *
 * @str: adress of string
 *
 */
void puts2(char *str)
	{
		int i;

		for (i = 0 ; str[i] != '\0' ; i = i + 1)
		{
		_putchar(*str);
		str = str + 2;
		}
		_putchar('\n');
	}
