#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_list -free a list_t
 *@head: pointer with the address to the first element of the list
 *Return: 0
 */
void free_list(list_t *head)
{
	list_t *temp;

	for (; head != NULL ; )
	{
	temp = head;
	head = head->next;
	free(temp->str);
	free(temp);
	}
}
