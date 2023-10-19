#include "main.h"

/**
 * append_text_to_file - this appends a text at the end of a file
 * @filename: its a pointer to the name of file
 * @text_content: this is the string to add to the end of d file
 * Return: 1 on success otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int lisa, betty, lizzy = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lizzy = 0; text_content[lizzy];)
			lizzy++;
	}
	lisa = open(filename, O_WRONLY | O_APPEND);
	betty = write(lisa, text_content, lizzy);

	if (lisa == -1 || betty == -1)
		return (-1);

	close(lisa);

	return (1);
}
