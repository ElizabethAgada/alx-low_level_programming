#include "lists.h"

/**
 * sum_listint - de returns the sum of all the
 * data(n) of a listint_t linked list
 * @head: de head of the list
 * Return: de sum of the list elements or
 * 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
