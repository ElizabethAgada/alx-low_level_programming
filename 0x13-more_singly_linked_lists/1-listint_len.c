#include "lists.h"
#include <stdio.h>
/**
 * listint_len - dis list return the number of elements in a linked list
 * @h: d head of the linked list
 * Return: d count of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
