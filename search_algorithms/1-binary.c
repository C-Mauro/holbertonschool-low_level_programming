#include "search_algos.h"
#include <stdio.h>
/**
 *binary_search -
 *
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t mid = 0;
	
	if (!array)
		return(-1);

	while (size >= left)	
	{

		mid = (size + left) / 2;

		if (array[mid] == value)
		{
			return(mid);
		}
		else if (array[mid] > value)
		{
			size = mid - 1;
		}

		else
			left = mid + 1;

	}	
	return(-1);

}
