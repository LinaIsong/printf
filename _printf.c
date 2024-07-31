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
		{"%i", _printf_ints}, {"%b", _printf_b}
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (1);
	}

Now:
	while (format[i] != '\0')
	{
		j = 4;
		while (j >= 0)
		{
			if (sp[j].spec[0] == format[i] && sp[j].spec[1]
					== format[i + 1])
			{
				len += sp[j].fmt(args);
				i = i + 2;
				goto Now;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
