#include "lists.h"

/**
 * print_listint - prins all the elements of a linked list
 * @h: linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	if (h == NULL)
		return (0);
	for (nodes = 0; h != NULL; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
