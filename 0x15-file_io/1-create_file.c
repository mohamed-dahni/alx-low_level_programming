#include "main.h"

/**
 * create_file - ceate a file if it doesn't exist
 *	and if it is truncate it and write the content to it
 * @filename: the path to the file
 * @text_content: text content to be written to the file
 * Return: 1 if success -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	}
		while (text_content[len])
			len++;
	}

	o = open(filename, O_RDWR | O_CREAT | O_TRUNC, 600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

