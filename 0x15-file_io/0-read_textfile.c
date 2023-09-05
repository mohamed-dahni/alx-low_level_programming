#include "main.h"

/**
 * read_textfile - read a file and print it to stdout
 * @filename: the path to the file
 * @letters: how many characters to read and print
 * Return: how many characters was printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL || letters < 1)
		return (0);

	buffer = (char *) malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDIN_FILENO, buffer, letters);

	if (o == -1 || r == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (w);
}

