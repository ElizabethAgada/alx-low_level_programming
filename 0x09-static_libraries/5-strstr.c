#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: function parameter 1
 * @needle: function parameter 2
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;
		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return (0);
}
