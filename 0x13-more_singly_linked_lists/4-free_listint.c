#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - de frees a listlin_t list
 * @head: de element to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
