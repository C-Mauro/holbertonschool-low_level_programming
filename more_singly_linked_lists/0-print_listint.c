#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_listint -print the elements if a list (int)
 *@h: pointer to the first element of a list (address)
 *Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	int i;
	const listint_t *temp = h;

	if (h == NULL)
		return (0);

	for (i = 0; temp != NULL; i++)
	{
		printf("%d\n", temp->n);
			temp = temp->next;
	}
	return (i);
}
