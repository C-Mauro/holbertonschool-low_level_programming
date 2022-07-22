#include "lists.h"
#include <stdlib.h>
/**
 *
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	int i;
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (newnode == NULL)
		return (NULL);

	if (newnode->n == '\0')
	{
		free(newnode);
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	temp = *head;
	for (i = 0; temp->next != NULL; i++)
	{
		temp = temp->next;
	}
		temp->next = newnode;
		temp->prev = temp;

		return (newnode);

}
