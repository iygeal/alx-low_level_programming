#include "main.h"
/**
 * create_file - Function that creates a file and writes to it
 * @filename: Name of file to be created
 * @text_content: Text content to be written to filename
 * Return: 1 on succes; -1 otherwise.
 */
int create_file(const char *filename, char *text_content)
{
	int new_file;
	ssize_t written;
	size_t text_length;

	if (filename == NULL)
		return (-1);
	new_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (new_file == -1)
		return (-1);
	if (text_content != NULL)
	{
		text_length = strlen(text_content);
		written = write(new_file, text_content, text_length);
		if (written < 0 || written != (ssize_t)text_length)
		{
			close(new_file);
			return (-1);
		}
	}
	close(new_file);
	return (1);
}
