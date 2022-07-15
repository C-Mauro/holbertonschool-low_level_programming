#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *add_nodeint_end -add a new node at the end of the list
 *@head: pointer to pointer (address of the first element of the list)
 *@n: integer
 *Return: address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int i;
	listint_t *temp;
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (newnode->n == '\0')
	{
		free(newnode);
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	temp = *head;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	for (i = 0; temp->next != NULL; i++)
	{
		temp = temp->next;
	}
		temp->next = newnode;

	return (newnode);
	free(newnode);
}
