#include "main.h"
#include <string.h>
/**
 * create_file - check the code
 * @filename: name of the file
 * @text: texte to write in the file
 * Return: 0 or 1
 */
int create_file(const char *filename, char *text)
{
	ssize_t opf, wrf;

	if (filename == NULL)
		return (-1);
	opf = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (text == NULL)
	{
		wrf = write(opf, "", 0);
	}
	else
	{
		wrf = write(opf, text, strlen(text));
	}
	if (opf < 0 || wrf < 0)
		return (-1);
	close(opf);
	return (1);
}
