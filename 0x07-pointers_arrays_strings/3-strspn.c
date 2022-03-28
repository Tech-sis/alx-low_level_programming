#include "main.h"
/**
 * _strspn - length of a prefix substring
 * @s: pointer to string
 * @accept: pointer to address
 * Return: pointer to substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			if (!accept[j])
			{
				break;
			}
		}
	}
	return (k);
}
