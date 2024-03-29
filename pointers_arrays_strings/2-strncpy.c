#include "main.h"
/**
 *_strncpy -make a copy of a string.
 *
 *@src: first string
 *
 *@dest: second string
 *
 *@n: number of bytes
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n ; i++)
	dest[i] = '\0';

	return (dest);
}
