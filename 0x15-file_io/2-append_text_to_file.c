#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: A pointer to the name of the file to append.
 * @text_content: NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wrt, len = 0;

	if (filename == 0)
		return (-1);
	opn = open(filename, O_WRONLY | O_APPEND);
	if (opn == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	wrt = write(opn, text_content, len);
		if (wrt == -1)
			return (-1);
	close(opn);
	return (1);
}
