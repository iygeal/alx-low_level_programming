#include <stdio.h>
/**
 * main - This program prints various sizes on this computer.
 * Return: 0 (Signifies success)
 */
int main(void)
{
	char a;
	int i;
	long int b;
	long long int c;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);

