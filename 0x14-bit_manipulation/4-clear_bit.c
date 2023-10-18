#include "main.h"

/**
 * clear_bit - it is d value of a bit to be set to a given bit to 0
 * @n: it is d pointer to change the no to
 * @index: its an index that clears a bit
 * Return: i @ succcess and -1 @ fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
