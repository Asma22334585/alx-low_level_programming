#include "main.h"

int check(char *s, int x, int y);
int _strlen_recursion(char *s);

/**
 * is_palindrome - returns 1 if a string is a palindrome
 * @s: string
 * Return: 1 if  a string is a palindrome, 0  if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check - checks the characters recursively for palindrome
 * @s: string to check
 * @x: int
 * @y: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int check(char *s, int x, int y)
{
	if (*(s + x) != *(s + y - 1))
		return (0);
	if (x >= y)
		return (1);
	return (check(s, x + 1, y - 1));
}
