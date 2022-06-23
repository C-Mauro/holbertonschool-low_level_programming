#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *str_concat
 *
 */
char *str_concat(char *s1, char *s2)
{
	int j, k;
	char *s3;
	int size1 = strlen(s1);
	int size2 = strlen(s2);
	
	if (s1 == NULL)
	{
		size1 = 0;
	}
	if (s2 == NULL)
	{
		size2 = 0;
	}
	s3 = malloc(((size1 + size2) + 1) * sizeof(char));

	if (s3 == NULL)
	{
		return (NULL);
	}

		for (j = 0; j <= size1; j++)
			s3[j] = s1[j];
			
		for (k = 0; k <= size2; k++)
			s3[j] = s2[k];
			j++;
	return (s3);
}
