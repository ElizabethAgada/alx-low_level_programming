#include "main.h"

/**
 * print_line - print straight line on the terminal
 * @n: function parameter
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= n; i++)
			_putchar('_');
	}
}
