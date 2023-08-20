#include "main.h"

/**
 * _abs - function that computes absolute value of an integer
 * @i: function parameter
 *
 * Return: i or -i
 */
int _abs(int i)
{
	if (i < 0)
		return (-i);
	else
		return (i);
}
