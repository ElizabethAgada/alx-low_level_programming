#include <stdio.h>

/**
 * main -Entry point
 * Description: 'print letters and exclude some'
 * Return: Always 0
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
		putcher(i);
		putcher('\n')
	return (0);
}
