#include "lists.h"
#include <stdlib.h>
/**
 *add_dnodeint -add a new node at the beginning to the linked list.
 *@head: pointer to a pointer to the first element of the list.
 *@n:  An integer.
 *Return: the address of the new pointer.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	newnode->next = *head;
	newnode->prev = NULL;

	if (*head != NULL)
		(*head)->prev = newnode;

	*head = newnode;

	return (newnode);
}
