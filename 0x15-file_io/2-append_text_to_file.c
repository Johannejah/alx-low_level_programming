#include "main.h"

/**
 * append_text_to_file - appends text at te end of a file
 * @filename: a pointer to the name of the file
 * @text_content: the string to add to the end of the file
 * Return: -1 if the function fails or filename is NULL
 * -1 if the file does not exist the user lacks writte permissions
 * otherwise 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int j, o, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++
	}

	j = open(filename, O_WRONLY | O_APPEND);
	o = write(j, text_content, len);

	if (j == -1 || w == -1)
		return (-1);
	close(j);
	return (1);
}
