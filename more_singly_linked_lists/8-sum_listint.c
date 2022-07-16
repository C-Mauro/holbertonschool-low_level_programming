#include "lists.h"
/**
 * sum_listint -sum all the data n of a list
 * @head: pointer to a pointer (address to the first element of the list)
 * Return: sum of all the n data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	for (; head != NULL ; )
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
