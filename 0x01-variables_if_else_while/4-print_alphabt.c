#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: A code that outputs the alphabet in lowercase, and uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	/* This would print in lowercase alphabet */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	/* this would print uppercase alphabet */
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
