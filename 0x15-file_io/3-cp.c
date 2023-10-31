#include "main.h"
/**
 * main - Function that copies from A to B
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 = success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, num_read, num_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((num_read = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		if (num_read == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]), exit(98);
		num_written = write(file_to, buffer, num_read);
		if (num_written != num_read)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
