#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat -concatenate a string
 *@n: bytes
 *@s1: first string
 *@s2: second string
 *Return: s3 (s1 + s2)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int size1 = strlen(s1);
	unsigned int size2 = strlen(s2);
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s3 = malloc((size1 + size2) + 1 * sizeof(char));

	if (s3 == NULL)
	return (NULL);

	if (n >= size2)
	n = size2;

		for (i = 0; s1[i]; i++)
		{
			s3[i] = s1[i];
		}
		for (j = 0; s2[j]; j++)
		{
			s3[i + j] = s2[j];
		}
		s3[i + j] = '\0';
return (s3);
}
