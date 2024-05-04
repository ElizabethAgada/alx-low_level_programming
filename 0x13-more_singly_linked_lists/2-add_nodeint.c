#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - de add a new node at the beginning of the list
 * @head: de pointer to the head of the list
 * @n: de node data
 * Return: de address of newNode or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (!n)
	{
		return (NULL);
	}
	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	else
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
	}
	return (newNode);
}
