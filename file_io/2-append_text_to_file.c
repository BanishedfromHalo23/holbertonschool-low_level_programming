#include "main.h"

/**
 * append_text_to_file - function with two arguments.
 * @filename: pointer.
 * @text_content: pointer.
 * Return: SUCCESS 1, or FAILED -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int count = 0;
	int output = 0;
	int fd = 0;

	if (filename != NULL)
		fd = open(filename, O_WRONLY | O_APPEND);
	else
		return (-1);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
	}
	else
		return (1);

	output = write(fd, text_content, count);
	if (output == -1)
		return (-1);
	close(fd);
	return (1);
}
