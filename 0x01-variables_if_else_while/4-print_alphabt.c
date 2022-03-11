#include<stdio.h>
/**
 * main - print alphabet except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp != 'q' && 'e')
			putchar(alp);
	}
		return (1);
	putchar('\n');
	return (0);
}
