#include <stdio.h>
#include "main.h"

/**
 * main - gives the program a number of arguments to be printed
 * @argc: number of arguments to be printed
 * @argv: array of arguments to be printed
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
