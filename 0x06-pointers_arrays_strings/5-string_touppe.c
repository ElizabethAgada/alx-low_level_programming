#include "main.h"

/**
 * string_toupper - a function that changes all lower case to uppercase
 * @n: the pointer
 * Return: n
 */
char *string_toupper(char *n)
{
	int c;

	c = 0;
	while (n[c] != '\0')
	{
		if (n[c] >= 'A' && n[c] <= 'Z')
			n[c] = n[c] - 32;
		c++;
	}
	return (n);
}
