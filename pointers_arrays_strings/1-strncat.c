#include "main.h"
/**
 *_strcat -concatenate two strings.
 *
 * @src: first string (address)
 *
 * @dest: second string (address)
 *
 * Return: the value on src (two strings)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n; j++)
	{
		dest[i] = src [j];
		i++;
		j++;
		dest[i] = '\0';
	}
	return(dest);
}
