#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint -de deletes the head node of a linked list
 * @head: de list head
 * Return: de head node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!*head || !head)
	{
		return (0);
	}
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
