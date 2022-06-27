#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *array_range - creates an array of integers
 *@min: min of the range
 *@max: max of the range
 *Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int range;

	if (min > max)
		return (NULL);

	range = max - min;
	ptr = malloc((range + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
		ptr[i] = min++;

	return (ptr);
}
