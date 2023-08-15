#include <stdio.h>

/**
 * main - Entry point
 * Description: 'print a;phabets in lower case'
 * Return: always 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
