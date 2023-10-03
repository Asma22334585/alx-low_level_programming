#include "main.h"
#include <stdlib.h>
/**
 * argstostr-  concatenates all the arguments of your program
 * @ac: int
 * @av: arguments
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, x, y = 0, z = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
			z++;
	}
	z += ac;
	s = malloc(sizeof(char) * z + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
		{
			s[y] = av[i][x];
			y++;
		}
		if (s[y] == '\0')
		{
			s[y++] = '\n';
		}
	}
	return (s);
}
