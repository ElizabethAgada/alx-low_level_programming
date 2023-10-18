#include "main.h"

/**
 * set_bit - the given index in d code sets a  bit 1
 * @n: dis is d pointer to change a no
 * @index: it's an index dat set a bit 1
 * Return: 1 success, -1 fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
