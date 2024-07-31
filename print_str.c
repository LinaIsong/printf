#include "main.h"

/**
 * _printf_string - prints a string
 * @arg: string arguments to be printed
 *
 * Return: Length of string printed
 */
int _printf_string(va_list arg)
{
	char *str;
	int length;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	while (*str)
	{
		write(1, str, 1);
		str++;
		length++;
	}

	return (length);
}
