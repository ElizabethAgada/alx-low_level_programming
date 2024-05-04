#include "lists.h"
/**
 * insert_nodeint_at_index - de inserts a new node at a given position
 * @head: de head of node
 * @idx: de list index
 * @n: de list data
 * Return: de the address of the new node or Null if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *currentNode;
	unsigned int currentIndex = 0;

	newNode = malloc(sizeof(listint_t));
	if (!newNode || !head)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	currentNode = *head;
	while (currentNode != NULL)
	{
		if (currentIndex == idx - 1)
		{
			newNode->n = n;
			newNode->next = currentNode->next;
			currentNode->next = newNode;
			return (newNode);
		}
		currentNode = currentNode->next;
		currentIndex++;
	}
	return (NULL);
}
