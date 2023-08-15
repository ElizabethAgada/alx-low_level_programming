#include <stdio.h>

/**
 * main - Entry point
 * Description:'a program that prints lower letters and then uppercase letters'
 * Return: Always 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; ++i)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; ++i)
		putchar(i);
	putchar('\n');
	return (0);
}
