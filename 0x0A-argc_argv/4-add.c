#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Function that adds positive numbers
 * @argc: The argument count
 * @argv: The argument vector - the actual arguments
 * Return: 0 = success; 1 = failure
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	if (argc == 1)
		printf("0\n");
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			add = add + atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	return (0);
}
