#include "lists.h"

/**
 * add_dnodeint_end - adding a new node at the end of a
 * dlistint_t list
 * @head: the head of the list
 * @n: the value of the element
 * Return: the address of the new wlwmwnt
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *u;

	dlistint_t *praise;

	praise = malloc(sizeof(dlistint_t));
	if (praise == NULL)
		return (NULL);

	praise->n = n;
	praise->next = NULL;

	u = *head;

	if (u != NULL)
	{
		while (u->next != NULL)
			u = u->next;
		u->next = praise;
	}
	else
	{
		*head = praise;
	}

	praise->prev = u;

	return (praise);
}
