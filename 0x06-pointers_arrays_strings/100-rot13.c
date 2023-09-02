#include "main.h"

/**
 * rot13 - a finction that encodes a string using rot13
 * @s: the pointer to the string parameter
 * Return: *s
 */
char *rot13(char *s)
{
	int z, f;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
		char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

		for (z = 0 ; s[z] != '\0' ; z++)
		{
			for (f = 0 ; f < 52 ; f++)
			{
				if (s[z] == data1[f])
				{
					s[z] = datarot[f];
					break;
				}
			}
		}
		return (s);
}
