#include<stdio.h>
/**
 * main - print a sequence of numbers
 *
 * Return: Always (0);
 */
int main(void)
{
	int i = 48;
	int j = 48;

	while (i < 58)
	{
		putchar(i);
		while (j < 58)
		{
			putchar(j);
		}
		if (i == j)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		j++;
	}
	i++;
	putchar('\n');
	return (0);
}
