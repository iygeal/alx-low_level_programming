#include "main.h"
/**
 * _strdup - Function that returns a pointer to newly alocated space in memory
 * @str: A string
 * Return: Returns new string or NULL
 */
char *_strdup(char *str)
{
	int i;
	int j;
	int n = 0;
	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		n++;
	}
	str2 = malloc(n * sizeof(char) + 1);
	if (str2 == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < n; j++)
	{
		str2[j] = str[j];
	}
	str2[j] = '\0';
return (str2);
}
