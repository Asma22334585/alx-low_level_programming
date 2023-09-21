#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;
	int z;

	for (x = 0, y = (n - 1) ; x < y ; x++, y--)
	{
		z = a[x];
		a[x] = a[y];
		a[y] = z;
	}
}
