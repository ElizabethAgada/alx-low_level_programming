#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers given as parameter
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int p;

	va_list list;

	va_start(list, n);

	for (p = 0; p < n; p++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));

		else if (separator && p != 0)
			printf(" % d", va_arg(list, int));

		else
			printf("%s%d", separator, va_arg(list, int));

	}

	va_end(list);

	printf("\n");
}
