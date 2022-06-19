#include "main.h"
/**
 *_strcat -concatenate strings.
 *
 * @src: first string
 *
 *@dest: where we move from here.
 *
 * Return: return the value (stringls
 **/
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}

