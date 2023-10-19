#include "main.h"

/**
 * create_file - the cresating of file
 * @filename: it points to the name of file to be created
 * @text_content: it points to the string to write to the file
 * Return: 1 on success otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int love, peace, joy = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (joy = 0; text_content[joy];)
			joy++;
	}

	love = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	peace = write(love, text_content, joy);

	if (love == -1 || peace == -1)
		return (-1);

	close(love);

	return (1);
}
