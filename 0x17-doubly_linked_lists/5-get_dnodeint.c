#include "lists.h"

/**
 * get_dnodeint_at_index - program that returns the nth node
 * of a dlistint_t linked list
 * @head: the head of the list
 * @index: the index of thr nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int pee;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	pee = 0;

	while (head != NULL)
	{
		if (pee == index)
			break;
		head = head->next;
		pee++;
	}

	return (head);
}
