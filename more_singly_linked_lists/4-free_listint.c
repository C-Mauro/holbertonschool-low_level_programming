#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_listint -free the list
 *@head: pointer to the first element of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	for (; head != NULL ; )
	{
	temp = head;
	head = head->next;
	free(temp);
	}
}
