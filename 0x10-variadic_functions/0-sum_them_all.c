#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - the sum of all its paramters.
 * @n: int
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i = n, sum = 0;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
