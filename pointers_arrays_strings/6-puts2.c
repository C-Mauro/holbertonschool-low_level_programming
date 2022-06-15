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

		for (i = 0 ; str[i] != '\0' ; i++)
		;
		for (i = 0 ; i < str[i] ; str = str + 2)
		{
		_putchar(str[i]);

		}
		_putchar('\n');
	}
