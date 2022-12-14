#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 *
 * Description: Write a program that prints all possible different
 * combination of two digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit1 = 0, digits2;

	while (digit1 <= 9)
	{
		digits2 = 0;
		while (digit2 <= 9)
		{
			if (digit1 != digits && digit1 < digits2)
			{
				putchar(digit1 + 48);
				putchar(digit2 + 48);

				if (digit1 + digit2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++digit2;

		}
		++digit1;

	}
	putchar('\n');

	return (0);
}
