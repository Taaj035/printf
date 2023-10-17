#include "main.h"

/**
  * _printf - Prints to standard output according to format
  * @format: is a character string.
  * The format string is composed of zero or more directives.
  * Return: The total number of characters printed
  */
int _printf(const char *format, ...)
{
	int print_items = 0;

	va_list args_list;

	if (format == NULL)

	{
		return (-1);
	}

	va_start(args_list, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			print_items++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == '%')
			{
				write(1, format, 1);
				print_items++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(args_list, int);
				write(1, &c, 1);
				print_items++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args_list, char*);
				int str_len = 0;
				while (str[str_len] !=  '\0')
					str_len++;
				write(1, str, str_len);
				print_items += str_len;
			}
		}
		format++;
	}
	va_end(args_list);
	return print_items;
}
