#include "main.h"
/**
 * print_rev(char *s)-prints a string, in reverse
 * @s:string
 */
void print_rev(char *s)
{
	int len = 0;
	int x;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	for (x = len ; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
