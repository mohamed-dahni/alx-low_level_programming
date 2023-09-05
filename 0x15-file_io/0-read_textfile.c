#include "main.h"

/**
 * read_textfile - read a file and print it to stdout
 * @filename: the path to the file
 * @letters: how many characters to read and print
 * Return: how many characters was printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/* declare necessary variables */
	int fd;
	size_t blen;
	char *buf = (char *) malloc(sizeof(char) * letters);

	/* handle unvalid arguments */
	if (filename == NULL || letters < 1)
		return (0);

	/* open the file and check for failure */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* read the file and check for failure */
	blen = read(fd, buf, letters);
	if (blen <= 0)
		return (0);

	/* write the file to stdout and check for failure */
	blen = write(STDIN_FILENO, buf, letters);
	if (blen <= 0)
		return (1);

	free(buf);
	close(fd);

	return (blen);
}

