#include "main.h"
/**
 * print_b - convert to binary
 * @val: A va_list that contains the unsigned int to be printed in binary
 * Return: integer
 */

int print_b(va_list val)
{
	int flag = 0;
	int count = 0;
	int a, b = 1, c;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int d;

	for (a = 0; a < 32; a++)
	{
		d = ((b << (31 - a)) & num);
		if (d >> (31 - a))
			flag =  1;
		if (flag)
		{
			c = d >> (31 - a);
			_putchar(c + '0');
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
