#include "main.h"
/**
 * cap_string - Function that capitalizes all contents of a string
 * @n: The string
 * Return: 0
 */
char *cap_string(char *n)
{
	int len = 1, j;
	char c[] = ",;.!?\"(){}";

	if (n[0] > 96 && n[0] < 123)
		n[0] -= 32;


	while (n[len] != '\0')
	{
		int t = n[len - 1];

		if (t == 32 || t == 9 || t == 10)
		{
			if (n[len] > 96 && n[len] < 123)
				n[len] -= 32;
		}
		for (j = 0; j < 10; j++)
		{
			if (t == (int) c[j])
			{
				if (n[len] > 96 && n[len] < 123)
					n[len] -= 32;
				break;
			}
		}
		len++;
	}

	return (n);
}
