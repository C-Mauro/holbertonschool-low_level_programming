#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *add_node_end -add a new node at the end of the list.
 *@head: pointer to a pointer with the first element address.
 *@str: te address of the new pointer.
 *Return: address of the new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *temp;
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->len = _strlen(newnode->str);
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
/**
 *_strlen -lenght of the string (work like strlen)
 *@s: string.
 *Return: string lenght
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
