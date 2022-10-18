#include "main.h"

/**
 * digitNum - Function to count the number of digits in an integer
 * @n: The integer to be checked.
 *
 * Return: The number of digits os the integer.
 */

int digitNum(int n)
{
	int i, counter = 1;

	if (n < 0)
		n *= -1;

	if (n < 10 || n == 0)
		return (counter);

	for (i = 0; n >= 10; i++)
	{
		n /= 10;
		counter++;
	}

	return (counter);
}
