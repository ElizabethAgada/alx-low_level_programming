#include "main.h"

/**
 * read_textfile - this is a function that reads a text file
 * and prints it to POBIX standard output
 * @filename: filename (string pointer)
 * @letters: the number of letters printed
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ant;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	ant = malloc(sizeof(char) * letters);
	t = read(fd, ant, letters);
	w = write(STDOUT_FILENO, ant, t);

	free(ant);
	close(fd);
	return (w);
}
