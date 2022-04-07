#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to copy from string 2
 * Return: pointer to concatenated string
 */
char *string_noncat(char *s1, char *s2, unsigned int n)
{
    char *s3;
    unsigned int i, j;

    s3 = malloc(sizeof(char) * (strlen(s1) + n + 1));
    if (s3 == NULL)
    {
        return (NULL);
    }
    for (i = 0; s1[i] != '\0'; i++)
    {
        s3[i] = s1[i];
    }
    for (j = 0; j < n; j++)
    {
        s3[i + j] = s2[j];
    }
    s3[i + j] = '\0';
    return (s3);
}