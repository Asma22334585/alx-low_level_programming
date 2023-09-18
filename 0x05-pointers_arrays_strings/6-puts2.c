#include "main.h"
/**
 * puts2(char *str)-prints every other character of a string
 * @str:input
 */
void puts2(char *str)
{
	int len = 0;
	int x = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	x = len - 1;
	for (z = 0 ; z <= x ; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
