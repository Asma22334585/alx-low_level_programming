#include "main.h"
/**
 * _strpbrk- searches a string for any of a set of bytes
 * @s: input
 * @accept: input
 * Return: int
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;
	char *p;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (s[x] == accept[y])
			{
				p = &s[x];
				return (p);
			}
			y++;
		}
		x++;
	}
	return (0);
}
