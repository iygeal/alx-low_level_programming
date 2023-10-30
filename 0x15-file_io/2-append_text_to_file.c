#include "main.h"
/**
 * append_text_to_file - Appends text to a file
 * @filename: The file
 * @text_content: The text content to be appended
 * Return: 1 on success; -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
			written = write(fd, text_content, strlen(text_content));
	}
	close(fd);
	if (written == -1)
	{
		return (-1);
	}
	return (1);
}
