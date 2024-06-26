#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - D allocates memory using malloc
 * @b: D unsigned integer
 * Return: D pointer to the allocated memory or status value of 98 when failed
 */
void *malloc_checked(unsigned int b)
{
	void *result;

	result = malloc(b);
	if (result == NULL)
	{
		exit(98);
	}
	return (result);
}
