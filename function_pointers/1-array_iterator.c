#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator -function execute a function a[]
 *@array: array
 *@size: size of the array
 *@action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
	{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);

	}
