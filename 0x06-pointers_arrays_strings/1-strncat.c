/**
 * _strncat - a function that concatenates two strings.
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int b, p;

	b = 0;

	/*find size of dest array*/
	while (dest[b])
		b++;

	/**
	 * src does not need to be null terminated
	 * if it contains n or more bytes
	 */
	for (p = 0; p < n && src[p] != '\0'; p++)
		dest[b + p] = src[p];
	/*null terminates dest*/
	dest[b + p] = '\0';

	return (dest);
}
