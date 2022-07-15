#include "lists.h"
/**
 *list_len -return the number of elements on the list.
 *@h: pointer to the first element of the list
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	int i;

	for (i = 0; temp != NULL; i++)
		temp = temp->next;

	return (i);
}
