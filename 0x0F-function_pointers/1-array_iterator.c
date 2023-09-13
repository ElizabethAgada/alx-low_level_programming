#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a functn given as a param on each element of array
 * @array: the array
 * @size: the number of elements to print
 * @action: pointer to print in regular or hex
 * Return void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;
	for (k = 0; k < size; k++)
	{
		action(array[k];
	}
}
