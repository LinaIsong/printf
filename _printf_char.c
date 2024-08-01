#include "main.h"
/**
 * _printf_char - Prints a character
 * @arg: The argument list containing the character to print
 *
 * Return: The number of characters printed (1)
 */

int _printf_char(va_list arg)
{
	char c = va_arg(arg, int);

	return (_putchar('c'));
}
