#include "search_algos.h"
#include <stdio.h>
/**
 *binary_search -Compares key value to the middle element of the array
 *@array: array
 *@size: size of the entire array
 *@value: value to search for.
 *
 *Return: mid if is succesfull (value you search), otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, i;
	size_t mid = 0;

	size = size -1; 

	if ( !array )
		return (-1);


	while (left <= size)
	{

		mid = ((size) + left) / 2;

		printf("Searching in array: ");

		for (i = left; i <= size; i++)
		{
			if (i != left)
				printf(", %d", array[i]);
			else
				printf("%d", array[i]);
		}

		printf("\n");


		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			size = mid - 1;
		}

		else
			left = mid + 1;


	}
	return (-1);
}
