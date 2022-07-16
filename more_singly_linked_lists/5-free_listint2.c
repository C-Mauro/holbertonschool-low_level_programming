#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *free_listsint2 -free list but set null to the head
 *@head: pointer to a pointer (address to the first element of the list)
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;

	for (; *head != NULL ; )
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	head = NULL;
}

