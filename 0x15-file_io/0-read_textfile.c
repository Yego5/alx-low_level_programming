#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read the text file and print to STDOUT.
 * @filename: the text file being read
 * @letters: number of letters to be read
 * Return: w- the actual number of bytes read and printed
 * 0 when the function fails or the filename is always NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buf;
ssize_t bytes_read, ret;

if (!filepath)
return (0);

fd = open(filepath, O_RDONLY);
if (fd == -1)
{
close(fd);
return (0);
}

buf = malloc(sizeof(char) * num_chars);
if (!buf)
{
close(fd);
return (0);
}

bytes_read = read(fd, buf, num_chars);

if (bytes_read == -1)
{
close(fd);
free(buf);
return (0);
}

ret = write(STDOUT_FILENO, buf, bytes_read);

if (ret == -1)
{
close(fd);
free(buf);
return (0);
}
close(fd);
return (bytes_read);
}

