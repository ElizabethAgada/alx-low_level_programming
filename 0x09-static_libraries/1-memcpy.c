#include "main.h"

/**
 * _memcpy - function copies n bytes from a memory area to another
 * @src: source memory
 * @dest: destination memory
 * @n: number of bytes copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int z;

	for (z = 0 ; z < n ; z++)
		dest[z] = src[z];
	return (dest);
}
