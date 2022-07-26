#include "main.h"

/**
 * read_textfile - Reads text file to stdout
 * @filename: pointer to filename
 * @letters: number of letters to be printed
 *
 * Return: No of charcters if success, 0 if error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, fd, j;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);

	i = read(fd, buf, letters);

	if (i == -1)
	{
		return (0);
	}

	j = write(1, buf, letters);

	if (j == -1)
	{
		return (0);
	}

	free(buf);

	close(fd);

	return (j);



}
