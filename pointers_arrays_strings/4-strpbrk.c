#include "main.h"
/**
 *_strpbrk - searches a string for any of a set of bytes.
 *
 *@s: pointer (string)
 *
 * @accept: char
 *
 * Return:  pointer to the byte in s.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
		break;
	}
	if (accept[j])
		return (s + i);
	}
	return (0);
}