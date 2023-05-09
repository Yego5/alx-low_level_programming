#include "main.h"

/**
 * append_text_to_file - this appends text at the end of a file.
 * @filename: the pointer to a name of the file.
 * @text_content: String to add to the end of file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file do not exist then user lacks write permissions - -1.
 *         else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int k, p, ln = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
			ln++;
	}

	k = open(filename, O_WRONLY | O_APPEND);
	p = write(k, text_content, ln);

	if (k == -1 || p == -1)
		return (-1);

	close(k);

	return (1);
}
