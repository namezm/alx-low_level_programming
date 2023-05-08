#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text: text to write in the file
 * Return: 0 or 1
 */
int append_text_to_file(const char *filename, char *text)
{
	int cp, opf, wrf;

	if (filename == NULL)
		return (-1);
	cp = 0;
	while (text != NULL && text[cp] != '\0')
		cp++;
	opf = open(filename, O_WRONLY | O_APPEND);
	if (text == NULL)
	{
		wrf = write(opf, "", cp);
	}
	else 
	{
		wrf = write(opf, text, cp);
	}
	if (opf < 0 || wrf < 0)
		return (-1);
	close(opf);
	return (1);
}
