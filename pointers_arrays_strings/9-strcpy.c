#include "main.h"
/**
 *_strcpy -copy a string in another pointer.
 *
 * @dest: destiny pointer.
 *
 * @src: first pointer.
 */
char *_strcpy(char *dest, char *src)
{
	while (*dest != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
