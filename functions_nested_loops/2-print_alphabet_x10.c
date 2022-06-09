#include "main.h"
/**
 * print_alphabet - print the alphabet
 * print_alphabet_x10 -print alphabet ten times
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar(10);
}
/**
 *print_alphabet_x10 -print alphabet ten times
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
		print_alphabet();
}
