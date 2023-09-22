#include "main.h"

/**
 * leet - This function encodes a string into 1337.
 * @s: String parameter
 * Return: s
 */

char *leet(char *s)
{
	int a;
	int leet[256];

	for (a = 0; a < 256; a++)
	{
		leet[a] = 0;
	}

	leet[97] = leet[65] = 52;
	leet[101] = leet[69] = 51;
	leet[111] = leet[79] = 48;
	leet[116] = leet[84] = 55;
	leet[108] = leet[76] = 49;

	for (a = 0; s[a] != '\0'; a++)
		if (leet[(int) s[a]] != 0)
			s[a] = leet[(int) s[a]];
	return (s);
}
