#include "main.h"
/**
 * string_nconcat - Function that concatenates n-bytes
 * of two strings
 * @s1: First string
 * @s2: Second string
 * @n: String length
 * Return: Returns pointer to new string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, value;
	int len1 = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	ptr = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	if (n >= len2)
		value = len2;
		else if (n < len2)
			value = n;
		for (i = len1; i < len1 + value; i++)
		{
			ptr[i] = s2[i - len1];
		}
	ptr[i] = '\0';
	return (ptr);
}

