#include "main.h"

/**
 * append_text_to_file - append the content to the end of file
 * @filename: file path
 * @text_content: text content to be written
 * Return: 1 in success, -1 in failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL || text_content == NULL)
		return (-1);

	while (text_content[len])
		len++;

	o = open(filename, O_APPEND | O_WRONLY);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

