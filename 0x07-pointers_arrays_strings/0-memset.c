/**
 * _memset - a function that fills
 * memory with a constant byte
 *
 * @s: input pointer to char type
 * represents the pointerto the
 * block of memory to fill
 * @b: input variable of char type
 * represents the character to fill s
 * @n: unsigned int variable
 * the number of bytes to be filled
 *
 * Return: A pointer to yhe filed memory
 * area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	/**
	 * declare an unsigned int
	 * because we are storing a
	 * value that will always be
	 * non-negatiev (zero or positive)
	 */
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

