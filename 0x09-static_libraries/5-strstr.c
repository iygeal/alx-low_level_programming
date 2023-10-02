#include "main.h"
/**
 * _strstr - Function that finds the first occurence of substring
 * @haystack: Base string
 * @needle: The substring
 * Return: Pointer if located; NULL if not
 */
char *_strstr(char *haystack, char *needle)
{
	char *i, *j;

	while (*haystack)
	{
	i = haystack;
	j = needle;
	while (*j && (*i == *j))
	{
	i++;
	j++;
	}
	if (*j == '\0')
	return (haystack);
	haystack++;
	}
	return ('\0');
}
