#include "main.h"
#include <stdio.h>

/**
 * main - Entry Point. Function copies the contents of one file to another.
 * @argc: argument count
 * @argv: Parameter name
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fd1, fd2, i, j, k, n;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	i = read(fd1, buf, BUFSIZ);
	fd2 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	n = write(1, buf, i);

	if ((fd2 == -1) || (n == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd1);
		exit(99);
	}

	j = close(fd1);
	k = close(fd2);
	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd1);
		exit(100);
	}
	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd2);
		exit(100);
	}
	return (0);
}
