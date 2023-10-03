#include "main.h"
#include <stdlib.h>
/**
 * create_array- creates an array of chars
 * @size: size of array
 * @c: char
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *x = malloc(size);

	if (size == 0 || x == 0)
		return (0);
	while (size--)
		x[size] = c;
	return (x);
}
