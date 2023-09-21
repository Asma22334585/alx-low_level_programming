#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @y: pointer
 *
 * Return: y
 */
char *string_toupper(char *y)
{
	int x;

	for (x = 0; y[x] != '\0' ; x++)
	{
		if (y[x] >= 97 && y[x] <= 122)
		{
			y[x] = y[x] - 32;
		}
	}
	return (y);
}
