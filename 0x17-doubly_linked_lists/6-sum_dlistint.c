#include "lists.h"

/**
 * sum_dlistint - program that returns the sum of all the data
 * (n) of a doubly linked list
 * @head: the head of the list
 * Return: the sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int joy;

	joy = 0;

		if (head != NULL)
		{
			while (head->prev != NULL)
				head = head->prev;

			while (head != NULL)
			{
				joy += head->n;
				head = head->next;
			}
		}

	return (joy);
}
