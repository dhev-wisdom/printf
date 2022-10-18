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
	int counter = 0, i;
	const char *p;
	char c, *s;
	va_list arg;

	va_start(arg, format);

	if (!(format))
		return (-1);
	for (p = format; *p != '\0'; p++)
	{
		if (*p != '%')
		{
			c = *p;
			write(1, &c, 1);
		}
		else
		{
			switch (*++p)
			{
				case 'c':
					i = va_arg(arg, int);
					write(1, &i, 1);
					break;
				case '%':
					c = *p;
					write(1, &c, 1);
					break;
				case 's':
					for (s = va_arg(arg, char *); *s; s++)
					{
						c = *s;
						write(1, &c, 1);
						counter++;
					}
					counter--;
					break;
			}
		}
		counter++;
	}
	va_end(arg);
	return (counter);
}
