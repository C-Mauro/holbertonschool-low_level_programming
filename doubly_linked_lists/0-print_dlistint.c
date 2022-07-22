#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_dlistint -print all the elements of the list.
 *@h: pointer to a first element of the list
 *Return: the number of elements of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	if (h == NULL)
		return (0);

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
