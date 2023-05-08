#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it
 * @filename: name of the file
 * @n: cp
 * Return: actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t n)
{
	ssize_t opf, ref, wrf;
	char *outp;

	if (n == 0 || filename == NULL)
		return (0);
	outp = malloc(n);
	if (outp == NULL)
		return (0);
	opf = open(filename, O_RDONLY);
	ref = read(opf, outp, n);
	wrf = write(STDOUT_FILENO, outp, ref);
	if (opf < 0 || ref != wrf || wrf < 0  || ref < 0)
	{
		free(outp);
		return (0);
	}
	free(outp);
	close(opf);
	return (wrf);
v}
