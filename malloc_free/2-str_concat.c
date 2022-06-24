#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *str_concat -concatenate 2 strings.
 *@s1: string one
 *@s2: string two
 *Return: string one + string two
 */
char *str_concat(char *s1, char *s2)
{
	int i, k;
	char *s3;
	int size1;
	int size2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = strlen(s1);
	size2 = strlen(s2);
	s3 = malloc(size1 + size2 + 1);

	if (s3 == NULL)
	{
		return (NULL);
	}

		for (i = 0; s1[i]; i++)
		{
			s3[i] = s1[i];
		}
		for (k = 0; s2[k]; k++)
		{
			s3[i + k] = s2[k];
		}
		s3[i + k] = '\0';
	return (s3);
}
