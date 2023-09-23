#include <stdio.h>
#include "lists.h"

/**
 * main - multiplication two numbers
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
