#include <stdio.h>
/**
 * main - Function that prints number of arguments passed to it
 * @argc: Argument count(s) to be printed
 * @argv: Argument vector, a pointer to array of pointers
 * Return: 0 = success
 */
int main(int argc, char __attribute__((unused))*argv[])
{
	printf("%d\n ", argc - 1);
	return (0);
}
