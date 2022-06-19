#include "main.h"
/**
 *_strncat -concatenate two strings.
 *
 * @src: first string (address)
 *
 * @dest: second string (address)
 *
 *@n: bytes
 *
 * Return: the value on src (two strings)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j]; j++, i++)
		dest[i] = src[j];

	return (dest);
}
