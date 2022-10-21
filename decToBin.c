#include "main.h"

/**
 * decToBin - Function converts decimal number to a binary number
 * @n: The decimal number to be converted
 */

int decToBin(int n)
{
	int a[94], i, c, count = 0;
	char buffer[94];

	if (n == 0)
	{
		write(1, itoa(0, buffer, 10), 1);
		write(1, itoa(0, buffer, 10), 1);
		count += 2;
		return (count);
	}

	if (n < 0)
		n *= -1;

	for (i = 0; n > 0; i++)
	{
		a[i] = n % 2;
		n /= 2;
	}

	for (i = i - 1; i >= 0; i--)
	{
		c = a[i];
		write(1, itoa(c, buffer, 10), 1);
		count++;
	}

	return (count);
}
