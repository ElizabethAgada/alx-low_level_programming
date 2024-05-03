#include "main.h"
#include <stdlib.h>
/**
 * array_range - d creates an array of integers
 * @min: d min range of the array
 * @max: d max range of the array
 * Return: d pointer to the array or null if malloc fails
 */
int *array_range(int min, int max)
{
	int *cjc;
	int i;
	int ghc = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}
	cjc = (int *)malloc(sizeof(int) * ghc);
	if (cjc == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ghc; i++)
	{
		cjc[i] = min + i;
	}
	return (cjc);
}
