#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: A variable number of strings to be printed
 *
 * Description: if seperator is NULL, it is not printed.
 * if one of the strings is NULL, (nil) is printed instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int p;
	char *str;

	va_start(list, n);

	for (p = 0; p < n; p++)
	{
		str = va_arg(list, char *);

		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);

		if (p != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
