#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	if(newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	
	newnode->str = strdup(str);
	newnode->len = _strlen(newnode->str);

	newnode->next = *head;
	*head = newnode;

	return(newnode);

}

int _strlen(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
