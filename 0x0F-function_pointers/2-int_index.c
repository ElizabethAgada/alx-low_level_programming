#include "function_pointers.h"

/**
* int_index - return 0 index place if comparison = true, else -1
* @size: the number of elements in the array
* @cmp: pointer to d function to be used to compare values
* @array: array
* Return; 0 index place if comparison = true, else -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
			return (0);
	}
	return (-1);
}
