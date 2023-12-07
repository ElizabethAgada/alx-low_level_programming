#include "lists.h"

/**
 * print_dlistint - printing of all d elements of a dlistint_t list
 * @h: its d head of d list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int zoo;

	zoo = 0;

	if (h == NULL)
		return (zoo);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		zoo++;
		h = h->next;
	}

	return (zoo);
}
