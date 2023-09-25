#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: Pointer
 * @size: Size of pointer
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int total1 = 0;
	int total2 = 0;

	for (i = 0; i < size; i++)
	{
	total1 += a[i * size + i];
	total2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", total1, total2);
}
