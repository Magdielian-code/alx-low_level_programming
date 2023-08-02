#include "main.h"

/**
 * _print_rev_recursion - Recursively prints a string in reverse.
 * @s: Pointer to the string to be printed in reverse.
 * Description: This function recursively prints each character of the string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
