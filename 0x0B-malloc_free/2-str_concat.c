#include "main.h"
/**
 * str_concat - Function that concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: Returns the concatenated string on success, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int length1 = 0;
	int length2 = 0;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	while (s1[length1] != '\0')
	{
		length1++;
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	s3 = malloc((length1 + length2 + 1) * sizeof(char));
		if (s3 == NULL)
		{
			return (NULL);
		}
	for (i = 0; i < length1; i++)
	{
		s3[i] = s1[i];
	}
	for (i = length1; i < length1 + length2; i++)
	{
		s3[i] = s2[i - length1];
	}
	s3[i] = '\0';
return (s3);
}
