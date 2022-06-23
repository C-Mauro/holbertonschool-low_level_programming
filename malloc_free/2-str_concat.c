#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *s3;
	int size1 = strlen(s1);
	int size2 = strlen(s2);
	int sizet = (size1 + size2 + 1);
	
	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	if (s1 == NULL && s2 == NULL)
	{
		s1 = " ";
		s2 = " ";
	}
	s3 = malloc(sizet * sizeof(char) + 1);
	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < sizet;)
	{
		for (j = 0; j < size1; j++, i++)
			s3[i] = s1[i];
			
		for (k = 0; k < size2; k++, i++)
			s3[i] = s2[i];
	}
	return (s3);
}
