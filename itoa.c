#include "main.h"

/**
 * itoa - converts from integer to ascii standard
 * @number: the number to be converted
 * @base: base to which number is being converted
 *
 * Return: char
 * https://gist.github.com/narnat/95733cd0ad7bfac0d90697292914c407
 **/
char *itoa(long int number, int base)
{
	static char *array = "0123456789abcdef";
	static char buffer[50];
	char sign = 0;
	char *ptr;
	unsigned long n = number;

	if (number < 0)
	{
		n = -number;
		sign = '-';
	}
	ptr = &buffer[49];
	*ptr = '\0';

	do{
		*--ptr = array[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--ptr = sign;
	return (ptr);
}
