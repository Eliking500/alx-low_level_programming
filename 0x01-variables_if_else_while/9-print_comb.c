#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry - point
 * Description: prints all single number of base 10
 * startingfrom 0, folowed by anew line
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(a + '0');
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
