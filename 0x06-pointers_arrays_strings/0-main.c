#include "main.h"
#include <stdio.h>

/**
 * main - checks the code for ALX School students.
 * Return: Always 0.
 */

int main(void)
{
	char a1[98] = "Hello ";
	char a2[] = "World!\n";
	char *ptr;

	printf("%a\n", a1);
	printf("%a", a2);
	ptr = _strcat(a1, a2);
	printf("%a", a1);
	printf("%a", a2);
	printf("%a", ptr);
	return (0);
}
