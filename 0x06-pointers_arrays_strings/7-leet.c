#include "main.h"

/**
 * leet - a function that encodes into a string 1337
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int z, f;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (z = 0; n[z] != '\0'; z++)
	{
		for (f = 0; f < 10; f++)
		{
			if (n[z] == s1[f])
			{
				n[z] = s2[f];
			}
		}
	}
	return (n);
}

