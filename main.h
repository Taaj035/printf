#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>


/* printf.c */
int _printf(const char *format, ...);
int print_int(va_list list);

/* util.c */
char *itoa(long int num, int base);
int _strlen(const char *str);
int print(char *str);


/* _putchar.c */
int _putchar(char c);
int buffer(char c);

#endif
