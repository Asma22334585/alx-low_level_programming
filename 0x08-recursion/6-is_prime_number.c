#include "main.h"

int _prime(int n, int i);

/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 * @n: int
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}

/**
 *_prime - calculates if a number is prime
 * @n: int
 * @x: int
 * Return: 1 if n is prime, 0 if not
 */
int _prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (_prime(n, x - 1));
}
