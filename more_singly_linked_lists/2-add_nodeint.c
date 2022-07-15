#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *add_nodeint -add a new node at the begining if the list
 *@head: pointer to a pointer (address to the first element)
 *@n: constant integer
 *Return: the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *newnode = malloc(sizeof(listint_t));

	newnode->n = n;

	if (newnode == NULL)
		return (NULL);

	if (newnode->n == '\0')
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = *head;
	*head = newnode;

	return (newnode);
	free(newnode);

}
