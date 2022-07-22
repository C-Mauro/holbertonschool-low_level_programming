#include "lists.h"
/**
 *sum_dlistint -sum of all the data n
 *@head: pointer to the first element of the linked list
 *Return: result of the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head != NULL;)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
