#include "main.h"

/**
 * create_file - create a file
 * @filename: the name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: if the function fails 1 otherwise 0
 */

int create_file(const char *filename, char *text_content)
{
	int j, o;
	int  len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	j = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	o = write(j, text_content, len);

	if (j == -1 || o == -1)
		return (-1);

	close(j);
	return (1);
}
