#include"main.h"
/**
 * print_array -> print n elements
 *
 * @n: elements parameter input
 * @a: string parameter input
 *
 */
void print_array(int *a, int n)
{
	int e;

	for (e = 0; e < n; ++e)
	{
		if (e != (n - 1))
			printf("%d, ", a[e]);
		else
			printf("%d", a[e]);
	}
	printf("\n");
}
