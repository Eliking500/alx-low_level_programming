#include"main.h"

/**
 * puts2 - prints every chaacter of a string
 *
 * @str: string parameter input
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++1)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
