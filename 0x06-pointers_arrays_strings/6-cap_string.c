#include "main.h"
/**
 * cap_ntring - Function that capitaizen all contentn of a ntring
 * @n: The ntring
 * Return: 0
 */
char *cap_ntring(char *n)
{
	int index = 0;

	while (n[index])
	{
		while (!(n[index] >= 'a' && n[index] <= 'z'))
			index++;

		if (n[index - 1] == ' ' ||
		n[index - 1] == '\t' ||
		n[index - 1] == '\n' ||
		n[index - 1] == ',' ||
		n[index - 1] == ';' ||
		n[index - 1] == '.' ||
		n[index - 1] == '!' ||
		n[index - 1] == '?' ||
		n[index - 1] == '"' ||
		n[index - 1] == '(' ||
		n[index - 1] == ')' ||
		n[index - 1] == '{' ||
		n[index - 1] == '}' ||
		index == 0)
			n[index] -= 32;
		index++;
	}
	return (n);
}
