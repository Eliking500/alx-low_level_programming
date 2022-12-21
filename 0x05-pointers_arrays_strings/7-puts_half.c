#include"main.h"
/**
 * puts_half -> prints half of the string
 * @str: string parameter
 */

void puts_half(char *str)
{
	int e, n;

	for (e = 0; str[e] != '\0'; ++e)
		;
	if (e % 2 == 0)
	{
		for (n = e / 2; str[n] != '\0'; ++n)
			_putchar(str[n]);
	} else
	{
		for (n = ((e - 1) / 2) + 1; str[n] != '\0'; ++n)
			_putchar(str[n]);
	}
	_putchar('\n');
}
