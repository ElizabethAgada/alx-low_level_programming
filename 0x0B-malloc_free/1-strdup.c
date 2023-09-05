#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory space allocation
 * @str: string to copy to new memory
 * Return: pointer to new memory
 */
char *_strdup(char *str)
{
	char *copy;
	int count = 0;
	int a;

	if (str == NULL)
		return (NULL);

	for (a = 0 ; str[a] != '\0' ; a++)
			count++;

	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		copy[a] = str[a];
	return (copy);
}
