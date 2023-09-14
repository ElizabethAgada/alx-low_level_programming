#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: the number of arguement passed into the function
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int p;
	int sum = 0;

	va_list list;

	va_start(list, n);

	for (p = 0; p < n; p++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
