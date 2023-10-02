#include "main.h"
/**
 * _strcmp - Function which compares strings
 * @s1: First String
 * @s2: Second string
 * Return: 0, +ve or -ve
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] != '\0' && s2[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	}
	return (0);
}
