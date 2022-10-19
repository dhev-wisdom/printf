#include "main.h"

/**
 * convertToBaseTen - Converts any number from a given base to base 10.
 * @num: The number to be converted
 * @base: The base of the number to be converted.
 *
 * Return: num in base 10.
 */

int _pow(int y, int z)
{
	int t, p = 1;

	for (t = 0; t < z; t++)
	{
		p *= y;
	}

	return (p);
}


int convertToBaseTen(int num, int base)
{
	int j, k, l = 0, m;

	if (num > 0)
	{
		for (m = 0; num > 0; m++)
		{
			j = num % 10;
			num /= 10;
			k = j * _pow(base, m);
			l += k;
		}
	}

	return (l);
}
