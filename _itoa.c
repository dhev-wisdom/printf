#include "main.h"

/**
 * _itoa - Function that converts an integer into an array or a string
 * @value: The integer to be converted.
 * @buffer: Array to store the resulting null-terminated string
 * @base: Numerical base used to represent the number as a string
 *
 * Return: The buffer.
 */

char* itoa(int value, char* buffer, int base)
{
	int n, r, i;

	if (base < 2 || base > 32)
		return (buffer);

	n = abs(value);

	i = 0;
	while (n)
	{
		r = n % base;

		if (r >= 10)
			buffer[i++] = 65 + (r - 10);
		else
			buffer[i++] = 48 + r;

		n /= base;
	}

	if (i == 0)
		buffer[i++] = '0';

	if (value < 0 && base == 10)
		buffer[i++] = '-';

	buffer[i] = '\0';

	return (reverse(buffer, 0, (i - 1)));
}
