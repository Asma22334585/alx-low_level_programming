#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: x
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x += _strlen_recursion(s + 1) + 1;
	}

	return (x);
}
