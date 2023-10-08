#include "main.h"

#define ERR_MSG "Error"

/**
 * _is_digit - Function that determines if a string contains digits
 * @s: The string to be checked for digits
 *
 * Return: 1 if digit, 0 if a non-digit
 */
int _is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - Function that returns the length of a string
 * @s: The string whose length is to be returned
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _errors - Function that checks for errors
 * Return: void, exit with 98
 */
void _errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - Function that multiplies two positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int len1, len2, len, remain, digit1, digit2, *outcome, i, a = 0;

	num1 = argv[1], num2 = argv[2];
	if (argc != 3 || !_is_digit(num1) || !_is_digit(num2))
		_errors();
	len1 = _strlen(num1);
	len2 = _strlen(num2);
	len = len1 + len2 + 1;
	outcome = malloc(len * sizeof(int));
	if (outcome == NULL)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		outcome[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = num1[len1] - '0';
		remain = 0;
		for (len2 = _strlen(num2) - 1; len2 >= 0; len2--)
		{
			digit2 = num2[len2] - '0';
			remain = outcome[len1 + len2 + 1] + (digit1 * digit2) + remain;
			outcome[len1 + len2 + 1] = remain % 10;
			remain /= 10;
		}
		if (remain > 0)
			outcome[len1 + len2 + 1] += remain;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (outcome[i])
			a = 1;
		if (a)
			_putchar(outcome[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(outcome);
	return (0);
}
