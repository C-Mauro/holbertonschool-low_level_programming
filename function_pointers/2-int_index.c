#include "function_pointers.h"
#include <stdio.h>
/**
 *int_index -seach for an integrer
 *@array: array
 *@size: size of array
 *@cmp: pointer to function
 *Return: i matches, -1 not match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
