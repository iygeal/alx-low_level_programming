#include "main.h"
/**
 * is_prime_number - Function that finds prime number recursively
 * @n: The number
 * Return: 1 if n is prime or 0 if not
 * @y: Number used for prime check
 */
int prime_check(int n, int y);

int is_prime_number(int n)
{
	return (prime_check(n, 2));
}
/**
 *prime_check - function that check if number prime or not
 *@n: the number
 *@y: Natural number to check with for prime
 *Return: 1 if prime, 0 if not
 */

int prime_check(int n, int y)
{
	if (n <= 1)
		return (0);
	else if (y >= n)
		return (1);
	else if ((n % y) == 0)
		return (0);
	return (prime_check(n, y + 1));

}
