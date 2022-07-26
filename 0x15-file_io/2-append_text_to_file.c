#include "main.h"

/**
 * append_text_to_file - Appends file text
 * @filename: pointer to filename
 * @text_content: Null terminated string to append file with
 *
 * Return: 1 if success, -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n, i;
	char *buf;

	if (!filename)
	{
		return (-1);
	}

	n = 0;

	while (text_content[n])
	{
		n++;
	}

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	buf = malloc(sizeof(char) * n);

	if (text_content == NULL)
	{
		return (1);
	}

	i = write(1, buf, n);

	if ((i == -1) || (i != n))
	{
		return (-1);
	}

	free(buf);
	close(fd);
	return (1);
}
