#include "main.h"

/**
 * _putchar - writes the characters to the  standard output
 * @c: Characters
 * Return: On success 1.
 * On error, -1 is returned, and errno is appropriately set.
 */
int _putchar(char c)
{
	return (buffer(c));
}

/**
 * buffer - Safe for the characters in buffer
 * @c: Characters
 * Return: 1
 **/
int buffer(char c)
{
	static char buffer[1024];
	static int i;

	if (c == -1 || i == 1024)
	{
		write(1, buffer, i);
		i = 0;
	}

	if (c != -1)
		buffer[i++] = c;

	return (1);
}
