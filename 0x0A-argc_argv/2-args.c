#include <stdio.h>

/**
 * main - print all arguements
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
		printf("%s\n", argv[k]);
	return (0);
}
