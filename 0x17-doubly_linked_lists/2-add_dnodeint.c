#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the
 * beginning of a distinct_t list
 * @head: the head of the list
 * @n: the value of the element
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *frame;
	dlistint_t *p;

	frame = malloc(sizeof(dlistint_t));
	if (frame == NULL)
		return (NULL);

	frame->n = n;
	frame->prev = NULL;
	p = *head;

	if (p != NULL)
	{
		while (p->prev != NULL)
			p = p->prev;
	}

	frame->next = p;

	if (p != NULL)
		p->prev = frame;

	*head = frame;

	return (frame);
}
