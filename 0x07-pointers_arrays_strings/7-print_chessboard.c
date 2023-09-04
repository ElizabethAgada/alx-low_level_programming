#include "main.h"

/**
 * print_chessboard - a function that prints a chessboard
 * @a: pointer to pointer to print
 * Retuen: void
 */
void print_chessboard(char (*a)[8])
{
	int m, k;

	for (m = 0; m < 8; m++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[m][k]);
		}
		_putchar ('\n');
	}
}
