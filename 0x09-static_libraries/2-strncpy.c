#include "main.h"

/**
 * _strncpy - function to copy a string
 * @dest: function parameter 1
 * @src: function parameter 2
 * @n: function parameter 3
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
