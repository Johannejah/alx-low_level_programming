#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints it to the POSIX standard output
 * @filename : name of the file to read
 * @letters: number of letters it should read and print
 * Return: 0 when function fails or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t jo;
	ssize_t h;
	ssize_t n;

	jo = open(filename, O_RDONLY);
	if (jo == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	n = read(jo, buf, letters);
	h = write(STDOUT_FILENO, buffer, n);

	free(buffer);
	close(jo);
	return (h);
}
