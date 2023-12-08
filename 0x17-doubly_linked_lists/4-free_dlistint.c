#include "lists.h"

/**
 * free_dlistint - program that frees a dlistint_t list
 * @head: the head of the list
 * Return: there is no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *grace;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((grace = head) != NULL)
		head = head->prev;

	while ((grace = head) != NULL)
	{
		head = head->next;
		free(grace);
	}
}
