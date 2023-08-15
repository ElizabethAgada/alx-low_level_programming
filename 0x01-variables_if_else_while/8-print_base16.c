#include <stdio.h>

/**
 * main - print all the numbers of base sixteen
 * Return: Always 0
 */

int main(void)
{
	int i;
	char m;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (m = 'a'; m <= 'f'; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
