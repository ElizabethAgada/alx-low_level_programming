#include <stdio.h>

/**
 * main - prints d name of d file it was compiled from, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
