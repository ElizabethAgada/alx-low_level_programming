#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int p, q, add = 0;

	for (p = 1; p < argc; p++)
	{
		for (q = 0; argv[p][q] != '\0'; q++)
		{
			if (!isdigit(argv[p][q]))
				printf("Error\n");
			return (1);
		}
	}
	add += atoi(argv[p]);
	printf("%d\n", add);
	return (0);

}

