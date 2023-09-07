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

	printf("Size of char: %lu byte(s)\n", sizeof(a));
	printf("Size of int: %lu byte(s)\n", sizeof(i));
	printf("Size of long int: %lu byte(s)\n", sizeof(b));
	printf("Size of long long int: %lu byte(s)\n", sizeof(c));
	printf("Size of float: %lu byte(s)\n", sizeof(f));
return (0);

