#include "lists.h"
/**
 *dlistint_len -return the number of elements
 *@h: pointer to the first element of the linked list
 *Return: the numbers of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	h = h->next;

	return (i);
}
