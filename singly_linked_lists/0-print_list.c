#include "lists.h"
#include <stdio.h>
/**
 *print_list -print all the elements of a list
 *@h: is the pointer to the first element of the list
 *Return: number of elements (nodes) in the list.
 */
size_t print_list(const list_t *h)
{
	int i;
	const list_t *temp = h;

	if (h == NULL)
		return (0);

	for (i = 0; temp != NULL; i++)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");

		else 
		printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (i);
}
