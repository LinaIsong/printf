#include "main.h"

/**
 * _printf_string - prints a string
 * @arg: string arguments to be printed
 *
 * Return: Always (Success) 0
 */
int _printf_string(va_list arg)
{
	char *str;
	int i, length;

	str = va_arg(val, char *);

	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
}
