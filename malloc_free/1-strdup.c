#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_strdup -duplicate the string
 *@str: string
 *
 *Return: pointer to the copy.
 */
char *_strdup(char *str)
{
	int i;
	char *str2;
	int size;

	if (str == NULL)
	{
		return (NULL);
	}
	size = strlen(str);
	str2 = malloc(size + sizeof(str) + 1);
	if (str2 == NULL)
	{
		return (NULL);
	}
	else 
	{
	for (i = 0; i < size; i++)
		str2[i] = str[i];
	}
	return (str2);
}
