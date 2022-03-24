#include "main.h"
/**
 * *rot13 - prints rot13 encryption
 * @s: points to a string
 * Return: pointer to s
 */

char *rot13(char *s)
{
	int i, j;
	char input[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 54; j++)
		{
			if (s[i] == input[i] && s[i] == input[j])
			{
				s[i] = output[j];
				break;
			}
		}
	}

	return (s);
}
