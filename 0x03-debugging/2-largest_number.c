#include "main.h"
/**
 * largest_number - return tha largest of 3 numbers
 * @a: first interger
 * @b: second interger
 * @c: third interger
 * Return: largest_number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c && b > a)
	{
		largest = b;
	}
	else if (c > b)
	{
		largest = c;
	}
	else
	{
		largest = b;
	}
	return (largest);
}
