#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - check the file
 * @of: file
 * Return: -
 */
void sed_file(int of)
{
	if (close(of) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", of);
		exit(100);
	}
}
/**
 * main - copy file
 * @argc: arguments count
 * @argv: arguments  valur
 * Return: -
 */
int main(int argc, char **argv)
{
	char *text;
	int input, output, rf, wf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	text = malloc(1024);
	if (text == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	input = open(argv[1], O_RDONLY);
	output = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	rf = read(input, text, 1024);
	do {
		if (input < 0 || rf < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(text);
			exit(98);
		}
		wf = write(output, text, rf);
		if (output < 0 || wf < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(text);
			exit(99);
		}
		rf = read(input, text, 1024);
		output = open(av[2], O_WRONLY | O_APPEND);
	} while (rf > 0);
	free(text);
	sed_file(input);
	sed_file(output);
	return (0);
}
