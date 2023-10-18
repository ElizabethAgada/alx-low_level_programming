#include "main.h"
/**
 * flip_bits - checks d no of bits to be changed
 * from a no to another
 * @n: the start no
 * @m: the end no
 * Return: d number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int cream, burger = 0;
	unsigned long int amazing;
	unsigned long int ex = n ^ m;

	for (cream = 63; cream >= 0; cream--)
	{
		amazing = ex >> cream;
		if (amazing & 1)
			burger++;
	}
	return (burger);
}
