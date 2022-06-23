#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array -create an rray
 * @size: size of char
 * @c: characte
 *Return: ptr
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

		ptr = malloc(size * sizeof(char));
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		return (ptr);
	}
	return (ptr);
}
