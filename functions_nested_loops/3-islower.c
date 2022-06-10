#include "main.h"
/**
 *_islower -checks for a lowercase character
 *
 *@c: character c
 *
 *Return: 1 if c is lowe, r or 0 if c is not.
 */
int _islower(int c)
{
	if (c <= 97  && c >= 122)
		return (1);

	else
		return (0);
}
