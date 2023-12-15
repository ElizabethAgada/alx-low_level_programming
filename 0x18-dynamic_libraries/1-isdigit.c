#include "main.h"

/**
 * _isdigit - a function that checks for a digit
 * @c: parameter check
 * Return: 1 on success 0 on failure
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
