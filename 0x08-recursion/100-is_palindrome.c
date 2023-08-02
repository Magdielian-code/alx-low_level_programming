#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: String input.
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - Compares characters of a string.
 * @s: String input.
 * @n1: Smallest iterator.
 * @n2: Largest iterator.
 * Return: 1 if characters match, 0 otherwise.
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: Input string.
 * Return: 1 if palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
