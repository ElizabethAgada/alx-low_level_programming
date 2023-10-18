#include "main.h"

/**
 * get_endianness - checking the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int amaka;
	char *angela;

	amaka = 1;
	angela = (char *)&amaka;
	return (*angela);
}
