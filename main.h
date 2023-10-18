#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_integer(va_list list);
char *itoa(long int num, int base);
int _strlen(const char *str);
int print(char *str);
int _putchar(char c);
int buffer(char c);

#endif
