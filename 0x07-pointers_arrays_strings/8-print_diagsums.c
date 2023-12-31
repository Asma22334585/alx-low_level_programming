#include "main.h"
#include <stdio.h>
/**
 * print_diagsums-  prints the sum of the two diagonals
 * @a: array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int x, y = 0, z = 0;

	for (x = 0; x < size; x++)
	{
		y += a[x];
		z += a[size - x - 1];
		a += size;
	}
	printf("%d, ", y);
	printf("%d\n", z);
}
