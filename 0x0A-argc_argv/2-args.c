#include <stdio.h>
/**
 * main - Function that prints all arguments passed to it
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 = success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
