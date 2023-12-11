#include "main.h"
/**
 * _isalpha - Checks if character is alpha
 * @c: Parameter for checking
 * Return: 1 = success
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
