#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function that determines minimum coin change for
 * given amount of money
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: 0 is success, 1 is NOT
 */
int main(int argc, char *argv[])
{
	int i;
	int cents;
	int cents_values[] = {25, 10, 5, 2, 1};
	int cents_types;
	int total_cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}

	cents = atoi(argv[1]);

	cents_types = sizeof(cents_values) / sizeof(cents_values[0]);

	total_cents = 0;

	for (i = 0; i < cents_types; i++)
		while (cents >= cents_values[i])
		{
			cents -= cents_values[i];
			total_cents++;
		}
	printf("%d\n", total_cents);
return (0);
}
