#include "main.h"

/**
 * checker- Function used to check char string
 * @s: the string
 * @start: Start of index
 * @end  : End of index
 * Return: 1 if empty, 0 if not
 */
int checker(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (checker(s, start + 1, end - 1));
}
/**
 * _strlen_recursion - This function returns the length of a string.
 * @s: the string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		int count = _strlen_recursion(s + 1);

		return ((1) + count);
	}
	return (0);
}
/**
 * is_palindrome - This function checks for emptiness in strings
 *  * @s: A given string to check
 * Return: 1 if empty, 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (checker(s, 0, len - 1));

}
