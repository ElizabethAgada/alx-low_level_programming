#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars, & initializes it w a specific char
 * @size: size of array
 * @c: character to store in array
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int a;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		arr[a] = c;
	return (arr);
}
