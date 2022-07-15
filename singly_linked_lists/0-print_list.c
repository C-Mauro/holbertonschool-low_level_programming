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

	if (temp->str == NULL)
		printf("[0] (nil)\n");
	
	for (i = 0; temp != NULL && temp->str != NULL; i++)
	{
		printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
	}

	return (i);
}
