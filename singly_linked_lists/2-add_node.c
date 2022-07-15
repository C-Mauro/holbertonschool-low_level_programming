#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *add_node -this function add a new node at the begining of the list.
 *@head: pointer to a pointer with the first element address.
 *@str: pointer to a string
 *Return: the address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
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

	newnode->next = *head;
	*head = newnode;

	return (newnode);

}
/**
 *_strlen -lenght of the string (work like strlen)
 *@s: string
 *Return: string lenght.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
