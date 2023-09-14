#include <stdio.h>
#include <math.h>

/**
 * main - Main Function
 * Description: Find and print the largest prime factor of the given
 * number 612852475143
 * Return: 0 = successfully
 */

int main(void)
{
	int a;
	long num = 612852475143;

	for (a = (int) sqrt(num); a > 2; a++)
	{
		if (num % a == 0)
		{
			printf("%d\n", a);
			break;
		}
	}

	return (0);
}
