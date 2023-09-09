#include <stdio.h>
/**
 * main - A program that prints a guided combination of two numbers.
 * Return: 0 = success!
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 8; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			putchar('0' + x);
			putchar('0' + y);
			if (x == 8 && y == 9)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
return (0);
}
