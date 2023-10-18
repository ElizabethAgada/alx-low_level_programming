#include "main.h"

/**
 * print_binary - program that prints d equivalent of a decimal no that
 * prints a binary
 * @n: the number of binary to be printed
 */

void print_binary(unsigned long int n)
{
	int abigail, bro_able = 0;
	unsigned long int maze;

	for (abigail = 63; abigail >= 0; abigail--)
	{
		maze = n >> abigail;
		if (maze & 1)
		{
			_putchar('1');
			bro_able++;
		}
		else if (maze)
			_putchar('0');
	}
	if (!maze)
		_putchar('0');
}
