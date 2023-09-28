#include "main.h"

int square(int n, int x);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square(n, 0));
}

/**
 * square - recurses to find the natural
 * square root of a number
 * @n: int
 * @x: int
 *
 * Return: int
 */
int square(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (square(n, x + 1));
}
