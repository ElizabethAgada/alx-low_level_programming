#include "main.h"

/**
 * _isupper - checks for upper case character
 * @c: parameter to be checked
 * Return: 1 on success 0 on failure
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
