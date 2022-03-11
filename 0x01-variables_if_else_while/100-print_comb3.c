#include<stdio.h>
/**
 * main - print a sequence of numbers
 *
 * Return: Always 0 (success);
 */
int main(void)
{
	int i, j;

	i = 48;
	j = 48;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (i == 57 && j == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
