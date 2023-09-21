#include "main.h"
/**
 * rot13(char *)-encodes a string using rot13
 * @a: input
 * Return : b
 */
char *rot13(char *a)
{
	int i;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ROT13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *b = a;

	while (*a)
	{
		for (i = 0 ; i <= 52 ; i++)
		{
			if (*a == data[i])
			{
				*a = ROT13[i];
				break;
			}
		}
		a++;
	}
	return (b);
}
