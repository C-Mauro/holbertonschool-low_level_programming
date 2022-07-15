#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *listint_len -return the number of elements in a list
 *@h: header, pointer to the first element of the list (address)
 *Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	int i;

	if (h == NULL)
		return (0);

	for (i = 0; temp != NULL; i++)
		temp = temp->next;

	return (i);
}
