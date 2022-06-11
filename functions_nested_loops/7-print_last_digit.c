#include "main.h"
/**
 * print_last_digit -print the las digit.
 *
 * @num: the number.
 *
 * Return: The value of last digit.
 */
int print_last_digit(int num)
{
	int ldig;

	ldig = num % 10;
	return (ldig);
}
