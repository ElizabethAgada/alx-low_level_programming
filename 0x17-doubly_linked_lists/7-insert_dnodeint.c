#include "lists.h"
/**
 * insert_dnodeint_at_index - a program that inserts a new node
 * at a given position
 * @h: the head of the list
 * @idx: the index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL IF it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *great;
	dlistint_t *head;
	unsigned int ppp;

	great = NULL;
	if (idx == 0)
		great = add_dnodeint(h, n);
	else
	{
		head = *h;
		ppp = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (ppp == idx)
			{
				if (head->next == NULL)
					great = add_dnodeint_end(h, n);
				else
				{
					great = malloc(sizeof(dlistint_t));
					if (great != NULL)
					{
						great->n = n;
						great->next = head->next;
						great->prev = head;
						head->next->prev = great;
						head->next = great;
					}
				}
				break;
			}
		head = head->next;
		ppp++;

		}
	}
	return (great);
}
