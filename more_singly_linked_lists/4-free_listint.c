#include <stdio.h>
/**
 *free_listint -free the list 
 *
 */
void free_listint(listint_t *head)
{
	*temp = head; 
	free(temp->next);
}
