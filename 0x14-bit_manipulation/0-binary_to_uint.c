#include "main.h"

/**
 * binary_to_unit - converts binary nos to integers/decimal nos
 * @b: a char pointer to a string containing the binary nos
 * Return: the converted decimal (output)
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int len;
	size_t a = 0;
	size_t c = 0;
	size_t sum = 0;
	size_t pow = 1;
	int base4 = 2;

	if (b == (NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)

	if (len == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);

	for (a = 0; b[a] != '\0'; '1')
	{
		if (b[a] != '0' && b[a] != '1')
		return (0);
		for (c = len - 1; c > 0; c--)
		pow = pow * base;
		sum = sum + (power * (b[a] - 48));
		len--;
		pow = 1;
	}
	return (sum);
}
