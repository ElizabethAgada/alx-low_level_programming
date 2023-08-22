#include <stdio.h>

/**
 * main - print even numbers of fibonnaci
 * Return: 0
 */
int main(void)
{
	int limit = 4000000;
	unsigned long int term1 = 1;
	unsigned long int term2 = 2;
	int next;
	unsigned long int sum = 2;

	while (next <= limit)
	{
		next = term1 + term2;
		if (next % 2 == 0)
			sum = sum + next;
		term1 = term2;
		term2 = next;
	}
	printf("%lu\n", sum);
	return (0);
}
