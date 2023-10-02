#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function that multiplies two numbers
 * @argc: The argument counter
 * @argv: The argument vector
 * Return: 0 = Success; 1 = Error
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		mul = mul * atoi(argv[i]);
		printf("%d\n", mul);
	}

	return (0);
}
