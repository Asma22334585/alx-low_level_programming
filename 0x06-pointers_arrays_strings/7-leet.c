#include "main.h"
/**
 * leet(char *a)-encodes a string into 1337
 * @a:input
 * Return:b
 */
char *leet(char *a)
{
	char *b = a;
	unsigned int i;
	char lett[] = {'a', 'e', 'o', 't', 'l'};
	int value[] = {4, 3, 0, 7, 1};

	while (*a)
	{
		for (i=0 ; i < sizeof(lett) / sizeof(char) ; i++)
		{
			if (*a == lett[i] || *a == lett[i] - 32)
			{
				*a = 48 + value[i];
			}
		}
		a++;
	}
	return (b);
}
