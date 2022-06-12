#include "main.h"
/**
 *_isupper -chek if the character is upper
 *
 * Return: 0 if is upper
 *
 *@c: variable, represent a alphabet letter
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
