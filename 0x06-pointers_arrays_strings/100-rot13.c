#include "main.h"
/**
 * rot13 - change letter
 * @s: analiz string
 * Return: String with letter
 */
char *rot13(char *s)
{
	char x[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "MnopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKL";
	int y = 0, z;

	while (*(s + y) != '\0')
	{
		for (z = 0; z <= 51; z++)
		{
			if (*(s + y) == x[z])
			{
				*(s + y) = rot[z];
				break;
			}
		}
	y++;
	}
	return (s);
}
