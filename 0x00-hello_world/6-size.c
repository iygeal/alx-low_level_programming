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

	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of long int: %zu byte(s)\n", sizeof(long));
	printf("Size of long long int: %zu byte(s)\n", sizeof(long long));
	printf("Size of float: %zu byte(s)\n", sizeof(float));
return (0);

