#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function that prints name of file a program is compiled from.
 * Return: 0 = Success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
