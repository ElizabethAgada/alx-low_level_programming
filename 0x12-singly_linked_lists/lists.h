#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * Description: singly linked list node structure for Holberton project
 * @str: string - (malloc'ed string)
 * @next: points to the next node
 * @len: length of the string
 */
typedef struct list_s
{
	unsigned int len;
	char *str;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
