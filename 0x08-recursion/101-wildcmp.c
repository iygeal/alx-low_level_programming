#include "main.h"
/**
 * wildcmp - This function checks if 2 strings are identical
 * @s1: First string
 * @s2: Second string
 * Return: 1 if identical, 0 if they are not
 */


int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	else if (*s2 == '*')
	{
		if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
			return (0);
		else if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
	}

	return (0);


}
