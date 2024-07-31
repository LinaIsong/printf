#include "main.h"

/**
 * _printf - prroduces output according to specified format
 * @format: Format identifier supplied
 *
 * Return: Number of characters printed excluding null bytes
 * in the case of strings
 */
int _printf(const char *format, ...)
{
	fmt_link sp[] = {
		{"%c", _printf_char}, {"%s", _printf_string},
		{"%%", _printf_percent}, {"%d", _printf_dec},
		{"%i", _printf_ints}, {"%b", print_b}
	};

	va_list args;
	int i = 0, j, len = 0;
	int p;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}


	while (format[i] != '\0')
	{
		p = 0;
		for (j = 0; j < sizeof(sp) / sizeof(sp[0]); j++)
		{
			if (sp[j].spec[0] == format[i] && sp[j].spec[1] == format[i + 1])
			{
				len += sp[j].fmt(args);
				i = i += 2;
				p = 1;
				break;
			}
		}
		if (!p)
		{
			_putchar(format[i]);
			len++;
			i++;
		}
	}
	va_end(args);
	return (len);
}
