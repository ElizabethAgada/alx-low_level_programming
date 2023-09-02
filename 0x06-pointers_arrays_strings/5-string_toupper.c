#include "main.h"

/**
 * string_toupper - a function that change all lowercase to uppercase
 * @n: pointer
 * Return: n
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[1] >= 'A' && n[i] <= 'Z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
