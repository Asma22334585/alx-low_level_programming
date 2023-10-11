#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array
 * @size: number of elements in the array
 * @cmp:  pointer to the function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array && size && cmp)
		while (x < size)
		{
			if (cmp(array[x]))
				return (x);
			x++;
		}
	return (-1);
}
