#include "main.h"
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
    unsigned int i = 0, j = 0, k;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    while (s1[i] != '\0')
        i++;
    while (s2[j] != '\0')
        j++;
    if (n > j)
        n = j;
    s3 = malloc(i + n + 1) * sizeof(char);
    if (s3 == NULL)
        return (0);

    for (k = 0; k < i; k++)
        s3[k] = s1[k];
    for (; k < (i + n); k++)
        s3[k] = s2[k - i];
    s3[k] = '\0';
    return (s3);
