#include "main.h"
#include <stdio.h>

/**
 * print_buffer - a function that prints a buffer
 * @b: buffer
 * @size: size
 * Retuen: void
 */
void print_buffer(char *b, int size)
{
	int a, m, c;

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
		for (c = 0 ; c < 10 ; c++)
		{
			if (c < m)
				printf("%02x", *(b + a + c));
			else
				printf(" ");
			if (c % 2)
				printf(" ");
		}
	}
}

