#include <stdio.h>
#include "main.h"

/**
 * main - prints program name
 * @argc: number of arguments to be given
 * @argv: array of arguments to be given
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
