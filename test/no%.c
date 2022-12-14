#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("Length:[%d, %i]\n", len, len2);
	_printf("Character:[%c]\n", NULL);
	printf("Character:[%c]\n", 'H');
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	len = _printf("String:[%s]\n", NULL);
	len2 = printf("String:[%s]\n", "I am a string !");
	printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	return (0);
}
