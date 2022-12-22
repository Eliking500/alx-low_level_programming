/**
 * _strcat - function that concatenates
 * two strings.
 * @dest: pointer to destination input
 * @src: pointer to source input
 * Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int b, b2;

	b = 0;
	/*find the size of dest array*/
	while (dest[b])
		b++;

	/*iterate through each src array value without the null byte*/
	for (b2 = 0; src[b2] ; b2++)
		/*append src[b2] to dest[b] while overwritting the null byte in dest*/
		dest[b++] = src[b2];

	return (dest);
}
