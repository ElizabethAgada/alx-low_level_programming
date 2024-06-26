#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint_end - de add a new node to the end of the list
 * @head: de pointer to the head of the list
 * @n: de node data
 * Return: de address of newNode or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *current;

	if (!n)
	{
		return (NULL);
	}
	newNode = (listint_t *) malloc(sizeof(listint_t));
	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	else
	{
		current = *head;
		while (current->next)
		{
			current = current->next;
		}
		current->next = newNode;
	}
	return (newNode);
}
