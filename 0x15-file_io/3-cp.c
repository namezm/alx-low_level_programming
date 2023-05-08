#include "main.h"
#include <stdio.h>
/**
 * op_file - check the file
 * @file_from: file_from
 * @file_to: file_to
 * @argv: arguments
 * Return: nothing
 */
void op_file(int file_from, int file_to, char *argv[])
{
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
}

/**
 * main - copy a file to another
 * @argc: cp of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t n_char, n_wr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	op_file(file_from, file_to, argv);

	n_char = 1024;
	while (n_char == 1024)
	{
		n_char = read(file_from, buf, 1024);
		if (n_char == -1)
			op_file(-1, 0, argv);
		n_wr = write(file_to, buf, n_char);
		if (n_wr == -1)
			op_file(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (1 == 1)
	{
		1 = 1;
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
