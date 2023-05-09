#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads and prints from  file
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when the function fails or the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fld;
	ssize_t wr;
	ssize_t t;

	fld = open(filename, O_RDONLY);
	if (fld == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(fld, buff, letters);
	wr = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fld);
	return (wr);
}
