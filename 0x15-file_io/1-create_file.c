#include "main.h"

/**
 * create_file - Creates a text file
 * @filename: name of file to be created
 * @text_content: NULL terminated string to write to file
 *
 * Return: 1 on success, -1 if failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, n, i; /*n need to be no. of charcters in text_content*/
	char *buf;

	/*Check if filename is NULL*/
	if (filename == NULL)
	{
		return (-1);
	}
	/*Create file using open*/
	fd = open(filename, O_CREAT | S_IRUSR | S_IWUSR | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	n = 0;
	while (text_content != NULL)
	{
		n++;
	}

	/*Create buf to allocate memory*/
	buf = malloc(sizeof(char) * n);

	i = write(1, buf, n);

	/*Check if write failed*/
	if ((i == -1) || (i != n))
	{
		return (-1);
	}

	/*Create empty file if contents are NULL*/

	free(buf);
	close(fd);
	return (1);

}
