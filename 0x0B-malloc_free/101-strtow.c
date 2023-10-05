#include "main.h"
/**
 * strtow - Function that splits a string into two words
 * @str: The string to be split
 * Return: Returns a pointer or NULL
 */
char **strtow(char *str)
{
	int i, j, k, length = 0, count = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
	}
	words = (char **)malloc((count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	i = 0;
	while (str[i] == ' ')
	{
		i++;
	}
	for (j = 0; j < count; j++)
	{
		length = 0;
	while (str[i + length] != ' ' && str[i + length] != '\0')
		length++;

	words[j] = (char *)malloc((length + 1) * sizeof(char));
	if (words[j] == NULL)
		return (NULL);
	for (k = 0; k < length; k++)
	{
		words[j][k] = str[i + k];
		words[j][length] = '\0';
		i += length + 1;
	}
		while (str[i - 1] == ' ')
		{
			i++;
		}
	}
		words[count] = NULL;
	return (words);
}

