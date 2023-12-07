#include "lists.h"

/**
 * dlistint_len - this program returns the no of elements in
 * a doubled linked list
 * @h: the head of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int zoo;

	zoo = 0

	if (h == NULL)
		return (zoo);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		zoo++;
		h = h->next;
	}

	return (zoo);

}
