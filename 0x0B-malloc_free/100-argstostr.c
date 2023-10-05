#include "main.h"
/**
 * argstostr - This function concatenates all the arguments of our program
 * @ac: Argument count
 * @av: Argument variable
 * Return: Pointer or NULL
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int length = 0;
	char *outcome;
	int position = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			length++;
			j++;
		}
		length++;
	}
	length++;

	outcome = (char *)malloc(length * sizeof(char));
	if (outcome == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			outcome[position++] = av[i][j];
			j++;
		}
		outcome[position++] = '\n';
	}
	outcome[position] = '\0';
return (outcome);
}
