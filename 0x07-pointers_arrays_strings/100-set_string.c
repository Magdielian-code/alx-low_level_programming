#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to the source address.
 * @to: target address to be assigned to 's'.
 * Return: No return.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
