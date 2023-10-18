#include "main.h"

/**
 * print_int - Prints numbers
 * @list: Numbers to print
 *
 * Return: Length of the numbers printed
 **/
int print_int(va_list list)
{
	char *ptr_buff;
	int size;

	ptr_buff = itoa(va_arg(list, int), 10);

	size = print((ptr_buff != NULL) ? ptr_buff : "NULL");

	return (size);
}
