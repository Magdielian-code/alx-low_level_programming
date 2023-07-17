#include <stdio.h>

/**
 * main - Entry poin
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1, digit2;

	/* Loop through possible combinations of two digits */
	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			/* Add comma and space after all combination */
			if (digit1 == 8 && digit2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
