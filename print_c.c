#include "main.h"

/**
 * _printf_char - prints character ti standard out
 * @arg: character to be printed
 *
 * Return: Always (success) 0
 */
int _printf_char(va_list arg)
{
	char str;

	str = va_arg(arg, int);
	_putchar(str);

	return (0);
}
