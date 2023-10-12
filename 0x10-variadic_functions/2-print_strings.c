#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints strings
 * @separator: The string to be printed between strings
 * @n: The number of strings passed to the function
 * @...: string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int x = n;
	char *c;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (x--)
		printf("%s%s", (c = va_arg(ap, char *)) ? c : "(nil)",
				x ? (separator ? separator : "") : "\n");
	va_end(ap);
}
