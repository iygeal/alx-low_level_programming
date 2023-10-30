#include "main.h"
/**
 * read_textfile - Function to read and print file to stdout
 * @filename: The file to be read and printed
 * @letters: Number of letters to be read
 * Return: Returns actual number of letters or 0 if failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int num_read, num_written, fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = (char *)malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	num_read = read(fd, buffer, letters);
	if (num_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	num_written = write(STDOUT_FILENO, buffer, num_read);

	free(buffer);
	close(fd);
	if (num_written != num_read)
		return (0);
	return (num_written);
}
