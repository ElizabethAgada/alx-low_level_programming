#include "main.h"

/**
 * rev_string - reverse array
 * @n: integerparameter
 * Return: 0
 */
void rev_string(char *n)
{
	int z, f;

	char temp;

	while (*(n + z) != '\0')
	{
		z++;
	}
	z--;
	for (f = 0 ; f < z ; f++, z--)
	{
		temp = *(n + f);
		*(n + f) = *(n + z);
		*(n + z) = temp;
	}
}

/**
 * infinite_add - function to add two numbers together
 * @n1: the text representing first number to add
 * @n2: the text representing second number to add
 * @r: pointer to the buffer
 * @size_r: size of buffer
 * Return: pointer to calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)

{
	int overflow = 0, z = 0, f = 0, digits = 0;

	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + z) != '\0')
		z++;
	while (*(n1 + f) != '\0')
		f++;
	z--;
	f--;
	if (f >= size_r || z >= size_r)
		return (0);
	while (f >= 0 || z >= 0 || overflow == 1)
	{
		if (z < 0)
			val1 = 0;
		else
			val1 = *(n1 + z) - '0';
		if (f < 0)
			val2 = 0;
		else
			val2 = *(n2 + f) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}


