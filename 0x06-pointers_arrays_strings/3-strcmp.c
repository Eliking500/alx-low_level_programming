/**
 * _strcmp - a function that compares two strings
 * @d1: string 1 input to compare
 * @d2: against this other string 2
 * Return: 0 if d1 and d2 are equal
 * negative integer if the stopping character
 * in @d1 was less than the stopping
 * character in @d2
 * positive integer if the stopping character
 * in @d1 was greater than the stopping
 * character in @d2
 */

int _strcmp(char *d1, char *d2)
{
	int x = 0, z;

	/**
	 * iterate through src and
	 * compare it with dest
	 */
	while (d1[x] != '\0' && d2[x] != '\0')
	{
		/**
		 * if they differ by a single character
		 * don't iterate further
		 */
		if (d1[x] != d2[x])
		{
			/**
			 * return the difference between
			 * the two cahracters
			 */
			z = d1[x] - d2[x];
			break;
		}
		else
		{
			z = d1[x] - d2[x];
		}
		x++;
	}

	return (z);
}
