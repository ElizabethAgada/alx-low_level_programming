#include <stdio.h>

/**
 * main - print alphabets in reverse
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar(i);
	return (0);
}
