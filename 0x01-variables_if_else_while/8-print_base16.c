#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char letter;

	/* Print numbers from 0 to 9 */
	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	/* Print lowercase letters from 'a' to 'f' */
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
