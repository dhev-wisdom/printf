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
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	/** _printf("Unknown:[%r]\n"); **/
	/** printf("Unknown:[%r]\n"); **/
	_printf("Convert %d to binary: %b\n", 2453, 2453);
	_printf("Binary form of 0 is %b\n", 0);
	_printf("7 to binary: %b. Print with your printf function\n", 7);
	_printf("%b\n", -1024);
	printf("10000000000\n");
	_printf("%b\n", 0);
	_printf("There is %b bytes in %b KB\n", 1024, 1);
	printf("There is 10000000000 bytes in 1 KB\n");
	_printf("%b - %b = %b\n", 2048, 1024, 1024);
	printf("100000000000 - 10000000000 = 10000000000\n");
	return (0);
}
