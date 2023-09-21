#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @x: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *x)
{
	int y = 0;

	while (x[y])
	{
		while (!(x[y] >= 'a' && x[y] <= 'z'))
		{
			y++;
		}
		if (x[y - 1] == ' ' || x[y - 1] == '\t' || x[y - 1] == '\n' ||
				x[y - 1] == ',' || x[y - 1] == ';' || x[y - 1] == '.' ||
				x[y - 1] == '!' || x[y - 1] == '?' || x[y - 1] == '"' ||
				x[y - 1] == '(' || x[y - 1] == ')' || x[y - 1] == '{' ||
				x[y - 1] == '}' || y == 0)
			x[y] -= 32;
		y++;
	}
	return (x);
}

