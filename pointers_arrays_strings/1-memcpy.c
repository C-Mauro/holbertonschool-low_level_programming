#include "main.h"
/**
 *_memcpy -copies n bytes from memory area from src to dest.
 *
 * @src: pointer
 *
 * @dest: pointer
 *
 * @n: bytes
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
