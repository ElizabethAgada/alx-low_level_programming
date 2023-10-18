#include "main.h"

/**
 * get_bit - usually, it takes the value of a bit of index in a decimal
 * number to return
 * @n: d search for the index
 * @index: numbers of bit of index(s)
 * Return: The bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int quantity_of_bit_values;

	if (index > 63)
		return (-1);
	quantity_of_bit_values = (n >> index) & 1;
	return (quantity_of_bit_values);
}
