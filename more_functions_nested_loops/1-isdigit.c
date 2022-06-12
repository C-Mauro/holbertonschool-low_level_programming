#include "main.h"
/**
 * _isdigit -chech if is a digit 0 throug 9
 *
 *@c: digits represent by a variable
 *
 * Return: 1 if c is a digit.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
