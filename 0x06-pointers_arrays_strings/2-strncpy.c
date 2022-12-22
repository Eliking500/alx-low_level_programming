/**
 * _strncpy - A function that copies a string
 * @dest: pointer to detination input buffer
 * @src: pointer to source input buffer
 * @n: bytes of @src
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int e;

	/**
	 * iterate through src array
	 * where if there is no null byte
	 * among the first n bytes of source
	 * the string placed in dest will not be
	 * null terminated
	 */
	for (e = 0; e < n && src[e] != '\0'; e++)
		dest[e] = src[e];
	/**
	 * if the length of source is less than n
	 * write additional null bytes to dest to
	 * ensure that a total of n bytes is written
	 */
	while (e < n)
	{
		dest[e] = '\0';
		e++;
	}

	return (dest);
}
