#include "main.h"
#include <stdio.h>

/**
 * print_buffer - a function that prints a buffer
 * @b: buffer
 * @size: size
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int a, m, f;

	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		m = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		for (f = 0; f < 10; f++)
		{
			if (f < m)
				printf("%02x", *(b + a + f));
			else
				printf(" ");
			if (f % 2)
				printf(" ");
		}
		for (f = 0; f < m; f++)
		{
			int c = *(b + a + f);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		a += 10;
	}
}

