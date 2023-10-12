#include "function_pointers.h"
/**
 * main - Function to print opcodes
 * @argc: Argument counter
 * @argv: Argument count *
 * Return: 0 = success
 */
int main(int argc, char *argv[])
{
	int (*f)(int, char**);
	int i = 0;
	int hexSize;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	
	f = main;
	while (i < atoi(argv[1]))
	{
		hexSize = *(unsigned char *)(f + i);
		printf("%.2x", hexSize);
		if (i < atoi(argv[1]) - 1)
			putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
