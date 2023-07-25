#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: string.
 *
 * Returns Length.
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
