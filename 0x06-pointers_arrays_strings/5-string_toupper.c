#include "main.h"
/**
 * string_toupper -  changes all lowercase letters of a string to uppercase
 *
 * Return :0
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
