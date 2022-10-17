#include "main.h"
/**
 * _printf - a function that produces output according to a format
 * write output to stdout, the standard output stream
 * @format: is a character string. The format string is composed of zero
 * or more directives to handle the following conversion specifiers: c s %
 * Return: the number of characters printed (excluding the null byte used
 * to end output to strings)
 */
int _printf(const char *format, ...)
{
	int counter;

	unsigned int i;

	char c;

	va_list arg;

	va_start(arg, format);

	counter = 0;
	for (; *format != '\0'; format++)
	{
		if (*format != '%')
		{
			c = *format;
			write(1, &c, 1);
			counter++;
		}
		else
		{
			format++;

			switch (*format)
			{
				case 'c':
					i = va_arg(arg, int);
					write(1, &i, 1);
					counter++;
					break;
				case '%':
					c = *format;
					write(1, &c, 1);
					counter++;
					break;
			}
		}
	}
	va_end(arg);
	return (counter);
}
