#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	// declare necessary variables
	int fd;
	size_t blen;
	char *buf = (char *) malloc(sizeof(char) * letters);

	// handle unvalid arguments
	if (filename == NULL || letters < 1)
		return (0);

	// open the file and check for failure
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		return (0);
	}

	// read the file and check for failure
	size_t blen = read(fd, buf, letters);
	if (blen <= 0)
		return (0);

	// write the file to stdout and check for failure
	size_t blen = write(STDIN_FILENO, buf, letters);
	if (blen <= 0)
		return (0);

	free(buf);
	close(fd);

	return (blen);
}

