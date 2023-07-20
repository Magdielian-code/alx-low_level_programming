#include "main.h"

/**
 * this program cheks for uppercase letters
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	/* Check if the character is an uppercase letter */
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
