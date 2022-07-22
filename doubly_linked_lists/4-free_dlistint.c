#include "lists.h"
#include <stdlib.h>
/**
 *free_dlistint -free the list
 *@head: pointer to the first element of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	for (; head != NULL; )
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
