#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *c = "";
	va_list ap;

	va_start(ap, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", c, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", c, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", c, va_arg(ap, double));
					break;
				case 's':
					s = va_arg(ap, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", c, s);
					break;
				default:
					i++;
					continue;
			}
			c = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(ap);
}
