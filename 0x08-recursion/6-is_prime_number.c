#include "main.h"

/**
 * is_prime - Checks if a given number is prime.
 * @n: The number to check for primality.
 * @c: The iterator.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}
/**
 * is_prime_number - Checks if a given number is prime.
 * @n: The number to check for primality.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
