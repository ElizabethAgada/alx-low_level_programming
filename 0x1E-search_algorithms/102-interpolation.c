#include "search_algos.h"

/**
 * interpolation_search - To search for the value in a sorted array of int
 * using an interpolation search algorithm
 *
 * @array: pointer to first element of array to search
 *
 * @size: num of elements in array
 *
 * @value: value
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 *
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t myLow = 0;
	size_t myHigh = size - 1;
	size_t dPOS;

	if (!array)
		return (-1);

	while ((array[myHigh] != array[myLow]) &&
	       (value >= array[myLow]) && (value <= array[myHigh]))
	{
		dPOS = myLow + (((double)(myHigh - myLow) / (array[myHigh] - array[myLow]))
			    * (value - array[myLow]));
		printf("Value checked array[%lu] = [%d]\n", dPOS, array[dPOS]);
		if (array[dPOS] < value)
			myLow = dPOS + 1;
		else if (value < array[dPOS])
			myHigh = dPOS - 1;
		else
			return (dPOS);
	}
	if (value == array[myLow])
	{
		printf("Value checked array[%lu] = [%d]\n", myLow, array[myLow]);
		return (myLow);
	}
	dPOS = myLow + (((double)(myHigh - myLow) / (array[myHigh] - array[myLow]))
		     * (value - array[myLow]));
	printf("Value checked array[%lu] is out of range\n", dPOS);
	return (-1);
}
