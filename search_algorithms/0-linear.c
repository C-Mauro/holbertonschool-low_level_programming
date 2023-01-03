#include "search_algos.h"
#include <stdio.h>
/**
 *linear_search -find an element in the array.
 *
 *@array: array
 *@size: size of the array.
 *@value: value to search for.
 *
 *Return: the value if it's succesful, otherwise -1.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);


	for (i = 0; i < size; i++)
	{

		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (array[i]);
		}
	}

	return (-1);
}
