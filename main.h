#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include<stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
void swap(char *x, char *y);
char* reverse(char *buffer, int i, int j);
char* itoa(int value, char* buffer, int base);
int digitNum(int n);
void decToBin(int);


#endif /* MAIN_H */
