#include "main.h"
/**
 * _strcpy -> a string
 *
 * @src: source a string parameter input
 * @dest: destination of string
 * Return: pointer to dest input
 */
char *_strcpy(char *dest, char *src)
{
	int e, k = 0;

	for (e = 0; src[e] != '\0'; ++e)
	{
		dest[k] = src[e];
		++k;
	}
	dest[k] = '\0';

	return (dest);
}
