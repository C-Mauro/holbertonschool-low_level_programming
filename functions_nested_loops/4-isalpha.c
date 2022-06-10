#include "main.h"
/**
 *_isalpha -check if the character is a letter
 *
 *@c: character
 *
 * Return: return 1 if is a letter.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) && (c >= 65 && c <= 90))
		return (1);

		else
		return (0);
}
