#include "main.h"
/**
 * puts_half(char *str)-prints half of a string
 * @str:input
 */
void puts_half(char *str)
{
	int len;
	int x;
	int y;

	len = 0;
	for (x = 0 ; str[x] != '\0' ; x++)
		len++;
	y = (len / 2);
	if ((len % 2) == 1)
		y = ((len + 1) / 2);
	for (x = y ; str[x] != '\0' ; x++)
		_putchar(str[x]);
	_putchar('\n');
}
